<?php

/**
 * @file
 * ulf_free_course_request_daycare.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ulf_free_course_request_daycare_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'entityform-free_course_request_daycare-field_rfcd_attachment'.
  $field_instances['entityform-free_course_request_daycare-field_rfcd_attachment'] = array(
    'bundle' => 'free_course_request_daycare',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_rfcd_attachment',
    'label' => 'Bilag',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'bilag',
      'file_extensions' => 'pdf png jpg jpeg',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'icon_link',
        'insert_styles' => array(
          'auto' => 0,
          'icon_link' => 'icon_link',
          'image' => 0,
          'image_facebook_open_graph' => 0,
          'image_large' => 0,
          'image_logo' => 0,
          'image_medium' => 0,
          'image_node_display' => 0,
          'image_teaser_display' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 26,
    ),
  );

  // Exported field_instance:
  // 'entityform-free_course_request_daycare-field_rfcd_conditions'.
  $field_instances['entityform-free_course_request_daycare-field_rfcd_conditions'] = array(
    'bundle' => 'free_course_request_daycare',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_rfcd_conditions',
    'label' => 'Ja, det er forstået',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'entityform-free_course_request_daycare-field_rfcd_course'.
  $field_instances['entityform-free_course_request_daycare-field_rfcd_course'] = array(
    'bundle' => 'free_course_request_daycare',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_rfcd_course',
    'label' => 'Forløb',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 30,
    ),
  );

  // Exported field_instance:
  // 'entityform-free_course_request_daycare-field_rfcd_course_not_found'.
  $field_instances['entityform-free_course_request_daycare-field_rfcd_course_not_found'] = array(
    'bundle' => 'free_course_request_daycare',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_rfcd_course_not_found',
    'label' => 'Forløb findes ikke på listen',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 31,
    ),
  );

  // Exported field_instance:
  // 'entityform-free_course_request_daycare-field_rfcd_date'.
  $field_instances['entityform-free_course_request_daycare-field_rfcd_date'] = array(
    'bundle' => 'free_course_request_daycare',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_rfcd_date',
    'label' => 'Afviklingsdato',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 1,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 35,
    ),
  );

  // Exported field_instance:
  // 'entityform-free_course_request_daycare-field_rfcd_follow_up_mail_sent'.
  $field_instances['entityform-free_course_request_daycare-field_rfcd_follow_up_mail_sent'] = array(
    'bundle' => 'free_course_request_daycare',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 25,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_rfcd_follow_up_mail_sent',
    'label' => 'Opfølgningsmail sendt',
    'required' => FALSE,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'date',
      'settings' => array(
        'increment' => 1,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 37,
    ),
  );

  // Exported field_instance:
  // 'entityform-free_course_request_daycare-field_rfcd_gdpr'.
  $field_instances['entityform-free_course_request_daycare-field_rfcd_gdpr'] = array(
    'bundle' => 'free_course_request_daycare',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_rfcd_gdpr',
    'label' => 'Jeg giver samtykke',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'entityform-free_course_request_daycare-field_rfcd_grade'.
  $field_instances['entityform-free_course_request_daycare-field_rfcd_grade'] = array(
    'bundle' => 'free_course_request_daycare',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Skriv hvilken gruppe, der deltager i forløbet - Humlebierne, Dueslaget, Rød Stue etc.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_rfcd_grade',
    'label' => 'Gruppe',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 39,
    ),
  );

  // Exported field_instance:
  // 'entityform-free_course_request_daycare-field_rfcd_granted_amount'.
  $field_instances['entityform-free_course_request_daycare-field_rfcd_granted_amount'] = array(
    'bundle' => 'free_course_request_daycare',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => ',',
          'prefix_suffix' => 1,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_rfcd_granted_amount',
    'label' => 'Bevilget beløb',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => ' kr.',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'entityform-free_course_request_daycare-field_rfcd_latest_editor'.
  $field_instances['entityform-free_course_request_daycare-field_rfcd_latest_editor'] = array(
    'bundle' => 'free_course_request_daycare',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_rfcd_latest_editor',
    'label' => 'Senest ændret af',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'entityform-free_course_request_daycare-field_rfcd_mail'.
  $field_instances['entityform-free_course_request_daycare-field_rfcd_mail'] = array(
    'bundle' => 'free_course_request_daycare',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_rfcd_mail',
    'label' => 'Mailadresse',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'html5_tools',
      'settings' => array(),
      'type' => 'emailwidget',
      'weight' => 42,
    ),
  );

  // Exported field_instance:
  // 'entityform-free_course_request_daycare-field_rfcd_mails_sent'.
  $field_instances['entityform-free_course_request_daycare-field_rfcd_mails_sent'] = array(
    'bundle' => 'free_course_request_daycare',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_rfcd_mails_sent',
    'label' => 'Sendte mails',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'entityform-free_course_request_daycare-field_rfcd_name'.
  $field_instances['entityform-free_course_request_daycare-field_rfcd_name'] = array(
    'bundle' => 'free_course_request_daycare',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_rfcd_name',
    'label' => 'Navn',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 40,
    ),
  );

  // Exported field_instance:
  // 'entityform-free_course_request_daycare-field_rfcd_new_course_name'.
  $field_instances['entityform-free_course_request_daycare-field_rfcd_new_course_name'] = array(
    'bundle' => 'free_course_request_daycare',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_rfcd_new_course_name',
    'label' => 'Forløbets navn',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 32,
    ),
  );

  // Exported field_instance:
  // 'entityform-free_course_request_daycare-field_rfcd_payment_date'.
  $field_instances['entityform-free_course_request_daycare-field_rfcd_payment_date'] = array(
    'bundle' => 'free_course_request_daycare',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_rfcd_payment_date',
    'label' => 'Udbetalingsdato',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 1,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 27,
    ),
  );

  // Exported field_instance:
  // 'entityform-free_course_request_daycare-field_rfcd_phone'.
  $field_instances['entityform-free_course_request_daycare-field_rfcd_phone'] = array(
    'bundle' => 'free_course_request_daycare',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_rfcd_phone',
    'label' => 'Telefonnr',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'html5_tools',
      'settings' => array(),
      'type' => 'telwidget',
      'weight' => 41,
    ),
  );

  // Exported field_instance:
  // 'entityform-free_course_request_daycare-field_rfcd_provider'.
  $field_instances['entityform-free_course_request_daycare-field_rfcd_provider'] = array(
    'bundle' => 'free_course_request_daycare',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_rfcd_provider',
    'label' => 'Udbyder',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 29,
    ),
  );

  // Exported field_instance:
  // 'entityform-free_course_request_daycare-field_rfcd_provider_name'.
  $field_instances['entityform-free_course_request_daycare-field_rfcd_provider_name'] = array(
    'bundle' => 'free_course_request_daycare',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_rfcd_provider_name',
    'label' => 'Udbyder navn',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 28,
    ),
  );

  // Exported field_instance:
  // 'entityform-free_course_request_daycare-field_rfcd_remarks'.
  $field_instances['entityform-free_course_request_daycare-field_rfcd_remarks'] = array(
    'bundle' => 'free_course_request_daycare',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_rfcd_remarks',
    'label' => 'Bemærkninger',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'entityform-free_course_request_daycare-field_rfcd_requested_amount'.
  $field_instances['entityform-free_course_request_daycare-field_rfcd_requested_amount'] = array(
    'bundle' => 'free_course_request_daycare',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Skriv forløbets totale pris i hele tal - eks. \'400\'. Det er den pris, der er aftalt med udbyderen af forløbet og som ULF i Aarhus skal betale totalt.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => ',',
          'prefix_suffix' => 1,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_rfcd_requested_amount',
    'label' => 'Ansøgt beløb',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => ' kr.',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 34,
    ),
  );

  // Exported field_instance:
  // 'entityform-free_course_request_daycare-field_rfcd_school'.
  $field_instances['entityform-free_course_request_daycare-field_rfcd_school'] = array(
    'bundle' => 'free_course_request_daycare',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 26,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_rfcd_school',
    'label' => 'Institution',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 38,
    ),
  );

  // Exported field_instance:
  // 'entityform-free_course_request_daycare-field_rfcd_send_mail'.
  $field_instances['entityform-free_course_request_daycare-field_rfcd_send_mail'] = array(
    'bundle' => 'free_course_request_daycare',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Send mail til brugeren om status på ansøgningen når formularen gemmes.
Mail sendes dog kun hvis status er godkendt eller afvist.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_rfcd_send_mail',
    'label' => 'Send mail ved gem',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'entityform-free_course_request_daycare-field_rfcd_spent_amount'.
  $field_instances['entityform-free_course_request_daycare-field_rfcd_spent_amount'] = array(
    'bundle' => 'free_course_request_daycare',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_rfcd_spent_amount',
    'label' => 'Forbrugt beløb (eks. moms)',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => ' kr.',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 25,
    ),
  );

  // Exported field_instance:
  // 'entityform-free_course_request_daycare-field_rfcd_status'.
  $field_instances['entityform-free_course_request_daycare-field_rfcd_status'] = array(
    'bundle' => 'free_course_request_daycare',
    'default_value' => array(
      0 => array(
        'value' => 'awaiting',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_rfcd_status',
    'label' => 'Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'entityform-free_course_request_daycare-field_rfcd_subject'.
  $field_instances['entityform-free_course_request_daycare-field_rfcd_subject'] = array(
    'bundle' => 'free_course_request_daycare',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_rfcd_subject',
    'label' => 'Vælg emneområde',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 33,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Afviklingsdato');
  t('Ansøgt beløb');
  t('Bemærkninger');
  t('Bevilget beløb');
  t('Bilag');
  t('Forbrugt beløb (eks. moms)');
  t('Forløb');
  t('Forløb findes ikke på listen');
  t('Forløbets navn');
  t('Gruppe');
  t('Institution');
  t('Ja, det er forstået');
  t('Jeg giver samtykke');
  t('Mailadresse');
  t('Navn');
  t('Opfølgningsmail sendt');
  t('Send mail til brugeren om status på ansøgningen når formularen gemmes.
Mail sendes dog kun hvis status er godkendt eller afvist.');
  t('Send mail ved gem');
  t('Sendte mails');
  t('Senest ændret af');
  t('Skriv forløbets totale pris i hele tal - eks. \'400\'. Det er den pris, der er aftalt med udbyderen af forløbet og som ULF i Aarhus skal betale totalt.');
  t('Skriv hvilken gruppe, der deltager i forløbet - Humlebierne, Dueslaget, Rød Stue etc.');
  t('Status');
  t('Telefonnr');
  t('Udbetalingsdato');
  t('Udbyder');
  t('Udbyder navn');
  t('Vælg emneområde');

  return $field_instances;
}
