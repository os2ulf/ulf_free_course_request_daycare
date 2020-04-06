/**
 * Add Remove course selection and price info, course not found is selected.
 **/
(function ($) {
  "use strict";
  Drupal.behaviors.free_course_request_daycare_remove_course = {
    attach: function (context, settings) {
      $('#edit-field-rfcd-course-not-found-und').change(function() {
        $('#edit-field-rfcd-course-und').val('_none');
        $('#edit-field-rfcd-course-und').trigger("chosen:updated");
        $('.price-info').remove();
      });
    }
  }
}(jQuery));
