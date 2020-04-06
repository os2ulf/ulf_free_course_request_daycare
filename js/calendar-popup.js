/**
 * Add popup with range limit.
 **/
(function ($) {
  "use strict";
  Drupal.behaviors.free_course_request_daycare_form = {
    attach: function (context, settings) {
      var from = settings.fcrd.from;
      var to = settings.fcrd.to;
      $('.field-name-field-rfcd-date input').datepicker({
        minDate: new Date(from[0], parseInt(from[1]) - 1, from[2]),
        maxDate: new Date(to[0], parseInt(to[1]) - 1, to[2]),
        dateFormat: 'dd/mm/yy'
      });
    }
  }
}(jQuery));
