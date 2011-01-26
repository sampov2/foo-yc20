/*
    Foo-YC20 VSTi plugin
    Copyright (C) 2010  Sampo Savolainen <v2@iki.fi>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

    VST2 SDK Interfaces by (c)1996-1999 Steinberg Soft und Hardware GmbH, All Rights Reserved

*/

#include <iostream>
#include <map>

#include <audioeffect.cpp>
#include <audioeffectx.h>
#include <audioeffectx.cpp>

#include <foo-yc20.h>
#include <yc20-base-ui.h>

#ifdef __WIN32__
#include <cairo-win32.h>
#else /* __APPLE__*/
#include <Carbon/Carbon.h>
#include <cairo-quartz.h>
#endif

// Note: This is not a dependency to jack! We just use the ringbuffer implementation for VST -> UI communication
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
		VstInt32 getVendorVersion () { return 1; };

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

extern HINSTANCE cairoResourceInstance;
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
			
			effect->setParameterAutomated(draggable->getPortIndex(), value);
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

class YC20AEffEditor : public AEffEditor, public YC20BaseUI
{
	public:
		YC20AEffEditor(AudioEffect* fx)
			: AEffEditor(fx)
			, YC20BaseUI()
			, wm_paint(false)
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
			jack_ringbuffer_free(exposeRingbuffer);
		}


		virtual bool getRect(ERect **rect)
		{
			*rect = &_rect;
			return true;
		};

		virtual bool open(void *ptr)
		{
//#ifdef VERBOSE
			std::cout << "########## open()" << std::endl;
//#endif
			AEffEditor::open(ptr); 	
		
#if 0
			Rect winRect;
			WindowAttributes windowAttrs;
			SetRect(&winRect, 0, 0, _rect.right, _rect.bottom);
			CreateNewWindow(kDocumentWindowClass, windowAttrs, &winRect, &systemWindow);
#endif
			QDBeginCGContext(GetWindowPort((WindowRef)systemWindow), &context);

			const EventTypeSpec win_events[] = {
				{ kEventClassWindow, kEventWindowClosed },
				{ kEventClassWindow, kEventWindowDrawContent    },
				{ kEventClassWindow, kEventWindowGetMinimumSize },
				{ kEventClassWindow, kEventWindowBoundsChanged  }
			};

			InstallWindowEventHandler((WindowRef)systemWindow, NewEventHandlerUPP(WindowEventHandler),
					GetEventTypeCount(win_events), win_events, this, NULL);

			const EventTypeSpec mouse_events[] = {
				{ kEventClassMouse, kEventMouseMoved },
				//{ kEventClassMouse, kEventMouseWheelMoved },
				{ kEventClassMouse, kEventMouseDown },
				{ kEventClassMouse, kEventMouseUp },
				{ kEventClassMouse, kEventMouseDragged }
			};

			InstallApplicationEventHandler(NewEventHandlerUPP (MouseEventHandler),
					GetEventTypeCount(mouse_events), mouse_events, this, NULL);

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
#endif
			CGContextRestoreGState(context);
			CGContextFlush(context);
#ifdef VERBOSE
			std::cout << " .. exit return_cairo_surface()" << std::endl;
#endif
		};

		bool wm_paint;
		jack_ringbuffer_t *exposeRingbuffer;


		// My stuff
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
			
			effect->setParameterAutomated(draggable->getPortIndex(), value);
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

		void resizewindow(Point winMousePos, Point mousePos)
		{
			if (!systemWindow) return;
			Rect rectPort, rectNew, rectConstrain;
			GetWindowPortBounds((WindowRef)systemWindow,&rectPort);
			if( (winMousePos.h <= (rectPort.right - 15)) || (winMousePos.v <= (rectPort.bottom)) ) 
				return;

			rectConstrain.top=100; // min Height
			rectConstrain.bottom=200; // max Height
			rectConstrain.left=640; // min Width
			rectConstrain.right=1280; // max Width

			ResizeWindow((WindowRef)systemWindow, mousePos, &rectConstrain, &rectNew);

			_rect.right = rectNew.right - rectNew.left;
			double scale = (double)_rect.right/1280.0;
			set_scale(scale);
			_rect.bottom = (unsigned int) floor(200.0 * scale);
			SizeWindow((WindowRef)systemWindow, _rect.right, _rect.bottom, 1);

			QDEndCGContext(GetWindowPort((WindowRef)systemWindow), &context);
			QDBeginCGContext(GetWindowPort((WindowRef)systemWindow), &context);
			GetWindowPortBounds((WindowRef)systemWindow,&rectPort);
			CGContextTranslateCTM(context, 0, rectPort.bottom);
			CGContextScaleCTM(context, 1.0, -1.0);
#ifdef VERBOSE
			std::cout << "OSX resize event:"
				<< rectNew.left << "x" << rectNew.top << "|"
				<< rectNew.right << "x" << rectNew.bottom << "|"
				<< std::endl;
#endif
		}

		CGContextRef context;
	private:
		cairo_surface_t *surface;
		ERect _rect;
		Wdgt::Draggable *draggableForIndex[NUM_PARAMS];

};

static OSStatus WindowEventHandler(EventHandlerCallRef nextHandler, EventRef event, void *userData)
{
	//std::cout << "OSX window event" << std::endl;
	OSStatus result = noErr;
	UInt32 eclass = GetEventClass (event);
	UInt32 kind = GetEventKind (event);
	Point minimumHeightAndWidth;
        YC20AEffEditor *ui = (YC20AEffEditor *)userData;

	if(eclass == kEventClassWindow) {
		WindowRef     window;
		Rect          rectPort;
		GetEventParameter(event, kEventParamDirectObject, typeWindowRef, NULL, sizeof(WindowRef), NULL, &window);

		switch (kind) {
			case kEventWindowDrawContent:
			case kEventWindowZoomed:
				result = CallNextEventHandler(nextHandler, event);
				GetWindowPortBounds(window,&rectPort);
				ui->YC20BaseUI::draw(rectPort.top, rectPort.left, rectPort.right, rectPort.bottom, true);
				break;
			case kEventWindowBoundsChanged:
				GetWindowPortBounds(window,&rectPort);
				InvalWindowRect(window,&rectPort);
				break;
			case kEventWindowGetMinimumSize:
				minimumHeightAndWidth.v = 640;
				minimumHeightAndWidth.h = 100;
				SetEventParameter(event,kEventParamDimensions,typeQDPoint,
					sizeof(minimumHeightAndWidth),&minimumHeightAndWidth);
				result = noErr;
				break;
			default:
				result = CallNextEventHandler(nextHandler, event);
				break;
		}
	}
	return result;
}

static OSStatus MouseEventHandler(EventHandlerCallRef nextHandler, EventRef event, void *userData)
{
	//std::cout << "OSX mouse event" << std::endl;
	OSStatus result = noErr;
	UInt32 eclass = GetEventClass (event);
	UInt32 kind = GetEventKind (event);
	result = CallNextEventHandler(nextHandler, event);
        YC20AEffEditor *ui = (YC20AEffEditor *)userData;

	if(eclass == kEventClassMouse) {
		//WindowPtr tmpWin;
		double x,y;
		Point mousePos;
		Point winMousePos;
		EventMouseButton button;
		GetEventParameter(event, kEventParamMouseLocation, typeQDPoint, 0, sizeof(Point), 0, &mousePos);
		GetEventParameter(event, kEventParamWindowMouseLocation, typeQDPoint, 0, sizeof(Point), 0, &winMousePos);
		GetEventParameter(event, kEventParamMouseButton, typeMouseButton, 0, sizeof(EventMouseButton), 0, &button);
#if 0
		std::cout << "OSX mouse event:"
			<< winMousePos.h << "x" << winMousePos.v << "|"
			<< mousePos.h << "x" << mousePos.v << "|"
			<< std::endl;
#endif
#define OSXMENUBARHEIGHT (22)
		switch (kind) {
			case kEventMouseMoved:
			case kEventMouseDragged:
				x = (double) winMousePos.h;
				y = (double) winMousePos.v;
				if (x>=0 && y>=OSXMENUBARHEIGHT)
					ui->mouse_movement(x,y-OSXMENUBARHEIGHT);
				break;
			case kEventMouseDown:
				x = (double) winMousePos.h;
				y = (double) winMousePos.v;
				if (x>=0 && y>=0 && button==kEventMouseButtonPrimary) {
					if (y>=OSXMENUBARHEIGHT) ui->button_pressed(x,y-OSXMENUBARHEIGHT);
					ui->resizewindow(winMousePos, mousePos);
				}
				break;
			case kEventMouseUp:
				x = (double) mousePos.h;
				y = (double) mousePos.v;
				if (x>=0 && y>=0 && button==kEventMouseButtonPrimary) {
					ui->button_released(x,y);
					ui->resizewindow(winMousePos, mousePos);
				}
				break;
			case kEventMouseWheelMoved:
				break;
			default:
				result = eventNotHandledErr;
				break;
		}
	}
	return result;
}


#endif /* __APPLE__*/ /*}}}*/

AudioEffect *createEffectInstance(audioMasterCallback audioMaster)
{ 
#ifdef __WIN32__
	// Propagate the HINSTANCE set by vstgui to th HINSTANCE used in yc20-base-ui.cpp
	cairoResourceInstance = hInstance;
#endif
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

	dsp *tmp = createDSP();
        tmp->init(getSampleRate());

	yc20->setDSP(tmp);

#ifdef VERBOSE
	std::cerr << "Creating the editor..." << std::endl;
	std::cout << "Creating the editor..." << std::endl;
#endif
	setEditor(new YC20AEffEditor(this));
#ifdef VERBOSE
	std::cerr << "...done: " << editor << std::endl;
	std::cout << "...done: " << editor << std::endl;
#endif
}

void
FooYC20VSTi::setSampleRate (float sampleRate) 
{
	AudioEffectX::setSampleRate(sampleRate);

	dsp *tmp = yc20->getDSP();
	delete tmp;
	

	tmp = createDSP();
        tmp->init(sampleRate);

	yc20->setDSP(tmp);
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
	delete yc20;
	yc20 = 0;

	if (editor) {
		delete editor;
		editor = 0;
	}
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
	yc20->getDSP()->compute(nframes, 0, output);
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

	if (editor && didChange) {
		((YC20AEffEditor *)editor)->queueChange(index, value);
	}
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
