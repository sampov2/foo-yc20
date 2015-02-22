
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

    function sliderStyle(color, value) {
      value = Math.round(value*3);
      if (value < 0) { value = 0; } else if (value > 3) { value = 3; }
      return 'foo_yc20_slider_' + color + '_' + value;
    }

    $.each(config.controls, function(name, d) {
      //var controlClass = 'foo_yc20_control_' + name;
      var control;
      if (d.type === 'potentiometer') {
        // TODO: figure out how to show values (css rotation or something like that)
        control = $('<div></div>')
          .attr('foo-yc20-control', name)
          .addClass('foo_yc20_potentiometer');
          //.addClass(controlClass);
      } else if (d.type === 'slider' || d.type === 'toggle') {
        // toggles are sliders too from the CSS point of view
        control = $('<div></div>')
          .attr('foo-yc20-control', name)
          .addClass('foo_yc20_slider')
          .addClass(sliderStyle(d.color, model[name]));
          //.addClass(controlClass);
      }
      $(view.main).append(control);
      /*
      $(control).click(function(evt) {
        console.log('cc');
        evt.preventDefault();
        return false;
      });
      */
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

    // ** Controls
  };
  return foo_yc20;
}(foo_yc20||{}));
