/*
    Foo-YC20 VSTi plugin

Copyright 2010-2011 Sampo Savolainen (v2@iki.fi). All rights reserved.
Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

   1. Redistributions of source code must retain the above copyright notice, 
      this list of conditions and the following disclaimer.

   2. Redistributions in binary form must reproduce the above copyright notice,
      this list of conditions and the following disclaimer in the documentation
      and/or other materials provided with the distribution.

   3. Neither the name Foo YC20, its author, nor the names of its contributors
      may be used to endorse or promote products derived from this software
      without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY SAMPO SAVOLAINEN ``AS IS'' AND ANY EXPRESS OR
IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
SHALL SAMPO SAVOLAINEN OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
LIABILITY, WHETHERIN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
ADVISEDOF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include <iostream>
#include <map>

#include <audioeffect.cpp>
#include <audioeffectx.h>
#include <audioeffectx.cpp>

#include <foo-yc20.h>
#include <yc20-precalc.h>
#include <yc20-base-ui.h>

#ifdef __WIN32__
#include <cairo-win32.h>
#elif __linux__
/* LINUX, NOP */
#else /* __APPLE__*/
#include <Carbon/Carbon.h>
#include <cairo-quartz.h>
#endif

// Note: This is not a runtime dependency to jack! We just use the ringbuffer implementation for VST -> UI communication
#include <jack/ringbuffer.h>

#define NUM_PARAMS 23

#define PARAM_PITCH 0

class FooYC20VSTi : public AudioEffectX
{
	public:
		FooYC20VSTi  (audioMasterCallback, VstInt32, VstInt32);
		~FooYC20VSTi ();

		bool getProductString	(char *);
		bool getVendorString	(char *);
		bool getEffectName	(char *);

		// Vendor version in hex: 0xaabbcc where aa = major, bb = minor, cc = micro
		VstInt32 getVendorVersion () { return 0x010400; };

		void setProgramName	(char *);
		void getProgramName	(char *);
		bool getProgramNameIndexed(VstInt32, VstInt32, char*);

		
		bool getOutputProperties(VstInt32, VstPinProperties*);
		void setSampleRate	(float sampleRate);

		void process		(float **, float **, VstInt32);
		void processReplacing	(float **, float **, VstInt32);
		VstInt32 processEvents	(VstEvents*);

		void setParameter	(VstInt32, float);
		float getParameter	(VstInt32);
		void getParameterName	(VstInt32, char *);
		void getParameterDisplay(VstInt32, char *);

		
		VstInt32 getNumMidiInputChannels ()  { return 1; };

		YC20Processor *yc20;
		std::string label_for_parameter[NUM_PARAMS];

	private:
		char programName[kVstMaxNameLen+1];
};


#ifdef __WIN32__ /*{{{*/

LRESULT CALLBACK yc20WndProcedure(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);

extern HINSTANCE hInstance;

const char yc20WindowClassName[] = "FooYC20WindowClass";


class YC20AEffEditor : public AEffEditor, public YC20BaseUI
{
	public:
		YC20AEffEditor(AudioEffect* fx) 
			: AEffEditor(fx)
			, YC20BaseUI()
			, hdc(0)
			, wm_paint(false)
		{
			rect.left = 0;
			rect.top = 0;
			rect.right = 1024;
			rect.bottom = 160;
			set_scale(0.8);

			exposeRingbuffer = jack_ringbuffer_create(sizeof(Wdgt::Draggable *)*1000);
			if (exposeRingbuffer == NULL) {
				throw "Could not create ringbuffer";
			}

			
			FooYC20VSTi *eff = (FooYC20VSTi *)fx;

			for (int i = 0; i < NUM_PARAMS; i++) {
				draggableForIndex[i] = wdgtPerLabel[eff->label_for_parameter[i]];
				draggableForIndex[i]->setPortIndex(i);
			}

			WNDCLASSEX wc;
			wc.cbSize        = sizeof(WNDCLASSEX);
			wc.style         = CS_HREDRAW | CS_VREDRAW;
			wc.lpfnWndProc   = yc20WndProcedure;
			wc.cbClsExtra    = 0;
			wc.cbWndExtra    = 0;
			wc.hInstance     = hInstance;
			wc.hIcon         = LoadIcon(hInstance, IDI_APPLICATION);
			wc.hIconSm       = LoadIcon(hInstance, IDI_APPLICATION);
			wc.hCursor       = LoadCursor(hInstance, IDC_ARROW);
			wc.hbrBackground = (HBRUSH)(COLOR_WINDOW);
			wc.lpszMenuName  = NULL;
			wc.lpszClassName = yc20WindowClassName;

			if(!RegisterClassEx(&wc)) {
				std::cerr << "Could not register class '" << yc20WindowClassName << "'" << std::endl;
			}


		};

		~YC20AEffEditor()
		{
			jack_ringbuffer_free(exposeRingbuffer);
		}

		

		virtual bool getRect(ERect **r) 
		{
			*r = &rect;
			return true; 
		};

		virtual bool open(void *ptr) 
		{
#ifdef VERBOSE
			std::cerr << "########## open()" << std::endl;
#endif
			AEffEditor::open(ptr); 	
			
			// TODO: Reaper doesn't like us touching its' window. Maybe we need to put in a new window in the window?

			uiWnd = CreateWindow(yc20WindowClassName, "A title",  WS_CHILD, 
					       CW_USEDEFAULT, CW_USEDEFAULT, rect.right, rect.bottom, (HWND)systemWindow, NULL, hInstance, NULL);

			if (!uiWnd) {
				std::cerr << "CreateWindow() returned 0" << std::endl;
			}

			SetWindowLongPtr(uiWnd, GWLP_USERDATA, (LONG_PTR)this);
			
			ShowWindow (uiWnd, SW_SHOW);



			// Set UI controls to what they are in the processor
			FooYC20VSTi *eff = (FooYC20VSTi *)effect;
			for (int i = 0; i < NUM_PARAMS; i++) {
				Control *c = eff->yc20->getControl(eff->label_for_parameter[i]);
				draggableForIndex[i]->setValue(*c->getZone());
			}
			
#ifdef VERBOSE
			std::cerr << " .. exit open()" << std::endl;
#endif

			return true;
		};

		virtual void close() 
		{ 
#ifdef VERBOSE
			std::cerr << "########## close()" << std::endl;
#endif
			AEffEditor::close(); 
		};

		virtual void idle() 
		{
			Wdgt::Draggable *obj;
			//std::cerr << "idle()" << std::endl;

			while ( jack_ringbuffer_read(exposeRingbuffer, 
						(char *)&obj,
						sizeof(Wdgt::Draggable *)) == sizeof(Wdgt::Draggable *)) {
				draw_wdgt(obj);
			}
			//std::cerr << " .. exit idle()" << std::endl;

			AEffEditor::idle(); 
		};

		virtual cairo_t	*get_cairo_surface() 
		{
#ifdef VERBOSE
			std::cerr << "get_cairo_surface()" << std::endl;
#endif
			if (!wm_paint) {
				hdc = GetDC(uiWnd );
			}

			surface = cairo_win32_surface_create(hdc);
			cairo_t *ret = cairo_create(surface);
#ifdef VERBOSE
			std::cerr << " .. exit get_cairo_surface()" << std::endl;
#endif
			return ret;
		}

		virtual void return_cairo_surface(cairo_t *cr) 
		{
#ifdef VERBOSE
			std::cerr << "return_cairo_surface()" << std::endl;
#endif
			cairo_surface_finish(surface);
			YC20BaseUI::return_cairo_surface(cr);
			cairo_surface_destroy(surface);

			if (!wm_paint) {
				ReleaseDC(uiWnd, hdc);
				hdc = 0;
			}
#ifdef VERBOSE
			std::cerr << " .. exit return_cairo_surface()" << std::endl;
#endif
		};

		HDC hdc;
		PAINTSTRUCT ps;

		bool wm_paint;

		jack_ringbuffer_t *exposeRingbuffer;

		// My stuff
		void     value_changed  (Wdgt::Draggable *draggable)
		{
#ifdef VERBOSE
			std::cerr << "value_changed()" << std::endl;
#endif
			float value = draggable->getValue();
			if (draggable->getPortIndex() == PARAM_PITCH) {
				value /= 2.0;
				value += 0.5;
			}
			
			VstInt32 idx = draggable->getPortIndex();
			((AudioEffectX*)effect)->beginEdit(idx);
			effect->setParameterAutomated(idx, value);
			((AudioEffectX*)effect)->endEdit(idx);
#ifdef VERBOSE
			std::cerr << " .. exit value_changed()" << std::endl;
#endif
		};

		void queueChange(VstInt32 idx, float value)
		{
#ifdef VERBOSE
			std::cerr << "queueChange(" << idx << ", " << value << ")" << std::endl;
#endif
			Wdgt::Draggable *obj = draggableForIndex[idx];

			if (!obj->setValue(value)) {
				// Don't queue a change if the value did not change
				return;
			}

			int i = jack_ringbuffer_write(exposeRingbuffer, (char *)&obj, sizeof(Wdgt::Draggable *));
			if (i != sizeof(Wdgt::Draggable *)) {
				std::cerr << "Ringbuffer full!" << std::endl;
			}
#ifdef VERBOSE
			std::cerr << " .. exit queueChange()" << std::endl;
#endif
		}

		HWND uiWnd;

	private:
		cairo_surface_t *surface;

		ERect rect;
		Wdgt::Draggable *draggableForIndex[NUM_PARAMS];

};

//#include <gdiplus.h>

LRESULT CALLBACK yc20WndProcedure(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
	YC20AEffEditor *ui = (YC20AEffEditor *)GetWindowLongPtr( hWnd, GWLP_USERDATA);

#ifdef VERBOSE
	if (Msg != 275) {
		std::cerr << "yc20WndProcedure(xx, " << Msg << ", .., .. ) (userdata = " << ui << ")" << std::endl;
	}
#endif

	double x,y;
	RECT clipRect;
	RECT rect;


	switch(Msg)
	{
	case WM_MOUSEMOVE: 
		x = ((int)(short)LOWORD(lParam)); // GET_X_LPARAM
		y = ((int)(short)HIWORD(lParam)); // GET_Y_LPARAM

		// Catch if dragged outside the window, then released the button
		if ((wParam & MK_LBUTTON) == 0 && ui->is_dragging()) {
			ui->button_released(x,y);
		}
		ui->mouse_movement(x,y);
		return 0;

	case WM_LBUTTONDOWN:
		x = ((int)(short)LOWORD(lParam)); // GET_X_LPARAM
		y = ((int)(short)HIWORD(lParam)); // GET_Y_LPARAM
		ui->button_pressed(x,y);
		return 0;

		// TODO: figure out how to detect dragging outside the box..
	case WM_LBUTTONUP:
		x = ((int)(short)LOWORD(lParam)); // GET_X_LPARAM
		y = ((int)(short)HIWORD(lParam)); // GET_Y_LPARAM
		ui->button_released(x,y);
		return 0;

	case WM_PAINT:
		if (ui->hdc) {
			std::cerr << "!! Painting while painting? bad!" << std::endl;
			return 0;
		}

		ui->wm_paint = true;
		{
			GetUpdateRect(hWnd, &clipRect, true);
			HDC tmpHdc = BeginPaint(ui->uiWnd, &ui->ps);
			GetClientRect(ui->uiWnd, &rect);

			int x = rect.left;
			int y = rect.top;
			int width  = rect.right - rect.left;
			int height = rect.bottom - rect.top;

			// Setup double-buffered HDC for the ui->draw() to draw on
			ui->hdc = CreateCompatibleDC(tmpHdc) ;
			HBITMAP hBitmap = CreateCompatibleBitmap(tmpHdc,width,height);
			HGDIOBJ hOldBitmap = SelectObject(ui->hdc, hBitmap );

			// Draw using the update rect
			ui->draw(clipRect.left,    clipRect.top,
				 clipRect.right  - clipRect.left,
				 clipRect.bottom - clipRect.top, true);	

			// Flush double-buffering
			BitBlt(tmpHdc, x, y, width,  height, ui->hdc, 0, 0, SRCCOPY) ;
        		SelectObject( ui->hdc, hOldBitmap );
        		DeleteObject( hBitmap );
        		DeleteDC( ui->hdc );
			EndPaint(ui->uiWnd, &ui->ps);
			ui->hdc = 0;

		}

		ui->wm_paint = false;

		return 0;
	}
	return DefWindowProc(hWnd, Msg, wParam, lParam);
}
#endif /* __WIN32__ */ /*}}}*/

#ifdef __APPLE__ /*{{{*/

/* prototypes */
static OSStatus WindowEventHandler(EventHandlerCallRef nextHandler, EventRef event, void *userData);
static OSStatus MouseEventHandler(EventHandlerCallRef nextHandler, EventRef event, void *userData);
static OSStatus carbonEventHandler(EventHandlerCallRef nextHandler, EventRef event, void *userData);
static int yc20open = 0;
static bool yc20hic = false;
#define defControlStringMask CFSTR ("com.studionumbersix.foo.yc20.%d")
#define OSXMENUBARHEIGHT (22)

class YC20AEffEditor : public AEffEditor, public YC20BaseUI
{
	public:
		YC20AEffEditor(AudioEffect* fx)
			: AEffEditor(fx)
			, YC20BaseUI()
		{
			_rect.left = 0;
			_rect.top = 0;
			_rect.right = 1024;
			_rect.bottom = 160;
			set_scale(0.8);

			exposeRingbuffer = jack_ringbuffer_create(sizeof(Wdgt::Draggable *)*1000);
			if (exposeRingbuffer == NULL) {
				throw "Could not create ringbuffer";
			}

			FooYC20VSTi *eff = (FooYC20VSTi *)fx;

			for (int i = 0; i < NUM_PARAMS; i++) {
				draggableForIndex[i] = wdgtPerLabel[eff->label_for_parameter[i]];
				draggableForIndex[i]->setPortIndex(i);
			}
		};

		~YC20AEffEditor()
		{
#ifdef VERBOSE
			std::cerr << "########## destruct()" << std::endl;
#endif
			if (yc20open) close();
			jack_ringbuffer_free(exposeRingbuffer);
		}


		virtual bool getRect(ERect **rect)
		{
			*rect = &_rect;
			return true;
		};

		virtual bool open(void *ptr)
		{
#ifdef VERBOSE
			std::cout << "########## open()" << std::endl;
#endif
			AEffEditor::open(ptr); 	
			yc20open=1;
			OSStatus status;

			WindowAttributes attributes;
			GetWindowAttributes ((WindowRef)systemWindow, &attributes);
			if (attributes & kWindowCompositingAttribute) {
				yc20hic = true;
				CFStringRef defControlString = CFStringCreateWithFormat (NULL, NULL, defControlStringMask, this);

				controlSpec.defType = kControlDefObjectClass;
				controlSpec.u.classRef = NULL;
				EventTypeSpec eventTypes[] = {	
					{kEventClassControl, kEventControlDraw},
					{kEventClassControl, kEventControlHitTest},
					{kEventClassControl, kEventControlClick},
				};

				ToolboxObjectClassRef controlClass = NULL;

				status = RegisterToolboxObjectClass (	defControlString,
										NULL,
										GetEventTypeCount (eventTypes),
										eventTypes,
										NewEventHandlerUPP(carbonEventHandler),
										this,
										&controlClass);

				CFRelease (defControlString);

				if (status == noErr) controlSpec.u.classRef = controlClass;
				if (controlSpec.u.classRef == NULL) return false;

				Rect r = {(short)_rect.top, (short)_rect.left, (short)_rect.bottom, (short)_rect.right};
				status = CreateCustomControl (NULL, &r, &controlSpec, NULL, &controlRef);
			} else {
				yc20hic = false;
				controlRef=NULL;
				controlSpec.u.classRef=NULL;
			}


			if (yc20hic)
			{
				HIViewRef contentView;
				HIViewRef rootView = HIViewGetRoot ((WindowRef)systemWindow);
				if (HIViewFindByID (rootView, kHIViewWindowContentID, &contentView) != noErr)
					contentView = rootView;
				HIViewAddSubview (contentView, controlRef);
#ifdef VERBOSE
				std::cout << "OSX HI Compositing" << std::endl;
#endif
			}
			else
			{
				ControlRef rootControl;
				GetRootControl ((WindowRef)systemWindow, &rootControl);
				if (rootControl == NULL)
					CreateRootControl ((WindowRef)systemWindow, &rootControl);
				EmbedControl(controlRef, rootControl);	
#ifdef VERBOSE
				std::cout << "OSX Quartz native" << std::endl;
#endif
			}

			QDBeginCGContext(GetWindowPort((WindowRef)systemWindow), &context);

			const EventTypeSpec win_events[] = {
				{ kEventClassWindow, kEventWindowClosed },
				{ kEventClassWindow, kEventWindowDrawContent    },
				{ kEventClassWindow, kEventWindowGetMinimumSize },
			//	{ kEventClassWindow, kEventWindowGetMaximumSize },
				{ kEventClassWindow, kEventWindowBoundsChanged  }
			};

			InstallWindowEventHandler((WindowRef)systemWindow, NewEventHandlerUPP(WindowEventHandler),
					GetEventTypeCount(win_events), win_events, this, &windowEventHandler);

#if 1
			const EventTypeSpec mouse_events[] = {
				{ kEventClassMouse, kEventMouseMoved },
				//{ kEventClassMouse, kEventMouseWheelMoved },
				{ kEventClassMouse, kEventMouseDown },
				{ kEventClassMouse, kEventMouseUp },
				{ kEventClassMouse, kEventMouseDragged }
			};
			InstallApplicationEventHandler(NewEventHandlerUPP(MouseEventHandler),
					GetEventTypeCount(mouse_events), mouse_events, this, &mouseEventHandler);
#endif

			// Set UI controls to what they are in the processor
			FooYC20VSTi *eff = (FooYC20VSTi *)effect;
			for (int i = 0; i < NUM_PARAMS; i++) {
				Control *c = eff->yc20->getControl(eff->label_for_parameter[i]);
				draggableForIndex[i]->setValue(*c->getZone());
			}

			/* flip canvas coordinates
			 * http://macdevcenter.com/pub/a/mac/2004/11/02/quartz.html */
			Rect rectPort;
			GetWindowPortBounds((WindowRef)systemWindow,&rectPort);
			CGContextTranslateCTM(context, 0, rectPort.bottom);
			CGContextScaleCTM(context, 1.0, -1.0);

#ifdef VERBOSE
			std::cout << " .. exit open()" << std::endl;
#endif
			return true;
		};

		virtual void close()
		{
#ifdef VERBOSE
			std::cout << "########## close()" << std::endl;
#endif
			yc20open=0;

			RemoveEventHandler(windowEventHandler);
			RemoveEventHandler(mouseEventHandler);

			if (controlRef) DisposeControl (controlRef);
			if (controlSpec.u.classRef) {
				OSStatus status = UnregisterToolboxObjectClass ((ToolboxObjectClassRef)controlSpec.u.classRef);
				if (status != noErr)
					std::cout << "UnregisterToolboxObjectClass failed: " <<  status << std::endl;
			}

			CGContextSynchronize(context);
			QDEndCGContext(GetWindowPort((WindowRef)systemWindow), &context);

			AEffEditor::close();
		};


		virtual void idle()
		{
			Wdgt::Draggable *obj;
			//std::cout << "idle()" << std::endl;
			while ( jack_ringbuffer_read(exposeRingbuffer,
						(char *)&obj,
						sizeof(Wdgt::Draggable *)) == sizeof(Wdgt::Draggable *)) {
				draw_wdgt(obj);
			}
			//std::cout << " .. exit idle()" << std::endl;
		
#if 1	
			if (yc20open == 1) {
				yc20open=2;
				Rect rectPort;
				GetWindowPortBounds((WindowRef)systemWindow,&rectPort);
				YC20BaseUI::draw(rectPort.top, rectPort.left, rectPort.right, rectPort.bottom, true);
				InvalWindowRect((WindowRef)systemWindow,&rectPort);
			}
#endif
#if 0
			EventRef theEvent;
			EventTargetRef theTarget;
			OSStatus        theErr;

			theTarget = GetEventDispatcherTarget();
			theErr = ReceiveNextEvent(0, 0, kEventDurationNoWait,true, &theEvent);
			if(theErr == noErr && theEvent != NULL) {
				SendEventToEventTarget (theEvent, theTarget);
				ReleaseEvent(theEvent);
			}

#endif
			AEffEditor::idle();
		};

		virtual cairo_t	*get_cairo_surface()
		{
#ifdef VERBOSE
			std::cout << "get_cairo_surface()" << std::endl;
#endif
			CGContextSaveGState(context);
			surface = cairo_quartz_surface_create_for_cg_context(context, _rect.right, _rect.bottom);
			return cairo_create(surface);
		}

		virtual void return_cairo_surface(cairo_t *cr)
		{
#ifdef VERBOSE
			std::cout << "return_cairo_surface()" << std::endl;
#endif
			YC20BaseUI::return_cairo_surface(cr);

#if 1 /* draw resize bars */
			if (!yc20hic) {
				Rect winRect;
				GetWindowPortBounds((WindowRef)systemWindow,&winRect);

				CGContextBeginPath(context);
				CGContextSetAllowsAntialiasing(context, false);

				//line white
				CGContextSetRGBStrokeColor(context, 0.2, 0.2, 0.2, 0.5);
				CGContextMoveToPoint(context, winRect.right-1, winRect.bottom-1);
				CGContextAddLineToPoint(context, winRect.right-1, winRect.bottom-1);
				CGContextMoveToPoint(context, winRect.right-1, winRect.bottom-5);
				CGContextAddLineToPoint(context, winRect.right-5, winRect.bottom-1);
				CGContextMoveToPoint(context, winRect.right-1, winRect.bottom-9);
				CGContextAddLineToPoint(context, winRect.right-9, winRect.bottom-1);
				CGContextStrokePath(context);

				//line gray
				CGContextSetRGBStrokeColor(context, 0.4, 0.4, 0.4, 0.5);
				CGContextMoveToPoint(context, winRect.right-1, winRect.bottom-2);
				CGContextAddLineToPoint( context, winRect.right-2, winRect.bottom-1);
				CGContextMoveToPoint(context, winRect.right-1, winRect.bottom-6);
				CGContextAddLineToPoint( context, winRect.right-6, winRect.bottom-1);
				CGContextMoveToPoint(context, winRect.right-1, winRect.bottom-10);
				CGContextAddLineToPoint( context, winRect.right-10, winRect.bottom-1);
				CGContextStrokePath(context);

				//line black
				CGContextSetRGBStrokeColor(context, 0.6, 0.6, 0.6, 0.5);
				CGContextMoveToPoint(context, winRect.right-1, winRect.bottom-3);
				CGContextAddLineToPoint( context, winRect.right-3, winRect.bottom-1);
				CGContextMoveToPoint(context, winRect.right-1, winRect.bottom-7);
				CGContextAddLineToPoint( context, winRect.right-7, winRect.bottom-1);
				CGContextStrokePath(context);
			}
#endif
			CGContextRestoreGState(context);
			CGContextFlush(context);
#ifdef VERBOSE
			std::cout << " .. exit return_cairo_surface()" << std::endl;
#endif
		};

		void     value_changed  (Wdgt::Draggable *draggable)
		{
#ifdef VERBOSE
			std::cout << "value_changed()" << std::endl;
#endif
			float value = draggable->getValue();
			if (draggable->getPortIndex() == PARAM_PITCH) {
				value /= 2.0;
				value += 0.5;
			}
			
			VstInt32 idx = draggable->getPortIndex();
			((AudioEffectX*)effect)->beginEdit(idx);
			effect->setParameterAutomated(idx, value);
			((AudioEffectX*)effect)->endEdit(idx);
#ifdef VERBOSE
			std::cout << " .. exit value_changed()" << std::endl;
#endif
		};

		void queueChange(VstInt32 idx, float value)
		{
#ifdef VERBOSE
			std::cout << "queueChange(" << idx << ", " << value << ")" << std::endl;
#endif

			Wdgt::Draggable *obj = draggableForIndex[idx];

			if (!obj->setValue(value)) {
				// Don't queue a change if the value did not change
				return;
			}

			int i = jack_ringbuffer_write(exposeRingbuffer, (char *)&obj, sizeof(Wdgt::Draggable *));
			if (i != sizeof(Wdgt::Draggable *)) {
				std::cout << "Ringbuffer full!" << std::endl;
			}

#ifdef VERBOSE
			std::cout << " .. exit queueChange()" << std::endl;
#endif
		}

		bool sameWindow(WindowRef cmp)
		{
#ifdef DEBUG
			std::cout << " same Window ? " << cmp << " ~ " << (WindowRef)systemWindow << std::endl;
#endif
			if (cmp == (WindowRef)systemWindow) return true;
			return false;
		}

		void aspectWindow(Rect rectNew)
		{
			Rect rectPort;

			_rect.right = rectNew.right - rectNew.left;
			if (_rect.right < 640) _rect.right=640;
			double scale = (double)_rect.right/1280.0;
			set_scale(scale);
			_rect.bottom = (unsigned int) floor(200.0 * scale);

			SizeWindow((WindowRef)systemWindow, _rect.right, _rect.bottom, 1);

			QDEndCGContext(GetWindowPort((WindowRef)systemWindow), &context);
			QDBeginCGContext(GetWindowPort((WindowRef)systemWindow), &context);

			GetWindowPortBounds((WindowRef)systemWindow,&rectPort);
			CGContextTranslateCTM(context, 0, rectPort.bottom);
			CGContextScaleCTM(context, 1.0, -1.0);
		}

		void resizeWindow(void)
		{
			Rect rectPort;
			GetWindowPortBounds((WindowRef)systemWindow,&rectPort);
			aspectWindow(rectPort);

			YC20BaseUI::draw(rectPort.top, rectPort.left, rectPort.right, rectPort.bottom, true);
			InvalWindowRect((WindowRef)systemWindow,&rectPort);
#if 0
			std::cout << " NEW OSX SIZE: "
				<< (short) rectPort.left << "x" << (short) rectPort.top << "|"
				<< (short) rectPort.right << "x" << (short) rectPort.bottom << "|"
				<< std::endl;
#endif
		}

		void resizeWindow(Point winMousePos, Point mousePos)
		{
			Rect rectPort, rectNew, rectConstrain;
			GetWindowPortBounds((WindowRef)systemWindow,&rectPort);
			if( (winMousePos.h <= (rectPort.right - 15)) || (winMousePos.v <= (rectPort.bottom)) )
				return;

			rectConstrain.top=100; // min Height
			rectConstrain.bottom=200; // max Height
			rectConstrain.left=640; // min Width
			rectConstrain.right=1280; // max Width

			ResizeWindow((WindowRef)systemWindow, mousePos, &rectConstrain, &rectNew);
			aspectWindow(rectNew);

#ifdef DEBUG
			std::cout << "OSX resize event:"
				<< rectNew.left << "x" << rectNew.top << "|"
				<< rectNew.right << "x" << rectNew.bottom << "|"
				<< std::endl;
#endif
		}


	private:
		cairo_surface_t *surface;
		ERect _rect;
		Wdgt::Draggable *draggableForIndex[NUM_PARAMS];

		jack_ringbuffer_t *exposeRingbuffer;
		ControlDefSpec controlSpec;
		ControlRef controlRef;
		EventHandlerRef windowEventHandler;
		EventHandlerRef mouseEventHandler;
		CGContextRef context;
};

/* 
http://serenity.uncc.edu/web/ADC/2005/Developer_DVD_Series/April/ADC%20Reference%20Library/documentation/Carbon/Reference/Window_Manager/index.html
http://serenity.uncc.edu/web/ADC/2005/Developer_DVD_Series/April/ADC%20Reference%20Library/documentation/Carbon/Reference/Carbon_Event_Manager_Ref/index.html
*/

static OSStatus carbonEventHandler (EventHandlerCallRef nextHandler, EventRef event, void *userData)
{
	UInt32 eclass = GetEventClass(event);
	UInt32 kind = GetEventKind (event);
        YC20AEffEditor *ui = (YC20AEffEditor *)userData;

	if (eclass != kEventClassControl) return CallNextEventHandler(nextHandler, event);
	switch (kind) {
		case kEventControlDraw:
#ifdef DEBUG
			std::cout << " OSX event: kEventControlDraw" << std::endl;
#endif
			ui->resizeWindow();
			break;
		case kEventControlClick:
#if 0 /* done via 'kEventMouseDragged' and mymousedown */
			if (yc20hic)
			{
				double x,y;
				Point mousePos;
				Point winMousePos;
				GetEventParameter(event, kEventParamMouseLocation, typeQDPoint, 0, sizeof(Point), 0, &mousePos);
				std::cout << "OSX CTRL click: "
					<< mousePos.h << "x" << mousePos.v
					<< std::endl;
				x = (double) winMousePos.h;
				y = (double) winMousePos.v;
				if (x>=0 && y>=0) {
					if (y>=OSXMENUBARHEIGHT) ui->button_pressed(x,y);
				}
			}
#endif
			break;
		case kEventControlHitTest:
#if 0 /* done via kEventMouseMoved: */
			if (yc20hic)
			{
				double x,y;
				Point mousePos;
				Point winMousePos;
				GetEventParameter(event, kEventParamMouseLocation, typeQDPoint, 0, sizeof(Point), 0, &mousePos);
				std::cout << "OSX CTRL mouse: "
					<< mousePos.h << "x" << mousePos.v 
					<< std::endl;
				x = (double) mousePos.h;
				y = (double) mousePos.v;
				if (x>=0 && y>=OSXMENUBARHEIGHT)
					ui->mouse_movement(x,y-OSXMENUBARHEIGHT);
			}
#endif
			break;
		default:
#ifdef VERBOSE
			std::cout << " NEW OSX event: Other" << kind << std::endl;
#endif
			break;
	} 
	return CallNextEventHandler(nextHandler, event);
}

static OSStatus WindowEventHandler(EventHandlerCallRef nextHandler, EventRef event, void *userData)
{
#if 0
	std::cout << "OSX window event" << std::endl;
#endif
	UInt32 eclass = GetEventClass(event);
	UInt32 kind = GetEventKind (event);
	Point minmaxHeightAndWidth;
        YC20AEffEditor *ui = (YC20AEffEditor *)userData;

	if(eclass != kEventClassWindow) return CallNextEventHandler(nextHandler, event);

	WindowRef     window;
	Rect          rectPort;
	GetEventParameter(event, kEventParamDirectObject, typeWindowRef, NULL, sizeof(WindowRef), NULL, &window);

#ifdef DEBUG
	std::cout << "OSX kEventClassWindow: " << kind << std::endl;
#endif
	switch (kind) {
		case kEventWindowDrawContent:
		case kEventWindowZoomed:
			GetWindowPortBounds(window,&rectPort);
			ui->YC20BaseUI::draw(rectPort.top, rectPort.left, rectPort.right, rectPort.bottom, true);
#ifdef DEBUG
			std::cout << " Q Draw : "
				<< (short) rectPort.left << "x" << (short) rectPort.top << "|"
				<< (short) rectPort.right << "x" << (short) rectPort.bottom << "|"
				<< std::endl;
#endif
			break;
		case kEventWindowBoundsChanged:
			// get's called in on resize and move
			//GetWindowPortBounds(window,&rectPort);
			//InvalWindowRect(window,&rectPort);
#ifdef DEBUG
			std::cout << " Bounds : "
				<< (short) rectPort.left << "x" << (short) rectPort.top << "|"
				<< (short) rectPort.right << "x" << (short) rectPort.bottom << "|"
				<< std::endl;
#endif
			break;
		case kEventWindowGetMinimumSize:
			minmaxHeightAndWidth.v = 640;
			minmaxHeightAndWidth.h = 100;
			SetEventParameter(event,kEventParamDimensions,typeQDPoint,
				sizeof(minmaxHeightAndWidth),&minmaxHeightAndWidth);
			break;
		case kEventWindowGetMaximumSize:
			minmaxHeightAndWidth.v = 1280;
			minmaxHeightAndWidth.h = 200;
			SetEventParameter(event,kEventParamDimensions,typeQDPoint,
				sizeof(minmaxHeightAndWidth),&minmaxHeightAndWidth);
			break;
		default:
			break;
	}
	return CallNextEventHandler(nextHandler, event);
}

static OSStatus MouseEventHandler(EventHandlerCallRef nextHandler, EventRef event, void *userData)
{
	/* NOTE: with "VSTi Host Demo" this event handler causes a crash
	 * when unloading the plugin while the window is still visible.
	 *
	 * calling those in close() does not help either:
	 *   RemoveEventHandler(mouseEventHandler);
	 *   FlushEventQueue(GetMainEventQueue());
	 *   FlushEventQueue(GetCurrentEventQueue());
	 * 
	 * however calling 
	 *   RemoveEventHandler(mouseEventHandler);
	 * anytime before close() resolves the problem.
	 *
	 * valgrind! valgrind! my kingdom for valgrind!
	 */
#if 0
	std::cout << "OSX mouse event" << std::endl;
#endif
	OSStatus result = CallNextEventHandler(nextHandler, event);
	if (result != noErr && result != eventNotHandledErr) return result;
	if (!yc20open) return noErr;

	UInt32 eclass = GetEventClass (event);
	UInt32 kind = GetEventKind (event);
        YC20AEffEditor *ui = (YC20AEffEditor *)userData;

	if(eclass == kEventClassMouse) {
		double x,y;
		Point mousePos;
		Point winMousePos;
		EventMouseButton button;
		GetEventParameter(event, kEventParamMouseLocation, typeQDPoint, 0, sizeof(Point), 0, &mousePos);
		GetEventParameter(event, kEventParamWindowMouseLocation, typeQDPoint, 0, sizeof(Point), 0, &winMousePos);
		GetEventParameter(event, kEventParamMouseButton, typeMouseButton, 0, sizeof(EventMouseButton), 0, &button);

		if (!yc20hic) {
			WindowRef tmpWin;
			short part = FindWindow(mousePos,&tmpWin);
			if (part != inContent) return noErr;
			if (!ui->sameWindow(tmpWin)) return noErr;
		}

#ifdef DEBUG
		std::cout << "OSX mouse event: "
			<< "type: " << kind << "pos: "
			<< winMousePos.h << "x" << winMousePos.v << "|"
			<< mousePos.h << "x" << mousePos.v << "|"
			<< " button:" << (button == kEventMouseButtonPrimary ? "1":"0")
			<< std::endl;
#endif
		static bool mymousedown = false;
		switch (kind) {
			case kEventMouseDragged:
				//std::cout << "OSX Mouse Draged." << std::endl;
				if (!mymousedown && yc20hic) {
					mymousedown=true;
					x = (double) winMousePos.h;
					y = (double) winMousePos.v;
					if (x>=0 && y>=0 && button==kEventMouseButtonPrimary) {
						if (y>=OSXMENUBARHEIGHT) ui->button_pressed(x,y-OSXMENUBARHEIGHT);
						if (!yc20hic) ui->resizeWindow(winMousePos, mousePos);
					}
				}
			case kEventMouseMoved:
				//std::cout << "OSX Mouse Moved." << std::endl;
				x = (double) winMousePos.h;
				y = (double) winMousePos.v;
				if (x>=0 && y>=OSXMENUBARHEIGHT)
					ui->mouse_movement(x,y-OSXMENUBARHEIGHT);
				break;
			case kEventMouseDown:
				//std::cout << "OSX Mouse Down." << std::endl;
				/* Note: this event won't fire with kWindowCompositingAttribute */
				x = (double) winMousePos.h;
				y = (double) winMousePos.v;
				if (x>=0 && y>=0 && button==kEventMouseButtonPrimary) {
					if (y>=OSXMENUBARHEIGHT) ui->button_pressed(x,y-OSXMENUBARHEIGHT);
					if (!yc20hic) ui->resizeWindow(winMousePos, mousePos);
				}
				break;
			case kEventMouseUp:
				//std::cout << "OSX Mouse Up." << std::endl;
				x = (double) mousePos.h;
				y = (double) mousePos.v;
				if (x>=0 && y>=0 && button==kEventMouseButtonPrimary) {
					ui->button_released(x,y);
					ui->resizeWindow(winMousePos, mousePos);
				}
				mymousedown=false;
				break;
			case kEventMouseWheelMoved:
				break;
			default:
				break;
		}
	}
	return noErr;
}


#endif /* __APPLE__*/ /*}}}*/

AudioEffect *createEffectInstance(audioMasterCallback audioMaster)
{ 
	return new FooYC20VSTi (audioMaster, 1, NUM_PARAMS);
}


bool
FooYC20VSTi::getProductString(char* text)
{
	vst_strncpy(text, "Foo YC20", kVstMaxProductStrLen);
	return true;
}

bool
FooYC20VSTi::getVendorString(char* text)
{
	vst_strncpy(text, "Sampo Savolainen", kVstMaxVendorStrLen);
	return true;
}

bool
FooYC20VSTi::getEffectName(char* name)
{
	vst_strncpy(name, "YC20 emulation", kVstMaxEffectNameLen);
	return true;
}

void
FooYC20VSTi::setProgramName(char *name)
{ 
	vst_strncpy(programName, name, kVstMaxNameLen);
}

void
FooYC20VSTi::getProgramName(char *name)
{
	vst_strncpy(name, programName, kVstMaxNameLen);
}

bool
FooYC20VSTi::getProgramNameIndexed (VstInt32 category, VstInt32 index, char* name)
{
	if (index == 0) {
		vst_strncpy(name, programName, kVstMaxNameLen);
		return true;
	}
	*name = 0;

	return false;
}

FooYC20VSTi::FooYC20VSTi  (audioMasterCallback callback, VstInt32 programs, VstInt32 params)
	: AudioEffectX(callback, programs, params)
{

	setUniqueID ((int)'YC20');
	
	setNumInputs(0);
	setNumOutputs(2);
	canProcessReplacing(true);
	isSynth(true);

	vst_strncpy(programName, "Foo YC20 Organ", kVstMaxNameLen);

	setProgram(0);

	label_for_parameter[PARAM_PITCH] = "pitch";
	label_for_parameter[1] = "volume";
	label_for_parameter[2] = "bass volume";
	
	label_for_parameter[3] = "realism";
	label_for_parameter[4] = "depth";
	label_for_parameter[5] = "speed";

	label_for_parameter[6] = "16' b";
	label_for_parameter[7] = "8' b";
	label_for_parameter[8] = "bass manual";

	label_for_parameter[9] = "16' i";
	label_for_parameter[10] = "8' i";
	label_for_parameter[11] = "4' i";
	label_for_parameter[12] = "2 2/3' i";
	label_for_parameter[13] = "2' i";
	label_for_parameter[14] = "1 3/5' i";
	label_for_parameter[15] = "1' i";

	label_for_parameter[16] = "balance";
	label_for_parameter[17] = "bright";

	label_for_parameter[18] = "16' ii";
	label_for_parameter[19] = "8' ii";
	label_for_parameter[20] = "4' ii";
	label_for_parameter[21] = "2' ii";

	label_for_parameter[22] = "percussive";

	yc20 = new YC20Processor();

	float sampleRate = getSampleRate();

	dsp *tmp = createDSP();
	tmp->init(sampleRate);

	yc20->setDSP(tmp);
	getUserData(tmp)->osc = yc20_precalc_oscillators(sampleRate);

#ifdef VERBOSE
	std::cerr << "Creating the editor..." << std::endl;
#endif

#ifndef __linux__ /* no UI for linux VST, yet */
	setEditor(new YC20AEffEditor(this));
#endif

#ifdef VERBOSE
	std::cout << "...done: " << editor << std::endl;
#endif
}

void
FooYC20VSTi::setSampleRate (float sampleRate) 
{
	AudioEffectX::setSampleRate(sampleRate);

	dsp *old = yc20->getDSP();
	
	dsp *tmp = createDSP();
	tmp->init(sampleRate);

	float oldValues[NUM_PARAMS];
	for (int i = 0; i < NUM_PARAMS; i++) {
		Control *c = yc20->getControl(label_for_parameter[i]);
		oldValues[i] = *c->getZone();
	}
	float oldKeys[61];
	for (int i = 0; i < 61; i++) {
		oldKeys[i] = yc20->getKey(i);
	}

	yc20_destroy_oscillators(getUserData(old)->osc);
	delete old;

	yc20->setDSP(tmp);
	getUserData(tmp)->osc = yc20_precalc_oscillators(sampleRate);
	for (int i = 0; i < NUM_PARAMS; i++) {
		Control *c = yc20->getControl(label_for_parameter[i]);
		*c->getZone() = oldValues[i];
	}
	for (int i = 0; i < 61; i++) {
		yc20->setKey(i, oldKeys[i]);
	}
}

bool FooYC20VSTi::getOutputProperties(VstInt32 index, VstPinProperties* properties)
{
	if(index<2)
	{
		sprintf(properties->label, "YC20");
		properties->flags = kVstPinIsActive | kVstPinIsStereo;
		return true;
	}
	return false;
}

FooYC20VSTi::~FooYC20VSTi()
{
	if (editor) {
		delete editor;
		editor = 0;
	}

	yc20_destroy_oscillators(getUserData(yc20->getDSP())->osc);
	delete yc20;
	yc20 = 0;
}

void
FooYC20VSTi::process		(float **input, float **output, VstInt32 nframes)
{
	processReplacing(input, output, nframes);
}

void
FooYC20VSTi::processReplacing	(float **input, float **output, VstInt32 nframes)
{
	TURNOFFDENORMALS;
	if (yc20 && yc20->getDSP()) {
		yc20->getDSP()->compute(nframes, 0, output);
	}
}

VstInt32
FooYC20VSTi::processEvents(VstEvents *events)
{
	for (VstInt32 i=0; i<events->numEvents; i++) {

		if((events->events[i])->type != kVstMidiType) continue;
		VstMidiEvent* event = (VstMidiEvent*)events->events[i];
		uint8_t* data = (uint8_t *)event->midiData;

		float value = 0;
		int key = -1;

		switch ( (data[0]) & 0xf0 ) {
		case 0x90:
			if (data[2] == 0) {
				value = 0.0;
			} else {
				value = 1;
			}
			key = data[1] - 36;
			break;
		case 0x80:
			value = 0.0;
			key = data[1] - 36;
			break;
		}
		if (key >= 0 && key < 61) {
			yc20->setKey(key, value);
		}

	}

	return 1;
}

void
FooYC20VSTi::setParameter	(VstInt32 index, float value)
{
	if (index < 0 || index >= NUM_PARAMS) return;

	Control *c = yc20->getControl(label_for_parameter[index]);
	if (c == 0) {
		std::cerr << "no parameter for index " << index << std::endl;
		return;
	}

	if (index == PARAM_PITCH) {
		value -= 0.5;
		value *= 2.0;
	}

	bool didChange = (*c->getZone() != value);	

	*c->getZone() = value;

#ifndef __linux__
	if (editor && didChange) {
		((YC20AEffEditor *)editor)->queueChange(index, value);
	}
#endif
}

float
FooYC20VSTi::getParameter	(VstInt32 index)
{
	if (index < 0 || index >= NUM_PARAMS) return 0.0;

	Control *c = yc20->getControl(label_for_parameter[index]);
	if (c == 0) {
		std::cerr << "no parameter for index " << index << std::endl;
		return 0.0;
	}
	
	float value = *c->getZone();
	if (index == PARAM_PITCH) {
		value /= 2.0;
		value += 0.5;
	}
	return value;
}

void
FooYC20VSTi::getParameterName	(VstInt32 index, char *ptr)
{
	if (index < 0 || index >= NUM_PARAMS) return;

	vst_strncpy(ptr, label_for_parameter[index].c_str(), kVstMaxParamStrLen);
}

void
FooYC20VSTi::getParameterDisplay(VstInt32 index, char *ptr)
{
	if (index < 0 || index >= NUM_PARAMS) return;

	Control *c = yc20->getControl(label_for_parameter[index]);
	if (c == 0) {
		std::cerr << "no parameter for index " << index << std::endl;
		return;
	}
	float value = *c->getZone();
	// No need to convert pitch value from zone,

	snprintf(ptr, kVstMaxParamStrLen, "%.2f", value);
}

/* vim: set ts=8 sw=8 foldmethod=marker: */
