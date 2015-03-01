var gulp = require('gulp');

var stylus = require('gulp-stylus');
var uglify = require('gulp-uglify');
var compress = require('gulp-yuicompressor');
var Filter = require('gulp-filter');
var concat = require('gulp-concat');

var autoprefixer = require('autoprefixer-stylus');

gulp.task('styles', ['sprites'], function () {
  var filter = Filter('**/*.styl');
  gulp.src(['./styles/*.styl', './css/*.css'])
    .pipe(filter)
    .pipe(stylus({use: [autoprefixer()]}))
    .pipe(filter.restore())
    .pipe(compress({type:'css'}))
    .pipe(concat('foo-yc20.css'))
    .pipe(gulp.dest('./target'));

});

gulp.task('sprites', function(callback) {
  var fs = require('fs');

  var spritesmith = require('spritesmith');

  var sprites = [];
  for (var i = 0; i < 4; i++) {
    sprites.push('white_'+i+'.png');
    sprites.push('black_'+i+'.png');
    sprites.push('green_'+i+'.png');
  }
  sprites.push('potentiometer.png');

  sprites.push('background-red-full.png');
  /*
  sprites.push('background-black.png');
  sprites.push('background-white.png');
  sprites.push('background-blue.png');
  */
  sprites.push('license.png');

  for (var i = 0; i < sprites.length; i++) {
    sprites[i] = '../graphics/' + sprites[i];
  }

  spritesmith({src: sprites}, function handleResult (err, result) {
    if (!fs.existsSync('css/')) {
      fs.mkdirSync('css');
    }
    var cssFd = fs.openSync('css/sprites.css', 'w');

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
      } else if (match = /.*\/background-(red)-full.png/.exec(i)) {
        fs.writeSync(cssFd,
          '.foo_yc20_color_'+match[1]+' .foo_yc20_main '+
          ' { background: url("sprites.png") -'+coords.x+'px -'+coords.y+'px; }\n');
      /*
      } else if (match = /.*\/background-(red|blue|white|black).png/.exec(i)) {
        fs.writeSync(cssFd,
          '.foo_yc20_color_'+match[1]+' .foo_yc20_main '+
          ' { background: url("sprites.png") -'+coords.x+'px -'+coords.y+'px; }\n');
      */
      } else if (match = /.*\/license.png/.exec(i)) {
        fs.writeSync(cssFd,
          '.foo_yc20 .foo_yc20_info '+
          ' { background: url("sprites.png") -'+coords.x+'px -'+coords.y+'px; }\n');
      }
    }
    fs.closeSync(cssFd);
    callback();
  });
});

gulp.task('compress-js', function() {
  var filter = Filter('**/foo-yc20.js');
  gulp.src('js/*.js')
    .pipe(filter)
    .pipe(uglify())
    .pipe(filter.restore())
    .pipe(concat('foo-yc20.js'))
    .pipe(gulp.dest('target'));
});

gulp.task('default', ['sprites', 'styles', 'compress-js']);
