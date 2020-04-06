<?php

/**
 * @file
 * ulf_free_course_request_daycare.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ulf_free_course_request_daycare_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ulf_free_course_request_daycare_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function ulf_free_course_request_daycare_default_entityform_type() {
  $items = array();
  $items['free_course_request_daycare'] = entity_import('entityform_type', '{
    "type" : "free_course_request_daycare",
    "label" : "Ans\\u00f8g om udgiftsd\\u00e6kning for dagtilbud",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "editor" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "Application received",
      "submission_text" : { "value" : "", "format" : "editor" },
      "submission_show_submitted" : 1,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "18" : 0, "19" : 0, "20" : 0, "21" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "editor" }
    },
    "weight" : "0",
    "paths" : {
      "submit" : {
        "source" : "eform\\/submit\\/free-course-request-daycare",
        "alias" : "ansoeg\\/udgiftsdaekning\\/dagtilbud",
        "language" : "und"
      },
      "confirm" : {
        "source" : "eform\\/free-course-request-daycare\\/confirm",
        "alias" : "ansoeg\\/udgiftsdaekning\\/dagtilbud\\/modtaget",
        "language" : "und"
      }
    }
  }');
  return $items;
}
