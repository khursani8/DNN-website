const gulp  = require('gulp')
let uglify = require('gulp-uglify-es').default;
const concat = require('gulp-concat');
const gzip = require('gulp-gzip');

// create a default task and just log a message
gulp.task('default', function() {
    gulp.src('./resnet/output_keras/**/*')
        .pipe(gzip())
        .pipe(gulp.dest('./resnet/output_keras'));
    return gulp.src('./js/**/*.js')
        .pipe(concat('bundle.js'))
        .pipe(uglify())
        .pipe(gzip())
        .pipe(gulp.dest('./data/'));
});