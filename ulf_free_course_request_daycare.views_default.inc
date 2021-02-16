<?php

/**
 * @file
 * ulf_free_course_request_daycare.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ulf_free_course_request_daycare_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ulf_free_course_requests_daycare';
  $view->description = 'A list of all entityforms submissions to be as an admin report';
  $view->tag = 'entityforms';
  $view->base_table = 'entityform';
  $view->human_name = 'Ulf free course requests daycare';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Alle ansøgninger';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view own entityform';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'entityform_id' => 'entityform_id',
    'field_rfcd_school' => 'field_rfcd_school',
    'field_rfcd_grade' => 'field_rfcd_grade',
    'field_rfcd_name' => 'field_rfcd_name',
    'field_rfcd_provider_name' => 'field_rfcd_provider_name',
    'field_rfcd_provider' => 'field_rfcd_provider',
    'field_rfcd_new_course_name' => 'field_rfcd_new_course_name',
    'field_rfcd_course' => 'field_rfcd_course',
    'field_rfcd_subject' => 'field_rfcd_subject',
    'field_rfcd_date' => 'field_rfcd_date',
    'field_rfcd_date_1' => 'field_rfcd_date_1',
    'field_rfcd_requested_amount' => 'field_rfcd_requested_amount',
    'field_rfcd_status' => 'field_rfcd_status',
    'field_rfcd_granted_amount' => 'field_rfcd_granted_amount',
    'field_rfcd_spent_amount' => 'field_rfcd_spent_amount',
    'field_rfcd_attachment' => 'field_rfcd_attachment',
    'field_rfcd_payment_date' => 'field_rfcd_payment_date',
    'field_rfcd_remarks' => 'field_rfcd_remarks',
    'field_rfcd_latest_editor' => 'field_rfcd_latest_editor',
    'field_rfcd_mails_sent' => 'field_rfcd_mails_sent',
    'edit_entityform' => 'edit_entityform',
    'field_profile_name' => 'field_profile_name',
    'field_profile_name_1' => 'field_profile_name_1',
    'title' => 'title',
    'field_rfcd_course_not_found' => 'field_rfcd_course_not_found',
  );
  $handler->display->display_options['style_options']['class'] = '';
  $handler->display->display_options['style_options']['default'] = 'entityform_id';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'entityform_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rfcd_school' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rfcd_grade' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rfcd_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rfcd_provider_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rfcd_provider' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rfcd_new_course_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rfcd_course' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rfcd_subject' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rfcd_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rfcd_date_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rfcd_requested_amount' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rfcd_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rfcd_granted_amount' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rfcd_spent_amount' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rfcd_attachment' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rfcd_payment_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rfcd_remarks' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rfcd_latest_editor' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rfcd_mails_sent' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_entityform' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_profile_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_profile_name_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rfcd_course_not_found' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_rfcd_school_target_id']['id'] = 'field_rfcd_school_target_id';
  $handler->display->display_options['relationships']['field_rfcd_school_target_id']['table'] = 'field_data_field_rfcd_school';
  $handler->display->display_options['relationships']['field_rfcd_school_target_id']['field'] = 'field_rfcd_school_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_rfcd_provider_target_id']['id'] = 'field_rfcd_provider_target_id';
  $handler->display->display_options['relationships']['field_rfcd_provider_target_id']['table'] = 'field_data_field_rfcd_provider';
  $handler->display->display_options['relationships']['field_rfcd_provider_target_id']['field'] = 'field_rfcd_provider_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_rfcd_course_target_id']['id'] = 'field_rfcd_course_target_id';
  $handler->display->display_options['relationships']['field_rfcd_course_target_id']['table'] = 'field_data_field_rfcd_course';
  $handler->display->display_options['relationships']['field_rfcd_course_target_id']['field'] = 'field_rfcd_course_target_id';
  /* Relationship: Entityform Submission: Bruger uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'entityform';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['label'] = 'forfatter';
  /* Field: Bulk operations: Entityform Submission */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_entityform';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Delete Submissions',
      'postpone_processing' => 0,
    ),
  );
  /* Field: Entityform Submission: Link */
  $handler->display->display_options['fields']['link_entityform']['id'] = 'link_entityform';
  $handler->display->display_options['fields']['link_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['link_entityform']['field'] = 'link_entityform';
  $handler->display->display_options['fields']['link_entityform']['label'] = 'Vis';
  /* Field: Entityform Submission: Edit Link */
  $handler->display->display_options['fields']['edit_entityform']['id'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['edit_entityform']['field'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['label'] = 'Redigér';
  /* Field: Entityform Submission: Delete Link */
  $handler->display->display_options['fields']['delete_entityform']['id'] = 'delete_entityform';
  $handler->display->display_options['fields']['delete_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['delete_entityform']['field'] = 'delete_entityform';
  $handler->display->display_options['fields']['delete_entityform']['label'] = 'Slet';
  $handler->display->display_options['fields']['delete_entityform']['hide_alter_empty'] = FALSE;
  /* Field: Entityform Type: Etiket */
  $handler->display->display_options['fields']['label_1']['id'] = 'label_1';
  $handler->display->display_options['fields']['label_1']['table'] = 'entityform_type';
  $handler->display->display_options['fields']['label_1']['field'] = 'label';
  $handler->display->display_options['fields']['label_1']['label'] = 'Form Type';
  /* Field: Entityform Submission: Date submitted */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'entityform';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* Field: Entityform Submission: Dato ændret */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'entityform';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['hide_alter_empty'] = FALSE;
  /* Sort criterion: Entityform Submission: Date submitted */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'entityform';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    3 => 'AND',
    2 => 'AND',
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Søg på skole, person, forløb, udbyder eller id';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'entityform_id' => 'entityform_id',
    'field_rfcd_school' => 'field_rfcd_school',
    'field_rfcd_name' => 'field_rfcd_name',
    'field_rfcd_provider' => 'field_rfcd_provider',
    'field_rfcd_new_course_name' => 'field_rfcd_new_course_name',
    'field_rfcd_course' => 'field_rfcd_course',
    'field_profile_name' => 'field_profile_name',
    'field_profile_name_1' => 'field_profile_name_1',
    'title' => 'title',
  );
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'free_course_request_daycare' => 'free_course_request_daycare',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Entityform Submission: Status (field_rfcd_status) */
  $handler->display->display_options['filters']['field_rfcd_status_value']['id'] = 'field_rfcd_status_value';
  $handler->display->display_options['filters']['field_rfcd_status_value']['table'] = 'field_data_field_rfcd_status';
  $handler->display->display_options['filters']['field_rfcd_status_value']['field'] = 'field_rfcd_status_value';
  $handler->display->display_options['filters']['field_rfcd_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_rfcd_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_rfcd_status_value']['expose']['operator_id'] = 'field_rfcd_status_value_op';
  $handler->display->display_options['filters']['field_rfcd_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_rfcd_status_value']['expose']['operator'] = 'field_rfcd_status_value_op';
  $handler->display->display_options['filters']['field_rfcd_status_value']['expose']['identifier'] = 'field_rfcd_status_value';
  $handler->display->display_options['filters']['field_rfcd_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_rfcd_status_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Entityform Submission: Afviklingsdato (field_rfcd_date) */
  $handler->display->display_options['filters']['field_rfcd_date_value']['id'] = 'field_rfcd_date_value';
  $handler->display->display_options['filters']['field_rfcd_date_value']['table'] = 'field_data_field_rfcd_date';
  $handler->display->display_options['filters']['field_rfcd_date_value']['field'] = 'field_rfcd_date_value';
  $handler->display->display_options['filters']['field_rfcd_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_rfcd_date_value']['group'] = 2;
  $handler->display->display_options['filters']['field_rfcd_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_rfcd_date_value']['expose']['operator_id'] = 'field_rfcd_date_value_op';
  $handler->display->display_options['filters']['field_rfcd_date_value']['expose']['label'] = 'Afviklingsdato fra';
  $handler->display->display_options['filters']['field_rfcd_date_value']['expose']['operator'] = 'field_rfcd_date_value_op';
  $handler->display->display_options['filters']['field_rfcd_date_value']['expose']['identifier'] = 'field_rfcd_date_value';
  $handler->display->display_options['filters']['field_rfcd_date_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_rfcd_date_value']['group_info']['label'] = 'Afviklingsdato (field_rfcd_date)';
  $handler->display->display_options['filters']['field_rfcd_date_value']['group_info']['identifier'] = 'field_rfcd_date_value';
  $handler->display->display_options['filters']['field_rfcd_date_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_rfcd_date_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_rfcd_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Entityform Submission: Afviklingsdato (field_rfcd_date) */
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['id'] = 'field_rfcd_date_value_1';
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['table'] = 'field_data_field_rfcd_date';
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['field'] = 'field_rfcd_date_value';
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['group'] = 2;
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['expose']['operator_id'] = 'field_rfcd_date_value_1_op';
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['expose']['label'] = 'Afviklingsdato til';
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['expose']['operator'] = 'field_rfcd_date_value_1_op';
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['expose']['identifier'] = 'field_rfcd_date_value_1';
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['form_type'] = 'date_popup';

  /* Display: All applications */
  $handler = $view->new_display('page', 'All applications', 'free_course_requests_daycare_table');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer ulf free course request daycare settings';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_rfcd_provider_target_id']['id'] = 'field_rfcd_provider_target_id';
  $handler->display->display_options['relationships']['field_rfcd_provider_target_id']['table'] = 'field_data_field_rfcd_provider';
  $handler->display->display_options['relationships']['field_rfcd_provider_target_id']['field'] = 'field_rfcd_provider_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_rfcd_course_target_id']['id'] = 'field_rfcd_course_target_id';
  $handler->display->display_options['relationships']['field_rfcd_course_target_id']['table'] = 'field_data_field_rfcd_course';
  $handler->display->display_options['relationships']['field_rfcd_course_target_id']['field'] = 'field_rfcd_course_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Entityform Submission */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_entityform';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::_rfcd_accept' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::_rfcd_change_status_accepted' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::_rfcd_cancelled' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::_rfcd_payment_completed' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::_rfcd_ready_for_payment' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::_rfcd_change_status_refused' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::_rfcd_close' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::_rfcd_refuse' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'log' => 0,
      ),
    ),
  );
  /* Field: Entityform Submission: Entityform submission id */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['label'] = 'ID';
  $handler->display->display_options['fields']['entityform_id']['separator'] = '';
  /* Field: Entityform Submission: Institution */
  $handler->display->display_options['fields']['field_rfcd_school']['id'] = 'field_rfcd_school';
  $handler->display->display_options['fields']['field_rfcd_school']['table'] = 'field_data_field_rfcd_school';
  $handler->display->display_options['fields']['field_rfcd_school']['field'] = 'field_rfcd_school';
  $handler->display->display_options['fields']['field_rfcd_school']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Entityform Submission: Gruppe */
  $handler->display->display_options['fields']['field_rfcd_grade']['id'] = 'field_rfcd_grade';
  $handler->display->display_options['fields']['field_rfcd_grade']['table'] = 'field_data_field_rfcd_grade';
  $handler->display->display_options['fields']['field_rfcd_grade']['field'] = 'field_rfcd_grade';
  /* Field: Entityform Submission: Navn */
  $handler->display->display_options['fields']['field_rfcd_name']['id'] = 'field_rfcd_name';
  $handler->display->display_options['fields']['field_rfcd_name']['table'] = 'field_data_field_rfcd_name';
  $handler->display->display_options['fields']['field_rfcd_name']['field'] = 'field_rfcd_name';
  /* Field: Entityform Submission: Udbyder navn */
  $handler->display->display_options['fields']['field_rfcd_provider_name']['id'] = 'field_rfcd_provider_name';
  $handler->display->display_options['fields']['field_rfcd_provider_name']['table'] = 'field_data_field_rfcd_provider_name';
  $handler->display->display_options['fields']['field_rfcd_provider_name']['field'] = 'field_rfcd_provider_name';
  $handler->display->display_options['fields']['field_rfcd_provider_name']['exclude'] = TRUE;
  /* Field: Entityform Submission: Udbyder */
  $handler->display->display_options['fields']['field_rfcd_provider']['id'] = 'field_rfcd_provider';
  $handler->display->display_options['fields']['field_rfcd_provider']['table'] = 'field_data_field_rfcd_provider';
  $handler->display->display_options['fields']['field_rfcd_provider']['field'] = 'field_rfcd_provider';
  $handler->display->display_options['fields']['field_rfcd_provider']['empty'] = '[field_rfcd_provider_name] <i>(slettet)</i>';
  $handler->display->display_options['fields']['field_rfcd_provider']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Entityform Submission: Forløbets navn */
  $handler->display->display_options['fields']['field_rfcd_new_course_name']['id'] = 'field_rfcd_new_course_name';
  $handler->display->display_options['fields']['field_rfcd_new_course_name']['table'] = 'field_data_field_rfcd_new_course_name';
  $handler->display->display_options['fields']['field_rfcd_new_course_name']['field'] = 'field_rfcd_new_course_name';
  $handler->display->display_options['fields']['field_rfcd_new_course_name']['exclude'] = TRUE;
  /* Field: Entityform Submission: Forløb */
  $handler->display->display_options['fields']['field_rfcd_course']['id'] = 'field_rfcd_course';
  $handler->display->display_options['fields']['field_rfcd_course']['table'] = 'field_data_field_rfcd_course';
  $handler->display->display_options['fields']['field_rfcd_course']['field'] = 'field_rfcd_course';
  $handler->display->display_options['fields']['field_rfcd_course']['empty'] = '[field_rfcd_new_course_name] ';
  $handler->display->display_options['fields']['field_rfcd_course']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  /* Field: Entityform Submission: Vælg emneområde */
  $handler->display->display_options['fields']['field_rfcd_subject']['id'] = 'field_rfcd_subject';
  $handler->display->display_options['fields']['field_rfcd_subject']['table'] = 'field_data_field_rfcd_subject';
  $handler->display->display_options['fields']['field_rfcd_subject']['field'] = 'field_rfcd_subject';
  $handler->display->display_options['fields']['field_rfcd_subject']['label'] = 'Emneområde';
  /* Field: Entityform Submission: Afviklingsdato */
  $handler->display->display_options['fields']['field_rfcd_date']['id'] = 'field_rfcd_date';
  $handler->display->display_options['fields']['field_rfcd_date']['table'] = 'field_data_field_rfcd_date';
  $handler->display->display_options['fields']['field_rfcd_date']['field'] = 'field_rfcd_date';
  $handler->display->display_options['fields']['field_rfcd_date']['settings'] = array(
    'format_type' => 'short',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Entityform Submission: Afviklingsdato */
  $handler->display->display_options['fields']['field_rfcd_date_1']['id'] = 'field_rfcd_date_1';
  $handler->display->display_options['fields']['field_rfcd_date_1']['table'] = 'field_data_field_rfcd_date';
  $handler->display->display_options['fields']['field_rfcd_date_1']['field'] = 'field_rfcd_date';
  $handler->display->display_options['fields']['field_rfcd_date_1']['label'] = 'Skoleår';
  $handler->display->display_options['fields']['field_rfcd_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rfcd_date_1']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'U',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Entityform Submission: Ansøgt beløb */
  $handler->display->display_options['fields']['field_rfcd_requested_amount']['id'] = 'field_rfcd_requested_amount';
  $handler->display->display_options['fields']['field_rfcd_requested_amount']['table'] = 'field_data_field_rfcd_requested_amount';
  $handler->display->display_options['fields']['field_rfcd_requested_amount']['field'] = 'field_rfcd_requested_amount';
  $handler->display->display_options['fields']['field_rfcd_requested_amount']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Entityform Submission: Status */
  $handler->display->display_options['fields']['field_rfcd_status']['id'] = 'field_rfcd_status';
  $handler->display->display_options['fields']['field_rfcd_status']['table'] = 'field_data_field_rfcd_status';
  $handler->display->display_options['fields']['field_rfcd_status']['field'] = 'field_rfcd_status';
  /* Field: Entityform Submission: Bevilget beløb */
  $handler->display->display_options['fields']['field_rfcd_granted_amount']['id'] = 'field_rfcd_granted_amount';
  $handler->display->display_options['fields']['field_rfcd_granted_amount']['table'] = 'field_data_field_rfcd_granted_amount';
  $handler->display->display_options['fields']['field_rfcd_granted_amount']['field'] = 'field_rfcd_granted_amount';
  $handler->display->display_options['fields']['field_rfcd_granted_amount']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Entityform Submission: Forbrugt beløb (eks. moms) */
  $handler->display->display_options['fields']['field_rfcd_spent_amount']['id'] = 'field_rfcd_spent_amount';
  $handler->display->display_options['fields']['field_rfcd_spent_amount']['table'] = 'field_data_field_rfcd_spent_amount';
  $handler->display->display_options['fields']['field_rfcd_spent_amount']['field'] = 'field_rfcd_spent_amount';
  $handler->display->display_options['fields']['field_rfcd_spent_amount']['label'] = 'Forbrugt beløb';
  $handler->display->display_options['fields']['field_rfcd_spent_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rfcd_spent_amount']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Entityform Submission: Bilag */
  $handler->display->display_options['fields']['field_rfcd_attachment']['id'] = 'field_rfcd_attachment';
  $handler->display->display_options['fields']['field_rfcd_attachment']['table'] = 'field_data_field_rfcd_attachment';
  $handler->display->display_options['fields']['field_rfcd_attachment']['field'] = 'field_rfcd_attachment';
  $handler->display->display_options['fields']['field_rfcd_attachment']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rfcd_attachment']['alter']['text'] = '<a href="[field_rfcd_attachment]" target="_blank">Bilag</a>';
  $handler->display->display_options['fields']['field_rfcd_attachment']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_rfcd_attachment']['type'] = 'file_url_plain';
  /* Field: Entityform Submission: Udbetalingsdato */
  $handler->display->display_options['fields']['field_rfcd_payment_date']['id'] = 'field_rfcd_payment_date';
  $handler->display->display_options['fields']['field_rfcd_payment_date']['table'] = 'field_data_field_rfcd_payment_date';
  $handler->display->display_options['fields']['field_rfcd_payment_date']['field'] = 'field_rfcd_payment_date';
  $handler->display->display_options['fields']['field_rfcd_payment_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rfcd_payment_date']['settings'] = array(
    'format_type' => 'short',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Entityform Submission: Bemærkninger */
  $handler->display->display_options['fields']['field_rfcd_remarks']['id'] = 'field_rfcd_remarks';
  $handler->display->display_options['fields']['field_rfcd_remarks']['table'] = 'field_data_field_rfcd_remarks';
  $handler->display->display_options['fields']['field_rfcd_remarks']['field'] = 'field_rfcd_remarks';
  /* Field: Entityform Submission: Senest ændret af */
  $handler->display->display_options['fields']['field_rfcd_latest_editor']['id'] = 'field_rfcd_latest_editor';
  $handler->display->display_options['fields']['field_rfcd_latest_editor']['table'] = 'field_data_field_rfcd_latest_editor';
  $handler->display->display_options['fields']['field_rfcd_latest_editor']['field'] = 'field_rfcd_latest_editor';
  $handler->display->display_options['fields']['field_rfcd_latest_editor']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Entityform Submission: Sendte mails */
  $handler->display->display_options['fields']['field_rfcd_mails_sent']['id'] = 'field_rfcd_mails_sent';
  $handler->display->display_options['fields']['field_rfcd_mails_sent']['table'] = 'field_data_field_rfcd_mails_sent';
  $handler->display->display_options['fields']['field_rfcd_mails_sent']['field'] = 'field_rfcd_mails_sent';
  $handler->display->display_options['fields']['field_rfcd_mails_sent']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_rfcd_mails_sent']['multi_type'] = 'ol';
  /* Field: Entityform Submission: Edit Link */
  $handler->display->display_options['fields']['edit_entityform']['id'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['edit_entityform']['field'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['label'] = '';
  $handler->display->display_options['fields']['edit_entityform']['element_label_colon'] = FALSE;
  /* Field: User: Navn */
  $handler->display->display_options['fields']['field_profile_name']['id'] = 'field_profile_name';
  $handler->display->display_options['fields']['field_profile_name']['table'] = 'field_data_field_profile_name';
  $handler->display->display_options['fields']['field_profile_name']['field'] = 'field_profile_name';
  $handler->display->display_options['fields']['field_profile_name']['relationship'] = 'field_rfcd_school_target_id';
  $handler->display->display_options['fields']['field_profile_name']['label'] = 'Skole';
  $handler->display->display_options['fields']['field_profile_name']['exclude'] = TRUE;
  /* Field: User: Navn */
  $handler->display->display_options['fields']['field_profile_name_1']['id'] = 'field_profile_name_1';
  $handler->display->display_options['fields']['field_profile_name_1']['table'] = 'field_data_field_profile_name';
  $handler->display->display_options['fields']['field_profile_name_1']['field'] = 'field_profile_name';
  $handler->display->display_options['fields']['field_profile_name_1']['relationship'] = 'field_rfcd_provider_target_id';
  $handler->display->display_options['fields']['field_profile_name_1']['label'] = 'Udbyder';
  $handler->display->display_options['fields']['field_profile_name_1']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_rfcd_course_target_id';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Entityform Submission: Forløb findes ikke på listen */
  $handler->display->display_options['fields']['field_rfcd_course_not_found']['id'] = 'field_rfcd_course_not_found';
  $handler->display->display_options['fields']['field_rfcd_course_not_found']['table'] = 'field_data_field_rfcd_course_not_found';
  $handler->display->display_options['fields']['field_rfcd_course_not_found']['field'] = 'field_rfcd_course_not_found';
  $handler->display->display_options['fields']['field_rfcd_course_not_found']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    3 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Søg på skole, person, forløb, udbyder eller id';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'entityform_id' => 'entityform_id',
    'field_rfcd_school' => 'field_rfcd_school',
    'field_rfcd_name' => 'field_rfcd_name',
    'field_rfcd_provider' => 'field_rfcd_provider',
    'field_rfcd_new_course_name' => 'field_rfcd_new_course_name',
    'field_rfcd_course' => 'field_rfcd_course',
    'field_profile_name' => 'field_profile_name',
    'field_profile_name_1' => 'field_profile_name_1',
    'title' => 'title',
  );
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'free_course_request_daycare' => 'free_course_request_daycare',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine_1']['id'] = 'combine_1';
  $handler->display->display_options['filters']['combine_1']['table'] = 'views';
  $handler->display->display_options['filters']['combine_1']['field'] = 'combine';
  $handler->display->display_options['filters']['combine_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine_1']['group'] = 1;
  $handler->display->display_options['filters']['combine_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine_1']['expose']['operator_id'] = 'combine_1_op';
  $handler->display->display_options['filters']['combine_1']['expose']['label'] = 'Søg på inst, grup, pers, forløb, udbyd eller id';
  $handler->display->display_options['filters']['combine_1']['expose']['operator'] = 'combine_1_op';
  $handler->display->display_options['filters']['combine_1']['expose']['identifier'] = 'combine_1';
  $handler->display->display_options['filters']['combine_1']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['combine_1']['fields'] = array(
    'entityform_id' => 'entityform_id',
    'field_rfcd_school' => 'field_rfcd_school',
    'field_rfcd_grade' => 'field_rfcd_grade',
    'field_rfcd_name' => 'field_rfcd_name',
    'field_rfcd_provider_name' => 'field_rfcd_provider_name',
    'field_rfcd_provider' => 'field_rfcd_provider',
    'field_rfcd_new_course_name' => 'field_rfcd_new_course_name',
    'field_rfcd_course' => 'field_rfcd_course',
    'field_profile_name' => 'field_profile_name',
    'field_profile_name_1' => 'field_profile_name_1',
    'title' => 'title',
  );
  /* Filter criterion: Entityform Submission: Status (field_rfcd_status) */
  $handler->display->display_options['filters']['field_rfcd_status_value']['id'] = 'field_rfcd_status_value';
  $handler->display->display_options['filters']['field_rfcd_status_value']['table'] = 'field_data_field_rfcd_status';
  $handler->display->display_options['filters']['field_rfcd_status_value']['field'] = 'field_rfcd_status_value';
  $handler->display->display_options['filters']['field_rfcd_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_rfcd_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_rfcd_status_value']['expose']['operator_id'] = 'field_rfcd_status_value_op';
  $handler->display->display_options['filters']['field_rfcd_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_rfcd_status_value']['expose']['operator'] = 'field_rfcd_status_value_op';
  $handler->display->display_options['filters']['field_rfcd_status_value']['expose']['identifier'] = 'field_rfcd_status_value';
  $handler->display->display_options['filters']['field_rfcd_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_rfcd_status_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Entityform Submission: Institution (field_rfcd_school) */
  $handler->display->display_options['filters']['field_rfcd_school_value']['id'] = 'field_rfcd_school_value';
  $handler->display->display_options['filters']['field_rfcd_school_value']['table'] = 'field_data_field_rfcd_school';
  $handler->display->display_options['filters']['field_rfcd_school_value']['field'] = 'field_rfcd_school_value';
  $handler->display->display_options['filters']['field_rfcd_school_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_rfcd_school_value']['group'] = 3;
  $handler->display->display_options['filters']['field_rfcd_school_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_rfcd_school_value']['expose']['operator_id'] = 'field_rfcd_school_value_op';
  $handler->display->display_options['filters']['field_rfcd_school_value']['expose']['label'] = 'Institution';
  $handler->display->display_options['filters']['field_rfcd_school_value']['expose']['operator'] = 'field_rfcd_school_value_op';
  $handler->display->display_options['filters']['field_rfcd_school_value']['expose']['identifier'] = 'field_rfcd_school_value';
  $handler->display->display_options['filters']['field_rfcd_school_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Entityform Submission: Gruppe (field_rfcd_grade) */
  $handler->display->display_options['filters']['field_rfcd_grade_value']['id'] = 'field_rfcd_grade_value';
  $handler->display->display_options['filters']['field_rfcd_grade_value']['table'] = 'field_data_field_rfcd_grade';
  $handler->display->display_options['filters']['field_rfcd_grade_value']['field'] = 'field_rfcd_grade_value';
  $handler->display->display_options['filters']['field_rfcd_grade_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_rfcd_grade_value']['group'] = 3;
  $handler->display->display_options['filters']['field_rfcd_grade_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_rfcd_grade_value']['expose']['operator_id'] = 'field_rfcd_grade_value_op';
  $handler->display->display_options['filters']['field_rfcd_grade_value']['expose']['label'] = 'Gruppe';
  $handler->display->display_options['filters']['field_rfcd_grade_value']['expose']['operator'] = 'field_rfcd_grade_value_op';
  $handler->display->display_options['filters']['field_rfcd_grade_value']['expose']['identifier'] = 'field_rfcd_grade_value';
  $handler->display->display_options['filters']['field_rfcd_grade_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Entityform Submission: Navn (field_rfcd_name) */
  $handler->display->display_options['filters']['field_rfcd_name_value']['id'] = 'field_rfcd_name_value';
  $handler->display->display_options['filters']['field_rfcd_name_value']['table'] = 'field_data_field_rfcd_name';
  $handler->display->display_options['filters']['field_rfcd_name_value']['field'] = 'field_rfcd_name_value';
  $handler->display->display_options['filters']['field_rfcd_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_rfcd_name_value']['group'] = 3;
  $handler->display->display_options['filters']['field_rfcd_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_rfcd_name_value']['expose']['operator_id'] = 'field_rfcd_name_value_op';
  $handler->display->display_options['filters']['field_rfcd_name_value']['expose']['label'] = 'Navn';
  $handler->display->display_options['filters']['field_rfcd_name_value']['expose']['operator'] = 'field_rfcd_name_value_op';
  $handler->display->display_options['filters']['field_rfcd_name_value']['expose']['identifier'] = 'field_rfcd_name_value';
  $handler->display->display_options['filters']['field_rfcd_name_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Entityform Submission: Udbyder navn (field_rfcd_provider_name) */
  $handler->display->display_options['filters']['field_rfcd_provider_name_value']['id'] = 'field_rfcd_provider_name_value';
  $handler->display->display_options['filters']['field_rfcd_provider_name_value']['table'] = 'field_data_field_rfcd_provider_name';
  $handler->display->display_options['filters']['field_rfcd_provider_name_value']['field'] = 'field_rfcd_provider_name_value';
  $handler->display->display_options['filters']['field_rfcd_provider_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_rfcd_provider_name_value']['group'] = 3;
  $handler->display->display_options['filters']['field_rfcd_provider_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_rfcd_provider_name_value']['expose']['operator_id'] = 'field_rfcd_provider_name_value_op';
  $handler->display->display_options['filters']['field_rfcd_provider_name_value']['expose']['label'] = 'Udbyder';
  $handler->display->display_options['filters']['field_rfcd_provider_name_value']['expose']['operator'] = 'field_rfcd_provider_name_value_op';
  $handler->display->display_options['filters']['field_rfcd_provider_name_value']['expose']['identifier'] = 'field_rfcd_provider_name_value';
  $handler->display->display_options['filters']['field_rfcd_provider_name_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Entityform Submission: Afviklingsdato (field_rfcd_date) */
  $handler->display->display_options['filters']['field_rfcd_date_value']['id'] = 'field_rfcd_date_value';
  $handler->display->display_options['filters']['field_rfcd_date_value']['table'] = 'field_data_field_rfcd_date';
  $handler->display->display_options['filters']['field_rfcd_date_value']['field'] = 'field_rfcd_date_value';
  $handler->display->display_options['filters']['field_rfcd_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_rfcd_date_value']['group'] = 2;
  $handler->display->display_options['filters']['field_rfcd_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_rfcd_date_value']['expose']['operator_id'] = 'field_rfcd_date_value_op';
  $handler->display->display_options['filters']['field_rfcd_date_value']['expose']['label'] = 'Afviklingsdato fra';
  $handler->display->display_options['filters']['field_rfcd_date_value']['expose']['operator'] = 'field_rfcd_date_value_op';
  $handler->display->display_options['filters']['field_rfcd_date_value']['expose']['identifier'] = 'field_rfcd_date_value';
  $handler->display->display_options['filters']['field_rfcd_date_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_rfcd_date_value']['group_info']['label'] = 'Afviklingsdato (field_rfcd_date)';
  $handler->display->display_options['filters']['field_rfcd_date_value']['group_info']['identifier'] = 'field_rfcd_date_value';
  $handler->display->display_options['filters']['field_rfcd_date_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_rfcd_date_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_rfcd_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Entityform Submission: Afviklingsdato (field_rfcd_date) */
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['id'] = 'field_rfcd_date_value_1';
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['table'] = 'field_data_field_rfcd_date';
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['field'] = 'field_rfcd_date_value';
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['group'] = 2;
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['expose']['operator_id'] = 'field_rfcd_date_value_1_op';
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['expose']['label'] = 'Afviklingsdato til';
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['expose']['operator'] = 'field_rfcd_date_value_1_op';
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['expose']['identifier'] = 'field_rfcd_date_value_1';
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['form_type'] = 'date_popup';
  $handler->display->display_options['path'] = 'admin/config/system/free_course_request_daycare';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Financing requests for daycare';
  $handler->display->display_options['menu']['description'] = 'Financing requests for daycare';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: User applications */
  $handler = $view->new_display('page', 'User applications', 'free_course_requests_daycare_user');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Skolens ansøgninger';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view own entityform';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_rfcd_provider_target_id']['id'] = 'field_rfcd_provider_target_id';
  $handler->display->display_options['relationships']['field_rfcd_provider_target_id']['table'] = 'field_data_field_rfcd_provider';
  $handler->display->display_options['relationships']['field_rfcd_provider_target_id']['field'] = 'field_rfcd_provider_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_rfcd_course_target_id']['id'] = 'field_rfcd_course_target_id';
  $handler->display->display_options['relationships']['field_rfcd_course_target_id']['table'] = 'field_data_field_rfcd_course';
  $handler->display->display_options['relationships']['field_rfcd_course_target_id']['field'] = 'field_rfcd_course_target_id';
  /* Relationship: Entityform Submission: Bruger uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'entityform';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['label'] = 'forfatter';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Entityform Submission: Entityform submission id */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['label'] = 'ID';
  $handler->display->display_options['fields']['entityform_id']['separator'] = '';
  /* Field: Entityform Submission: Navn */
  $handler->display->display_options['fields']['field_rfcd_name']['id'] = 'field_rfcd_name';
  $handler->display->display_options['fields']['field_rfcd_name']['table'] = 'field_data_field_rfcd_name';
  $handler->display->display_options['fields']['field_rfcd_name']['field'] = 'field_rfcd_name';
  /* Field: Entityform Submission: Udbyder */
  $handler->display->display_options['fields']['field_rfcd_provider']['id'] = 'field_rfcd_provider';
  $handler->display->display_options['fields']['field_rfcd_provider']['table'] = 'field_data_field_rfcd_provider';
  $handler->display->display_options['fields']['field_rfcd_provider']['field'] = 'field_rfcd_provider';
  $handler->display->display_options['fields']['field_rfcd_provider']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: User: CVR */
  $handler->display->display_options['fields']['field_profile_cvr']['id'] = 'field_profile_cvr';
  $handler->display->display_options['fields']['field_profile_cvr']['table'] = 'field_data_field_profile_cvr';
  $handler->display->display_options['fields']['field_profile_cvr']['field'] = 'field_profile_cvr';
  $handler->display->display_options['fields']['field_profile_cvr']['relationship'] = 'field_rfcd_provider_target_id';
  $handler->display->display_options['fields']['field_profile_cvr']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Entityform Submission: Gruppe */
  $handler->display->display_options['fields']['field_rfcd_grade']['id'] = 'field_rfcd_grade';
  $handler->display->display_options['fields']['field_rfcd_grade']['table'] = 'field_data_field_rfcd_grade';
  $handler->display->display_options['fields']['field_rfcd_grade']['field'] = 'field_rfcd_grade';
  /* Field: Entityform Submission: Forløbets navn */
  $handler->display->display_options['fields']['field_rfcd_new_course_name']['id'] = 'field_rfcd_new_course_name';
  $handler->display->display_options['fields']['field_rfcd_new_course_name']['table'] = 'field_data_field_rfcd_new_course_name';
  $handler->display->display_options['fields']['field_rfcd_new_course_name']['field'] = 'field_rfcd_new_course_name';
  $handler->display->display_options['fields']['field_rfcd_new_course_name']['exclude'] = TRUE;
  /* Field: Entityform Submission: Forløb */
  $handler->display->display_options['fields']['field_rfcd_course']['id'] = 'field_rfcd_course';
  $handler->display->display_options['fields']['field_rfcd_course']['table'] = 'field_data_field_rfcd_course';
  $handler->display->display_options['fields']['field_rfcd_course']['field'] = 'field_rfcd_course';
  $handler->display->display_options['fields']['field_rfcd_course']['empty'] = '[field_rfcd_new_course_name] ';
  $handler->display->display_options['fields']['field_rfcd_course']['settings'] = array(
    'bypass_access' => 1,
    'link' => 1,
  );
  /* Field: Entityform Submission: Vælg emneområde */
  $handler->display->display_options['fields']['field_rfcd_subject']['id'] = 'field_rfcd_subject';
  $handler->display->display_options['fields']['field_rfcd_subject']['table'] = 'field_data_field_rfcd_subject';
  $handler->display->display_options['fields']['field_rfcd_subject']['field'] = 'field_rfcd_subject';
  $handler->display->display_options['fields']['field_rfcd_subject']['label'] = 'Emneområde';
  /* Field: Entityform Submission: Afviklingsdato */
  $handler->display->display_options['fields']['field_rfcd_date']['id'] = 'field_rfcd_date';
  $handler->display->display_options['fields']['field_rfcd_date']['table'] = 'field_data_field_rfcd_date';
  $handler->display->display_options['fields']['field_rfcd_date']['field'] = 'field_rfcd_date';
  $handler->display->display_options['fields']['field_rfcd_date']['settings'] = array(
    'format_type' => 'short',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Entityform Submission: Afviklingsdato */
  $handler->display->display_options['fields']['field_rfcd_date_1']['id'] = 'field_rfcd_date_1';
  $handler->display->display_options['fields']['field_rfcd_date_1']['table'] = 'field_data_field_rfcd_date';
  $handler->display->display_options['fields']['field_rfcd_date_1']['field'] = 'field_rfcd_date';
  $handler->display->display_options['fields']['field_rfcd_date_1']['label'] = 'Skoleår';
  $handler->display->display_options['fields']['field_rfcd_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rfcd_date_1']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'U',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Entityform Submission: Ansøgt beløb */
  $handler->display->display_options['fields']['field_rfcd_requested_amount']['id'] = 'field_rfcd_requested_amount';
  $handler->display->display_options['fields']['field_rfcd_requested_amount']['table'] = 'field_data_field_rfcd_requested_amount';
  $handler->display->display_options['fields']['field_rfcd_requested_amount']['field'] = 'field_rfcd_requested_amount';
  $handler->display->display_options['fields']['field_rfcd_requested_amount']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Entityform Submission: Status */
  $handler->display->display_options['fields']['field_rfcd_status']['id'] = 'field_rfcd_status';
  $handler->display->display_options['fields']['field_rfcd_status']['table'] = 'field_data_field_rfcd_status';
  $handler->display->display_options['fields']['field_rfcd_status']['field'] = 'field_rfcd_status';
  /* Field: Entityform Submission: Bevilget beløb */
  $handler->display->display_options['fields']['field_rfcd_granted_amount']['id'] = 'field_rfcd_granted_amount';
  $handler->display->display_options['fields']['field_rfcd_granted_amount']['table'] = 'field_data_field_rfcd_granted_amount';
  $handler->display->display_options['fields']['field_rfcd_granted_amount']['field'] = 'field_rfcd_granted_amount';
  $handler->display->display_options['fields']['field_rfcd_granted_amount']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Entityform Submission: Forbrugt beløb (eks. moms) */
  $handler->display->display_options['fields']['field_rfcd_spent_amount']['id'] = 'field_rfcd_spent_amount';
  $handler->display->display_options['fields']['field_rfcd_spent_amount']['table'] = 'field_data_field_rfcd_spent_amount';
  $handler->display->display_options['fields']['field_rfcd_spent_amount']['field'] = 'field_rfcd_spent_amount';
  $handler->display->display_options['fields']['field_rfcd_spent_amount']['label'] = 'Forbrugt beløb';
  $handler->display->display_options['fields']['field_rfcd_spent_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rfcd_spent_amount']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Entityform Submission: Bilag */
  $handler->display->display_options['fields']['field_rfcd_attachment']['id'] = 'field_rfcd_attachment';
  $handler->display->display_options['fields']['field_rfcd_attachment']['table'] = 'field_data_field_rfcd_attachment';
  $handler->display->display_options['fields']['field_rfcd_attachment']['field'] = 'field_rfcd_attachment';
  $handler->display->display_options['fields']['field_rfcd_attachment']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rfcd_attachment']['alter']['text'] = '<a href="[field_rfcd_attachment]" target="_blank">Bilag</a>';
  $handler->display->display_options['fields']['field_rfcd_attachment']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_rfcd_attachment']['type'] = 'file_url_plain';
  /* Field: Entityform Submission: Udbetalingsdato */
  $handler->display->display_options['fields']['field_rfcd_payment_date']['id'] = 'field_rfcd_payment_date';
  $handler->display->display_options['fields']['field_rfcd_payment_date']['table'] = 'field_data_field_rfcd_payment_date';
  $handler->display->display_options['fields']['field_rfcd_payment_date']['field'] = 'field_rfcd_payment_date';
  $handler->display->display_options['fields']['field_rfcd_payment_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rfcd_payment_date']['settings'] = array(
    'format_type' => 'short',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Entityform Submission: Bemærkninger */
  $handler->display->display_options['fields']['field_rfcd_remarks']['id'] = 'field_rfcd_remarks';
  $handler->display->display_options['fields']['field_rfcd_remarks']['table'] = 'field_data_field_rfcd_remarks';
  $handler->display->display_options['fields']['field_rfcd_remarks']['field'] = 'field_rfcd_remarks';
  /* Field: User: Navn */
  $handler->display->display_options['fields']['field_profile_name']['id'] = 'field_profile_name';
  $handler->display->display_options['fields']['field_profile_name']['table'] = 'field_data_field_profile_name';
  $handler->display->display_options['fields']['field_profile_name']['field'] = 'field_profile_name';
  $handler->display->display_options['fields']['field_profile_name']['relationship'] = 'field_rfcd_provider_target_id';
  $handler->display->display_options['fields']['field_profile_name']['label'] = 'Udbyder';
  $handler->display->display_options['fields']['field_profile_name']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_rfcd_course_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Forløb';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Entityform Submission: Edit Link */
  $handler->display->display_options['fields']['edit_entityform']['id'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['edit_entityform']['field'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['label'] = 'Handlinger';
  $handler->display->display_options['fields']['edit_entityform']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_entityform']['text'] = 'Rediger';
  /* Field: Entityform Submission: Forløb findes ikke på listen */
  $handler->display->display_options['fields']['field_rfcd_course_not_found']['id'] = 'field_rfcd_course_not_found';
  $handler->display->display_options['fields']['field_rfcd_course_not_found']['table'] = 'field_data_field_rfcd_course_not_found';
  $handler->display->display_options['fields']['field_rfcd_course_not_found']['field'] = 'field_rfcd_course_not_found';
  $handler->display->display_options['fields']['field_rfcd_course_not_found']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    3 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Søg på person, forløb, udbyder eller id';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'entityform_id' => 'entityform_id',
    'field_rfcd_name' => 'field_rfcd_name',
    'field_rfcd_provider' => 'field_rfcd_provider',
    'field_rfcd_grade' => 'field_rfcd_grade',
    'field_rfcd_new_course_name' => 'field_rfcd_new_course_name',
    'field_rfcd_course' => 'field_rfcd_course',
    'field_profile_name' => 'field_profile_name',
    'title' => 'title',
  );
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'free_course_request_daycare' => 'free_course_request_daycare',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Entityform Submission: Status (field_rfcd_status) */
  $handler->display->display_options['filters']['field_rfcd_status_value']['id'] = 'field_rfcd_status_value';
  $handler->display->display_options['filters']['field_rfcd_status_value']['table'] = 'field_data_field_rfcd_status';
  $handler->display->display_options['filters']['field_rfcd_status_value']['field'] = 'field_rfcd_status_value';
  $handler->display->display_options['filters']['field_rfcd_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_rfcd_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_rfcd_status_value']['expose']['operator_id'] = 'field_rfcd_status_value_op';
  $handler->display->display_options['filters']['field_rfcd_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_rfcd_status_value']['expose']['operator'] = 'field_rfcd_status_value_op';
  $handler->display->display_options['filters']['field_rfcd_status_value']['expose']['identifier'] = 'field_rfcd_status_value';
  $handler->display->display_options['filters']['field_rfcd_status_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Entityform Submission: Afviklingsdato (field_rfcd_date) */
  $handler->display->display_options['filters']['field_rfcd_date_value']['id'] = 'field_rfcd_date_value';
  $handler->display->display_options['filters']['field_rfcd_date_value']['table'] = 'field_data_field_rfcd_date';
  $handler->display->display_options['filters']['field_rfcd_date_value']['field'] = 'field_rfcd_date_value';
  $handler->display->display_options['filters']['field_rfcd_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_rfcd_date_value']['group'] = 2;
  $handler->display->display_options['filters']['field_rfcd_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_rfcd_date_value']['expose']['operator_id'] = 'field_rfcd_date_value_op';
  $handler->display->display_options['filters']['field_rfcd_date_value']['expose']['label'] = 'Afviklingsdato fra';
  $handler->display->display_options['filters']['field_rfcd_date_value']['expose']['operator'] = 'field_rfcd_date_value_op';
  $handler->display->display_options['filters']['field_rfcd_date_value']['expose']['identifier'] = 'field_rfcd_date_value';
  $handler->display->display_options['filters']['field_rfcd_date_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_rfcd_date_value']['group_info']['label'] = 'Afviklingsdato (field_rfcd_date)';
  $handler->display->display_options['filters']['field_rfcd_date_value']['group_info']['identifier'] = 'field_rfcd_date_value';
  $handler->display->display_options['filters']['field_rfcd_date_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_rfcd_date_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_rfcd_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Entityform Submission: Afviklingsdato (field_rfcd_date) */
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['id'] = 'field_rfcd_date_value_1';
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['table'] = 'field_data_field_rfcd_date';
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['field'] = 'field_rfcd_date_value';
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['group'] = 2;
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['expose']['operator_id'] = 'field_rfcd_date_value_1_op';
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['expose']['label'] = 'Afviklingsdato til';
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['expose']['operator'] = 'field_rfcd_date_value_1_op';
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['expose']['identifier'] = 'field_rfcd_date_value_1';
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_rfcd_date_value_1']['form_type'] = 'date_popup';
  /* Filter criterion: Entityform Submission: Afviklingsdato (field_rfcd_date) */
  $handler->display->display_options['filters']['field_rfcd_date_value_2']['id'] = 'field_rfcd_date_value_2';
  $handler->display->display_options['filters']['field_rfcd_date_value_2']['table'] = 'field_data_field_rfcd_date';
  $handler->display->display_options['filters']['field_rfcd_date_value_2']['field'] = 'field_rfcd_date_value';
  $handler->display->display_options['filters']['field_rfcd_date_value_2']['operator'] = 'between';
  $handler->display->display_options['filters']['field_rfcd_date_value_2']['group'] = 3;
  $handler->display->display_options['filters']['field_rfcd_date_value_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_rfcd_date_value_2']['expose']['operator_id'] = 'field_rfcd_date_value_2_op';
  $handler->display->display_options['filters']['field_rfcd_date_value_2']['expose']['label'] = 'Semester';
  $handler->display->display_options['filters']['field_rfcd_date_value_2']['expose']['operator'] = 'field_rfcd_date_value_2_op';
  $handler->display->display_options['filters']['field_rfcd_date_value_2']['expose']['identifier'] = 'field_rfcd_date_value_2';
  $handler->display->display_options['filters']['field_rfcd_date_value_2']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_rfcd_date_value_2']['granularity'] = 'month';
  $handler->display->display_options['filters']['field_rfcd_date_value_2']['form_type'] = 'date_text';
  $handler->display->display_options['path'] = 'admin/udgiftsdaekning/dagtilbud/ansoegninger';
  $handler->display->display_options['menu']['title'] = 'Financing requests';
  $handler->display->display_options['menu']['description'] = 'Financing requests';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_daycare');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer ulf free course request daycare settings';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_rfcd_course_target_id']['id'] = 'field_rfcd_course_target_id';
  $handler->display->display_options['relationships']['field_rfcd_course_target_id']['table'] = 'field_data_field_rfcd_course';
  $handler->display->display_options['relationships']['field_rfcd_course_target_id']['field'] = 'field_rfcd_course_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Entityform Submission: Entityform submission id */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['label'] = 'ID';
  $handler->display->display_options['fields']['entityform_id']['separator'] = '';
  /* Field: Entityform Submission: Institution */
  $handler->display->display_options['fields']['field_rfcd_school']['id'] = 'field_rfcd_school';
  $handler->display->display_options['fields']['field_rfcd_school']['table'] = 'field_data_field_rfcd_school';
  $handler->display->display_options['fields']['field_rfcd_school']['field'] = 'field_rfcd_school';
  $handler->display->display_options['fields']['field_rfcd_school']['label'] = 'Skole';
  $handler->display->display_options['fields']['field_rfcd_school']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Entityform Submission: Gruppe */
  $handler->display->display_options['fields']['field_rfcd_grade']['id'] = 'field_rfcd_grade';
  $handler->display->display_options['fields']['field_rfcd_grade']['table'] = 'field_data_field_rfcd_grade';
  $handler->display->display_options['fields']['field_rfcd_grade']['field'] = 'field_rfcd_grade';
  /* Field: Entityform Submission: Navn */
  $handler->display->display_options['fields']['field_rfcd_name']['id'] = 'field_rfcd_name';
  $handler->display->display_options['fields']['field_rfcd_name']['table'] = 'field_data_field_rfcd_name';
  $handler->display->display_options['fields']['field_rfcd_name']['field'] = 'field_rfcd_name';
  /* Field: Entityform Submission: Mailadresse */
  $handler->display->display_options['fields']['field_rfcd_mail']['id'] = 'field_rfcd_mail';
  $handler->display->display_options['fields']['field_rfcd_mail']['table'] = 'field_data_field_rfcd_mail';
  $handler->display->display_options['fields']['field_rfcd_mail']['field'] = 'field_rfcd_mail';
  /* Field: Entityform Submission: Telefonnr */
  $handler->display->display_options['fields']['field_rfcd_phone']['id'] = 'field_rfcd_phone';
  $handler->display->display_options['fields']['field_rfcd_phone']['table'] = 'field_data_field_rfcd_phone';
  $handler->display->display_options['fields']['field_rfcd_phone']['field'] = 'field_rfcd_phone';
  /* Field: Entityform Submission: Udbyder */
  $handler->display->display_options['fields']['field_rfcd_provider']['id'] = 'field_rfcd_provider';
  $handler->display->display_options['fields']['field_rfcd_provider']['table'] = 'field_data_field_rfcd_provider';
  $handler->display->display_options['fields']['field_rfcd_provider']['field'] = 'field_rfcd_provider';
  $handler->display->display_options['fields']['field_rfcd_provider']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Entityform Submission: Forløb */
  $handler->display->display_options['fields']['field_rfcd_course']['id'] = 'field_rfcd_course';
  $handler->display->display_options['fields']['field_rfcd_course']['table'] = 'field_data_field_rfcd_course';
  $handler->display->display_options['fields']['field_rfcd_course']['field'] = 'field_rfcd_course';
  $handler->display->display_options['fields']['field_rfcd_course']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Entityform Submission: Forløbets navn */
  $handler->display->display_options['fields']['field_rfcd_new_course_name']['id'] = 'field_rfcd_new_course_name';
  $handler->display->display_options['fields']['field_rfcd_new_course_name']['table'] = 'field_data_field_rfcd_new_course_name';
  $handler->display->display_options['fields']['field_rfcd_new_course_name']['field'] = 'field_rfcd_new_course_name';
  /* Field: Entityform Submission: Vælg emneområde */
  $handler->display->display_options['fields']['field_rfcd_subject']['id'] = 'field_rfcd_subject';
  $handler->display->display_options['fields']['field_rfcd_subject']['table'] = 'field_data_field_rfcd_subject';
  $handler->display->display_options['fields']['field_rfcd_subject']['field'] = 'field_rfcd_subject';
  $handler->display->display_options['fields']['field_rfcd_subject']['label'] = 'Emneområde';
  /* Field: Entityform Submission: Afviklingsdato */
  $handler->display->display_options['fields']['field_rfcd_date']['id'] = 'field_rfcd_date';
  $handler->display->display_options['fields']['field_rfcd_date']['table'] = 'field_data_field_rfcd_date';
  $handler->display->display_options['fields']['field_rfcd_date']['field'] = 'field_rfcd_date';
  $handler->display->display_options['fields']['field_rfcd_date']['settings'] = array(
    'format_type' => 'short',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Entityform Submission: Ansøgt beløb */
  $handler->display->display_options['fields']['field_rfcd_requested_amount']['id'] = 'field_rfcd_requested_amount';
  $handler->display->display_options['fields']['field_rfcd_requested_amount']['table'] = 'field_data_field_rfcd_requested_amount';
  $handler->display->display_options['fields']['field_rfcd_requested_amount']['field'] = 'field_rfcd_requested_amount';
  $handler->display->display_options['fields']['field_rfcd_requested_amount']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  /* Field: Entityform Submission: Bevilget beløb */
  $handler->display->display_options['fields']['field_rfcd_granted_amount']['id'] = 'field_rfcd_granted_amount';
  $handler->display->display_options['fields']['field_rfcd_granted_amount']['table'] = 'field_data_field_rfcd_granted_amount';
  $handler->display->display_options['fields']['field_rfcd_granted_amount']['field'] = 'field_rfcd_granted_amount';
  $handler->display->display_options['fields']['field_rfcd_granted_amount']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  /* Field: Entityform Submission: Forbrugt beløb (eks. moms) */
  $handler->display->display_options['fields']['field_rfcd_spent_amount']['id'] = 'field_rfcd_spent_amount';
  $handler->display->display_options['fields']['field_rfcd_spent_amount']['table'] = 'field_data_field_rfcd_spent_amount';
  $handler->display->display_options['fields']['field_rfcd_spent_amount']['field'] = 'field_rfcd_spent_amount';
  $handler->display->display_options['fields']['field_rfcd_spent_amount']['label'] = 'Forbrugt beløb';
  $handler->display->display_options['fields']['field_rfcd_spent_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rfcd_spent_amount']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => ',',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Entityform Submission: Udbetalingsdato */
  $handler->display->display_options['fields']['field_rfcd_payment_date']['id'] = 'field_rfcd_payment_date';
  $handler->display->display_options['fields']['field_rfcd_payment_date']['table'] = 'field_data_field_rfcd_payment_date';
  $handler->display->display_options['fields']['field_rfcd_payment_date']['field'] = 'field_rfcd_payment_date';
  $handler->display->display_options['fields']['field_rfcd_payment_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rfcd_payment_date']['settings'] = array(
    'format_type' => 'short',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Entityform Submission: Status */
  $handler->display->display_options['fields']['field_rfcd_status']['id'] = 'field_rfcd_status';
  $handler->display->display_options['fields']['field_rfcd_status']['table'] = 'field_data_field_rfcd_status';
  $handler->display->display_options['fields']['field_rfcd_status']['field'] = 'field_rfcd_status';
  /* Field: Entityform Submission: Bemærkninger */
  $handler->display->display_options['fields']['field_rfcd_remarks']['id'] = 'field_rfcd_remarks';
  $handler->display->display_options['fields']['field_rfcd_remarks']['table'] = 'field_data_field_rfcd_remarks';
  $handler->display->display_options['fields']['field_rfcd_remarks']['field'] = 'field_rfcd_remarks';
  /* Field: Entityform Submission: Sendte mails */
  $handler->display->display_options['fields']['field_rfcd_mails_sent']['id'] = 'field_rfcd_mails_sent';
  $handler->display->display_options['fields']['field_rfcd_mails_sent']['table'] = 'field_data_field_rfcd_mails_sent';
  $handler->display->display_options['fields']['field_rfcd_mails_sent']['field'] = 'field_rfcd_mails_sent';
  $handler->display->display_options['fields']['field_rfcd_mails_sent']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_rfcd_mails_sent']['separator'] = '|';
  /* Field: Entityform Submission: Date submitted */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'entityform';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Indsendelsesdato';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'html5_tools_iso8601';
  /* Field: Entityform Submission: Afviklingsdato */
  $handler->display->display_options['fields']['field_rfcd_date_1']['id'] = 'field_rfcd_date_1';
  $handler->display->display_options['fields']['field_rfcd_date_1']['table'] = 'field_data_field_rfcd_date';
  $handler->display->display_options['fields']['field_rfcd_date_1']['field'] = 'field_rfcd_date';
  $handler->display->display_options['fields']['field_rfcd_date_1']['label'] = 'Skoleår';
  $handler->display->display_options['fields']['field_rfcd_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rfcd_date_1']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'U',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['path'] = 'admin/settings/custom/free_course_request/daycare/export';
  $handler->display->display_options['displays'] = array(
    'free_course_requests_table' => 'free_course_requests_table',
    'default' => 0,
    'free_course_requests_user' => 0,
  );
  $translatables['ulf_free_course_requests_daycare'] = array(
    t('Master'),
    t('Alle ansøgninger'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('field_rfcd_school_target_id'),
    t('User entity referenced from field_rfcd_provider'),
    t('Content entity referenced from field_rfcd_course'),
    t('forfatter'),
    t('- Choose an operation -'),
    t('Delete Submissions'),
    t('Vis'),
    t('Redigér'),
    t('Slet'),
    t('Form Type'),
    t('Date submitted'),
    t('Dato ændret'),
    t('Søg på skole, person, forløb, udbyder eller id'),
    t('Status'),
    t('Afviklingsdato fra'),
    t('Afviklingsdato (field_rfcd_date)'),
    t('Afviklingsdato til'),
    t('All applications'),
    t('more'),
    t('ID'),
    t('.'),
    t('Institution'),
    t('Gruppe'),
    t('Navn'),
    t('Udbyder navn'),
    t('Udbyder'),
    t('[field_rfcd_provider_name] <i>(slettet)</i>'),
    t('Forløbets navn'),
    t('Forløb'),
    t('[field_rfcd_new_course_name] '),
    t('Emneområde'),
    t('Afviklingsdato'),
    t('Skoleår'),
    t('Ansøgt beløb'),
    t('Bevilget beløb'),
    t('Forbrugt beløb'),
    t('Bilag'),
    t('<a href="[field_rfcd_attachment]" target="_blank">Bilag</a>'),
    t('Udbetalingsdato'),
    t('Bemærkninger'),
    t('Senest ændret af'),
    t('Sendte mails'),
    t('Skole'),
    t('Title'),
    t('Forløb findes ikke på listen'),
    t('Søg på inst, grup, pers, forløb, udbyd eller id'),
    t('User applications'),
    t('Skolens ansøgninger'),
    t('CVR'),
    t('Handlinger'),
    t('Rediger'),
    t('Søg på person, forløb, udbyder eller id'),
    t('Semester'),
    t('Data export'),
    t('Mailadresse'),
    t('Telefonnr'),
    t('Indsendelsesdato'),
  );
  $export['ulf_free_course_requests_daycare'] = $view;

  $view = new view();
  $view->name = 'ulf_free_course_requests_daycare_dropdown_content';
  $view->description = 'Holds dropdown lists with content for free course request form';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ulf free course requests daycare dropdown content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'course' => 'course',
  );
  /* Filter criterion: Content: Overordnet målgruppe (field_target_group) */
  $handler->display->display_options['filters']['field_target_group_tid']['id'] = 'field_target_group_tid';
  $handler->display->display_options['filters']['field_target_group_tid']['table'] = 'field_data_field_target_group';
  $handler->display->display_options['filters']['field_target_group_tid']['field'] = 'field_target_group_tid';
  $handler->display->display_options['filters']['field_target_group_tid']['value'] = array(
    147 => '147',
  );
  $handler->display->display_options['filters']['field_target_group_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_target_group_tid']['vocabulary'] = 'target_group';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['ulf_free_course_requests_daycare_dropdown_content'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Entity Reference'),
    t('more'),
  );
  $export['ulf_free_course_requests_daycare_dropdown_content'] = $view;

  $view = new view();
  $view->name = 'ulf_free_course_requests_daycare_dropdowns_user';
  $view->description = 'Holds dropdown lists with users for free course request form';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Ulf free course requests daycare dropdowns user';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Navn */
  $handler->display->display_options['fields']['field_profile_name']['id'] = 'field_profile_name';
  $handler->display->display_options['fields']['field_profile_name']['table'] = 'field_data_field_profile_name';
  $handler->display->display_options['fields']['field_profile_name']['field'] = 'field_profile_name';
  $handler->display->display_options['fields']['field_profile_name']['label'] = '';
  $handler->display->display_options['fields']['field_profile_name']['element_label_colon'] = FALSE;
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filter criterion: User: Active status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    18 => '18',
  );

  /* Display: Schools */
  $handler = $view->new_display('entityreference', 'Schools', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'List of users with skole role';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_profile_name' => 'field_profile_name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    30 => '30',
  );

  /* Display: Course providers */
  $handler = $view->new_display('entityreference', 'Course providers', 'entityreference_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'List of users with course provider role';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_profile_name' => 'field_profile_name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    18 => '18',
  );
  $translatables['ulf_free_course_requests_daycare_dropdowns_user'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Schools'),
    t('List of users with skole role'),
    t('more'),
    t('Course providers'),
    t('List of users with course provider role'),
  );
  $export['ulf_free_course_requests_daycare_dropdowns_user'] = $view;

  return $export;
}
