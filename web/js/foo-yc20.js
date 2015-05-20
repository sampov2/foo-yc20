/**
 Copyright 2015 Sampo Savolainen (v2@iki.fi). All rights reserved.
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
 **/
var foo_yc20 = (function(foo_yc20) {
  'use strict';

  if (foo_yc20.dsp === undefined) {
    var needWebKitAudio = (typeof (AudioContext) === "undefined") && (typeof (webkitAudioContext) !== "undefined");
    var audio_context = (needWebKitAudio) ? new webkitAudioContext() : new AudioContext();
    foo_yc20.dsp = faust.standalone(audio_context, 1024);
    foo_yc20.dsp.start();
  }

  // Config
  var config = {
    controls: {
      "pitch": {
        type: "potentiometer",
        dspAddr: "pitch",
        min: -1.0,
        max: 1.0
      },
      "volume": {
        type: "potentiometer",
        dspAddr: "volume",
        min: 0.0,
        max: 1.0
      },
      "bass-volume": {
        type: "potentiometer",
        dspAddr: "bass/bass_volume",
        min: 0.0,
        max: 1.0
      },
      "bass": {
        type: "toggle",
        dspAddr: "bass/bass_manual",
        color: "black"
      }
    },
    keys: [],
    colors: [ "red", "blue", "black", "white" ]
  };
  var keymap = {
    90: 'c0',
    83: 'C0',
    88: 'd0',
    68: 'D0',
    67: 'e0',
    86: 'f0',
    71: 'F0',
    66: 'g0',
    72: 'G0',
    78: 'a0',
    74: 'A0',
    77: 'b0',

    81: 'c1',
    50: 'C1',
    87: 'd1',
    51: 'D1',
    69: 'e1',
    82: 'f1',
    53: 'F1',
    84: 'g1',
    54: 'G1',
    89: 'a1',
    55: 'A1',
    85: 'b1',

    73: 'c2',
    57: 'C2',
    79: 'd2',
    48: 'D2',
    80: 'e2'
  };
  for (var i = 0; i <= 4; i++) {
    $.each(['c', 'C', 'd', 'D', 'e', 'f', 'F', 'g', 'G', 'a', 'A', 'b'], function(idx, s) {
      config.keys.push(s+i);
    });
  }
  config.keys.push('c5');

  $.each([
    { name: "realism", dspAddr: "realism"},
    { name: "vibrato", dspAddr: "vibrato/depth" },
    { name: "speed", dspAddr: "vibrato/speed" },
    { name: "b-16", dspAddr: "bass/16'_b" }, { name: "b-8", dspAddr: "bass/8'_b" },
    { name: "i-16", dspAddr: "i/16'_i"    }, { name: "i-8", dspAddr: "i/8'_i"    }, { name: "i-4", dspAddr: "i/4'_i" },    { name: "i-2_23", dspAddr: "i/2_2/3'_i" }, { name: "i-2", dspAddr: "i/2'_i" }, { name: "i-1_35", dspAddr: "i/1_3/5'_i" }, { name: "i-1", dspAddr: "i/1'_i" },
    { name: "balance", dspAddr: "balance" }, { name: "bright", dspAddr: "ii/bright" },
    { name: "ii-16", dspAddr: "ii/16'_ii" }, { name: "ii-8", dspAddr: "ii/8'_ii" }, { name: "ii-4", dspAddr: "ii/4'_ii" }, { name: "ii-2", dspAddr: "ii/2'_ii" },
    { name: "percussive", dspAddr: "percussive" }
  ], function(i, obj) {
    var color = "black";
    if (obj.name === 'percussive') {
      color = "green";
    }
    if (/^(b|i|ii)-[0-9_]+/.exec(obj.name)) {
      color = "white";
    }
    config.controls[obj.name] = {
      type: "slider",
      dspAddr: obj.dspAddr,
      min: 0.0,
      max: 1.0,
      color: color
    };
  });

  foo_yc20.init = function(selector, midi) {
    var element = $(selector).first();;
    build(element, midi);
  }

  function build(elem, midi) {
    // ** Model
    var model = {
      "pitch": 0.0,
      "volume": 1.0,
      "bass-volume": 1.0,

      "realism": 1.0,
      "vibrato": 1.0,
      "speed": 1.0,

      "b-16": 1.0,
      "b-8": 1.0,
      "bass": 0.0,

      "i-16": 1.0,
      "i-8": 1.0,
      "i-4": 1.0,
      "i-2_23": 0.75,
      "i-2": 1.0,
      "i-1_35": 0.75,
      "i-1": 0.0,

      "balance": 0.0,
      "bright": 0.0,

      "ii-16": 1.0,
      "ii-8": 1.0,
      "ii-4": 1.0,
      "ii-2": 0.0,

      "percussive": 0.75
    };

    // ** Controller
    var controller = {};
    controller._listenValueChangesList = {};
    controller.listenValueChanges = function(name, fn) {
      controller._listenValueChangesList[name] = controller._listenValueChangesList[name] || [];
      controller._listenValueChangesList[name].push(fn);
    };
    controller.setValue = function(name, value) {
      if (config.controls[name].type === 'toggle') {
        value = !(value < 0.5);
      } else if (config.controls[name].min > value) {
        value = config.controls[name].min;
      } else if (config.controls[name].max < value) {
        value = config.controls[name].max;
      }

      if (value !== model[name] || controller._initializing) {
        model[name] = value;
        foo_yc20.dsp.setValue('/0x00/'+config.controls[name].dspAddr, value);

        controller._listenValueChangesList[name] = controller._listenValueChangesList[name] || [];
        for (var i in controller._listenValueChangesList[name]) {
          controller._listenValueChangesList[name][i](value);
        }
      }
    };
    controller.init = function() {
      controller._initializing = true;
      for (var name in model) {
        controller.setValue(name, model[name]);
      }
      delete controller._initializing;
    }
    controller.keyDown = function(key) {
      if (key) {
        foo_yc20.dsp.setValue('/0x00/'+key, 1);
      }
    }
    controller.keyUp = function(key) {
      if (key) {
        foo_yc20.dsp.setValue('/0x00/'+key, 0);
      }
    }

    // ** View
    $(elem).addClass('foo_yc20');

    var view = {
      color: 'red',
      controls: {},
      main: $('<div></div>').addClass('foo_yc20_main'),
      info: $('<div></div>').addClass('foo_yc20_info').hide()
    };


    function setupColor() {
      $.each(config.colors, function(i, color) {
        var style = 'foo_yc20_color_'+color;
        if (view.color === color) {
          $(elem).addClass(style);
        } else {
          $(elem).removeClass(style);
        }
      });
    }

    function nextColor() {
      view.color = config.colors[(config.colors.indexOf(view.color) + 1) % config.colors.length];
      setupColor();
    }

    function sliderState(value) {
      var type;
      if (value === true || value >= 0.9) {
        type = 3;
      } else if (value === false || value <= 0.1) {
        type = 0;
      } else {
        type = value < 0.5 ? 1 : 2;
      }
      return type;
    }


    var viewStatus = {
      moving: false,
      startY: null,
      startValue: null,
      activeControl: null,
      activeControlName: null
    };

    $.each(config.controls, function(name, d) {
      var control;
      var potLine;
      if (d.type === 'potentiometer') {
        control = $('<div></div>')
          .attr('foo-yc20-control', name)
          .addClass('foo_yc20_potentiometer');

        var container = $('<div></div>').addClass('foo_yc20_potentiometer_line');

        potLine = $('<svg width="72" height="72"></svg>');
        var path = document.createElementNS('http://www.w3.org/2000/svg', 'path');
        path.setAttribute('d', 'M36 28 l0 -25');
        path.setAttribute('stroke', 'black');
        path.setAttribute('stroke-width', 2.5);
        potLine.append(path);
        container.append(potLine);
        control.append(container);

      } else if (d.type === 'slider' || d.type === 'toggle') {
        // toggles are sliders too from the CSS point of view
        control = $('<div></div>')
          .attr('foo-yc20-control', name)
          .addClass('foo_yc20_slider')
          .addClass('foo_yc20_slider_'+d.color);
      }

      controller.listenValueChanges(name, function(value) {
        var normalizedValue;
        if (value === true || value === false) {
          normalizedValue = value;
        } else {
          normalizedValue = (value - d.min) / (d.max - d.min);
        }
        if (d.type == 'slider' || d.type == 'toggle') {
          normalizedValue = sliderState(normalizedValue);
          control.attr('foo-yc20-control-state', normalizedValue);
        } else {
          normalizedValue = -150 + normalizedValue * (360 - 60);
          potLine.css('transform', 'rotate('+normalizedValue+'deg)')
        }
      });

      control.mousedown(function(evt) {
        viewStatus.moving = true;
        viewStatus.startY = evt.clientY;
        viewStatus.startValue = model[name];
        viewStatus.activeControl = control;
        viewStatus.activeControlName = name;
        return false;
      });
      $(view.main).append(control);

    });

    $(view.main).mousemove(function(evt) {
      if (!viewStatus.moving) return;

      if (viewStatus.activeControlName === 'keyboard') {
        var key = whichKey(evt);
        if (key === undefined) {
          if (viewStatus.startValue !== undefined) {
            controller.keyUp(config.keys[viewStatus.startValue]);
            viewStatus.startValue = undefined;
          }
        } else if (key !== viewStatus.startValue){
          if (viewStatus.startValue !== undefined) {
            controller.keyUp(config.keys[viewStatus.startValue]);
            viewStatus.startValue = undefined;
          }
          viewStatus.startValue = key;
          controller.keyDown(config.keys[key]);
        }
        return;
      }

      var delta, value, controlConfig;
      controlConfig = config.controls[viewStatus.activeControlName];
      if (controlConfig.type == 'potentiometer') {
        delta = -(evt.clientY - viewStatus.startY) / 75.0;
      } else {
        delta = (evt.clientY - viewStatus.startY) / 50.0;
      }
      if (controlConfig.max !== undefined && controlConfig.min !== undefined) {
        delta *= (controlConfig.max - controlConfig.min);
      }

      value = viewStatus.startValue + delta;
      controller.setValue(viewStatus.activeControlName, value);
    });

    var keyboard = {
      x: 93,
      y: 200,
      width: 1280-90-90,
      height: 190,
      blackHeight: 120,
      whiteWidth: (1280-90-90)/36,
      blackWidth: (1280-90-90)/36/3*2
    };
    function whichKey(evt) {
      var parentOffset = $(evt.target).offset();
      var relativeXPosition = (evt.pageX - parentOffset.left);
      var relativeYPosition = (evt.pageY - parentOffset.top);

      var x = relativeXPosition - keyboard.x;
      var y = relativeYPosition - keyboard.y;

      if (x < 0 || x >= keyboard.width || y < 0 || y >= keyboard.height) {
        return undefined;
      }
      var whitePos = Math.floor(x/keyboard.width*36);

      var key = Math.floor(whitePos/7)*12;
      var octPos = whitePos % 7;
      key += octPos;
      key += octPos <= 2 ? octPos : octPos-1;
      // Then take the blacks into account
      if (y < keyboard.blackHeight) {
        var xPosOnKey = (x-whitePos*keyboard.whiteWidth) / keyboard.whiteWidth;
        switch(octPos) {
          case 0: // C
            if (xPosOnKey > 0.63 && key < 60) { // if key == 60, there is no black key on top
              key++; // => C#
            }
            break;
          case 1: // D
            if (xPosOnKey < 0.15) {
              key--; // => C#
            } else if (xPosOnKey > 0.93) {
              key++; // => D#
            }
            break;
          case 2: // E
            if (xPosOnKey < 0.46) {
              key--; // => D#
            }
            break;
          case 3: // F
            if (xPosOnKey > 0.63) {
              key++; // => F#
            }
            break;
          case 4: // G
            if (xPosOnKey < 0.15) {
              key--; // => F#
            } else if (xPosOnKey > 0.75) {
              key++; // => G#
            }
            break;
          case 5: // A
            if (xPosOnKey < 0.27) {
              key--; // => G#
            } else if (xPosOnKey > 0.92) {
              key++; // => B
            }
            break;
          case 6: // B#
            if (xPosOnKey < 0.43) {
              key--; // => B
            }
        }
      }

      return key;
    }
    $(view.main).mousedown(function(evt) {
      var key = whichKey(evt);
      if (key === undefined) {
        return true;
      }
      viewStatus.moving = true;
      viewStatus.startValue = key;
      viewStatus.activeControl = keyboard;
      viewStatus.activeControlName = 'keyboard';
      controller.keyDown(config.keys[key]);

      return false;
    });

    $(document).mouseup(function(evt) {
      if (viewStatus.moving) {
        viewStatus.moving = false;
        if (viewStatus.activeControlName === 'keyboard') {
          controller.keyUp(config.keys[viewStatus.startValue]);
        }
      }
    });

    $(document).keydown(function(evt) {
      controller.keyDown(keymap[evt.keyCode]);
    });

    $(document).keyup(function(evt) {
      controller.keyUp(keymap[evt.keyCode]);
    });

    if (midi) {
      console.log('connecting midi');
      midi.addListener({
        noteOn: function(note) {
          controller.keyDown(config.keys[note-48]);
        },
        noteOff: function(note) {
          controller.keyUp(config.keys[note-48]);
        }
      })
    }

    $(view.main).focus();
    setupColor();

    $(elem).append(view.main);
    $(elem).append(view.info);

    // register main click handlers
    /*
    $(view.main).click(function(evt) {
      var parentOffset = $(evt.target).offset();
      var relativeXPosition = (evt.pageX - parentOffset.left);
      var relativeYPosition = (evt.pageY - parentOffset.top);
      // If clicked in the lower right hand corner
      if (relativeXPosition > 1200 && relativeYPosition > 150) {
        $(view.info).show();
      }
    });
    $(view.info).click(function() {
      nextColor();
      $(view.info).hide();
    });
    */

    // Initialize the controller
    controller.init();

  };
  return foo_yc20;
}(foo_yc20||{}));
