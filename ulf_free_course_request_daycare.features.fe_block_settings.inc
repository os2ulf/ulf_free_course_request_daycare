<?php

/**
 * @file
 * ulf_free_course_request.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ulf_free_course_request_daycare_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['ulf_free_course_request_daycare-free_course_request_dc_summary'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'free_course_request_dc_summary',
    'module' => 'ulf_free_course_request_daycare',
    'node_types' => array(),
    'pages' => 'admin/config/system/free_course_request_daycare
admin/udgiftsdaekning/ansoegninger/dagtilbud/*',
    'roles' => array(),
    'themes' => array(
      'ulf_aarhus' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ulf_aarhus',
        'weight' => 0,
      ),
      'ulf_admin' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ulf_admin',
        'weight' => -20,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
