
var foo_yc20 = (function(foo_yc20) {
  'use strict';

  // Config
  var config = {
    controls: {
      "pitch": {
        type: "potentiometer",
        min: -1.0,
        max: 1.0
      },
      "volume": {
        type: "potentiometer",
        min: 0.0,
        max: 1.0
      },
      "bass-volume": {
        type: "potentiometer",
        min: 0.0,
        max: 1.0
      },
      "bass": {
        type: "toggle",
        color: "black"
      }
    },
    colors: [ "red", "blue", "black", "white" ]
  };
  $.each([
    "realism", "vibrato", "speed",
    "b-16", "b-8",
    "i-16", "i-8", "i-4", "i-2_23", "i-2", "i-1_35", "i-1",
    "balance", "bright",
    "ii-16", "ii-8", "ii-4", "ii-2", "percussive"
  ], function(i, str) {
    var color = "black";
    if (str === 'percussive') {
      color = "green";
    }
    if (/^(b|i|ii)-[0-9_]+/.exec(str)) {
      color = "white";
    }
    config.controls[str] = {
      type: "slider",
      min: 0.0,
      max: 1.0,
      color: color
    };
  });

  foo_yc20.init = function(selector) {
    var elements = $(selector);
    $.each(elements, function(i, e) {
      build(e);
    });
  }

  function build(elem) {
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


    $(document).mouseup(function(evt) {
      viewStatus.moving = false;
    });

    setupColor();

    $(elem).append(view.main);
    $(elem).append(view.info);

    // register main click handlers
    $(view.main).click(function(evt) {
      // If clicked in the lower right hand corner
      if (evt.offsetX > 1200 && evt.offsetY > 150) {
        $(view.info).show();
      }
    });
    $(view.info).click(function() {
      nextColor();
      $(view.info).hide();
    });

    // Initialize the controller
    controller.init();

  };
  return foo_yc20;
}(foo_yc20||{}));
