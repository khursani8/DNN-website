const gulp  = require('gulp')
let uglify = require('gulp-uglify-es').default;
const concat = require('gulp-concat');

// create a default task and just log a message
gulp.task('default', function() {
    return gulp.src('./js/**/*.js')
        .pipe(concat('bundle.js'))
        .pipe(uglify())
        .pipe(gulp.dest('./data/'));
});