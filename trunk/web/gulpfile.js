var gulp = require('gulp');
var stylus = require('gulp-stylus');

gulp.task('styles', function () {
  gulp.src('./styles/*.styl')
    .pipe(stylus())
    .pipe(gulp.dest('./target'));
});

gulp.task('sprites', function() {
  var fs = require('fs');

  var spritesmith = require('spritesmith');

  var sprites = [];
  for (var i = 0; i < 4; i++) {
    sprites.push('white_'+i+'.png');
    sprites.push('black_'+i+'.png');
    sprites.push('green_'+i+'.png');
  }
  sprites.push('potentiometer.png');

  sprites.push('background-red.png');
  sprites.push('background-black.png');
  sprites.push('background-white.png');
  sprites.push('background-blue.png');

  sprites.push('license.png');

  for (var i = 0; i < sprites.length; i++) {
    sprites[i] = '../graphics/' + sprites[i];
  }

  //var sprites = ['fork.png', 'github.png', 'twitter.png'];
  // , algorithmOpts: {sort: false}
  spritesmith({src: sprites}, function handleResult (err, result) {

    var cssFd = fs.openSync('target/sprites.css', 'w');

    fs.writeFileSync('target/sprites.png', new Buffer(result.image, 'binary'));
    for (var i in result.coordinates) {
      var coords = result.coordinates[i];
      var match;
      if (match = /.*\/(white|black|green)_([0-3]).png/.exec(i)) {
        fs.writeSync(cssFd,
          '.foo_yc20 .foo_yc20_main .foo_yc20_slider_'+match[1]+'[foo-yc20-control-state="'+match[2]+'"] '+
          ' { background: url("sprites.png") -'+coords.x+'px -'+coords.y+'px; }\n');

      } else if (match = /.*\/potentiometer.png/.exec(i)) {
        fs.writeSync(cssFd,
          '.foo_yc20 .foo_yc20_main .foo_yc20_potentiometer '+
          ' { background: url("sprites.png") -'+coords.x+'px -'+coords.y+'px; }\n');
      } else if (match = /.*\/background-(red|blue|white|black).png/.exec(i)) {
        fs.writeSync(cssFd,
          '.foo_yc20_color_'+match[1]+' .foo_yc20_main '+
          ' { background: url("sprites.png") -'+coords.x+'px -'+coords.y+'px; }\n');
      } else if (match = /.*\/license.png/.exec(i)) {
        fs.writeSync(cssFd,
          '.foo_yc20 .foo_yc20_info '+
          ' { background: url("sprites.png") -'+coords.x+'px -'+coords.y+'px; }\n');
      }

    }
    //console.log(result.coordinates);
    fs.closeSync(cssFd);
    result.image; // Binary string representation of image
    result.coordinates; // Object mapping filename to {x, y, width, height} of image
    result.properties; // Object with metadata about spritesheet {width, height}
  });
});
