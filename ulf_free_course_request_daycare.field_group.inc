<?php

/**
 * @file
 * ulf_free_course_request_daycare.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ulf_free_course_request_daycare_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gdpr|entityform|free_course_request_daycare|form';
  $field_group->group_name = 'group_gdpr';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'free_course_request_daycare';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Databeskyttelse',
    'weight' => '5',
    'children' => array(
      0 => 'field_rfcd_gdpr',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Databeskyttelse',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-gdpr field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_gdpr|entityform|free_course_request_daycare|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rfcd_course|entityform|free_course_request_daycare|form';
  $field_group->group_name = 'group_rfcd_course';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'free_course_request_daycare';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Forløb',
    'weight' => '2',
    'children' => array(
      0 => 'field_rfcd_course',
      1 => 'field_rfcd_date',
      2 => 'field_rfcd_new_course_name',
      3 => 'field_rfcd_provider',
      4 => 'field_rfcd_provider_name',
      5 => 'field_rfcd_requested_amount',
      6 => 'field_rfcd_subject',
      7 => 'field_rfcd_course_not_found',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Forløb',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-rfcd-course field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_rfcd_course|entityform|free_course_request_daycare|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rfcd_editors|entityform|free_course_request_daycare|form';
  $field_group->group_name = 'group_rfcd_editors';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'free_course_request_daycare';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Redaktion',
    'weight' => '0',
    'children' => array(
      0 => 'field_rfcd_granted_amount',
      1 => 'field_rfcd_latest_editor',
      2 => 'field_rfcd_mails_sent',
      3 => 'field_rfcd_remarks',
      4 => 'field_rfcd_send_mail',
      5 => 'field_rfcd_status',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Redaktion',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-rfcd-editors field-group-fieldset',
        'description' => 'Kun synlig for redaktører.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_rfcd_editors|entityform|free_course_request_daycare|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rfcd_payment|entityform|free_course_request_daycare|form';
  $field_group->group_name = 'group_rfcd_payment';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'free_course_request_daycare';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Udbetaling',
    'weight' => '3',
    'children' => array(
      0 => 'field_rfcd_attachment',
      1 => 'field_rfcd_payment_date',
      2 => 'field_rfcd_spent_amount',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Udbetaling',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-rfcd-payment field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_rfcd_payment|entityform|free_course_request_daycare|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rfcd_school|entityform|free_course_request_daycare|form';
  $field_group->group_name = 'group_rfcd_school';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'free_course_request_daycare';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Institution',
    'weight' => '1',
    'children' => array(
      0 => 'field_rfcd_grade',
      1 => 'field_rfcd_mail',
      2 => 'field_rfcd_name',
      3 => 'field_rfcd_phone',
      4 => 'field_rfcd_school',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Institution',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-rfcd-school field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_rfcd_school|entityform|free_course_request_daycare|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rfcd_submission|entityform|free_course_request_daycare|form';
  $field_group->group_name = 'group_rfcd_submission';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'free_course_request_daycare';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Det med småt',
    'weight' => '4',
    'children' => array(
      0 => 'field_rfcd_conditions',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Det med småt',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_rfcd_submission|entityform|free_course_request_daycare|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Databeskyttelse');
  t('Det med småt');
  t('Forløb');
  t('Institution');
  t('Redaktion');
  t('Udbetaling');

  return $field_groups;
}
