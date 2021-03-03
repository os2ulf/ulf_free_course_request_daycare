<?php
/**
 * @file
 * Code for Ulf free course request mail handling.
 */

/**
 * Add the different cases in which to send mail.
 *
 * @param EntityMetadataWrapper $wrapper
 *   The wrapper of an entity.
 * @param string $action
 *   The action related to the mail.
 */
function _rfcd_notify(EntityMetadataWrapper $wrapper, $action) {
  $entity_form_id = $wrapper->entityform_id->value();
  if (empty($entity_form_id)) {
    return;
  }

  global $language;
  // Set fallback email
  $to = variable_get('site_mail');
  $params = array();
  switch ($action) {
    case 'on_submit_user':
      $params['subject'] = t('Financing request received', array(), array('langcode' => $language->language));
      $params['body'] = '<h2>' . t('Financing request received', array(), array('langcode' => $language->language)) . '</h2>';
      $params['body'] .= variable_get('ufcrd_confirmation_email', array(
        'value' => '',
        'format' => NULL,
      ))['value'];
      $params['body'] .= _rfcd_build_mail_confirmation($wrapper);

      // Log what mail was sent.
      $wrapper->field_rfcd_mails_sent[] = t('Financing request received', array(), array('langcode' => $language->language));
      $wrapper->save();
      $to = $wrapper->field_rfcd_mail->value();
      break;

    case 'on_submit_admin':
      $params['subject'] = t('Financing request received', array(), array('langcode' => $language->language));
      $params['body'] = '<h2>' . t('Financing request received', array(), array('langcode' => $language->language)) . '</h2>';
      $params['body'] .= variable_get('ufcrd_notify_admin_email', array(
        'value' => '',
        'format' => NULL,
      ))['value'];
      $params['body'] .= _rfcd_build_mail_confirmation($wrapper);

      $to = variable_get('ufcrd_admin_email');
      break;

    case 'on_change_accepted':
      $params['subject'] = t('Financing request accepted', array(), array('langcode' => $language->language));
      $params['body'] = '<h2>' . t('Financing request accepted', array(), array('langcode' => $language->language)) . '</h2>';
      $params['body'] .= variable_get('ufcrd_request_accepted_email', array(
        'value' => '',
        'format' => NULL,
      ))['value'];
      $params['body'] .= _rfcd_build_mail_followup($wrapper);

      // Log what mail was sent.
      $wrapper->field_rfcd_mails_sent[] = t('Financing request accepted', array(), array('langcode' => $language->language));
      $wrapper->save();
      $to = $wrapper->field_rfcd_mail->value();
      break;

    case 'on_change_refused':
      $params['subject'] = t('Financing request refused', array(), array('langcode' => $language->language));
      $params['body'] = '<h2>' . t('Financing request refused', array(), array('langcode' => $language->language)) . '</h2>';
      $params['body'] .= variable_get('ufcrd_request_refused_email', array(
        'value' => '',
        'format' => NULL,
      ))['value'];
      $params['body'] .= _rfcd_build_mail_followup($wrapper);

      $wrapper->field_rfcd_mails_sent[] = t('Financing request refused', array(), array('langcode' => $language->language));
      $wrapper->save();
      $to = $wrapper->field_rfcd_mail->value();
      break;
  }
  drupal_mail('ulf_free_course_request_daycare', 'rfcd_notification', $to, $language->language, $params);
}

/**
 * Implements hook_mail().
 *
 * Alter mail.
 */
function ulf_free_course_request_daycare_mail($key, &$message, $params) {
  switch ($key) {
    case 'rfcd_notification':
      $message['subject'] = $params['subject'];
      $message['body'] = $params['body'];
      break;
  }
}

/**
 * @file
 *
 * Handle the sending of mails.
 */

/**
 * Create mail template.
 *
 * @param EntityMetadataWrapper $wrapper
 *   The wrapper of an entity.
 *
 * @return string
 *   The values of the submitted form grouped into a string.
 */
function _rfcd_build_mail_confirmation(EntityMetadataWrapper $wrapper) {
  $application = '';
  $entity_form_id = $wrapper->entityform_id->value();
  if (empty($entity_form_id )) {
    return $application;
  }

  global $language;
  $translation_lang = array('langcode' => $language->language);

  // Provider wrapper
  $provider_id = $wrapper->field_rfcd_provider->value();
  $provider_wrapper = entity_metadata_wrapper('user', $provider_id);

  $application .= '<h3>';
  $application .= t('Financing application details', array(), $translation_lang);
  $application .= ':</h3>';

  $application .= '<strong>';
  $application .= t('Id', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->entityform_id->value();
  $application .= '<br/>';

  $application .= '<p>';
  $application .= '<strong>';
  $application .= t('School', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_rfcd_school->value();
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Grade', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_rfcd_grade->value();
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Name', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_rfcd_name->value();
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Phone', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_rfcd_phone->value();
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Email', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_rfcd_mail->value();
  $application .= '</p>';

  $application .= '<p>';
  $application .= '<strong>';
  $application .= t('Provider', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $provider_wrapper->field_profile_name->value();
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Course', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_rfcd_course->label();
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Requested amount', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_rfcd_requested_amount->value() . ' kr.';
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Date', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= date('d/m/Y', $wrapper->field_rfcd_date->value());
  $application .= '</p>';

  return $application;
}

/**
 * Follow up mail template.
 *
 * @param EntityMetadataWrapper $wrapper
 *   The wrapper of an entity.
 *
 * @return string
 *   The values of the submitted form grouped into a string.
 */
function _rfcd_build_mail_followup(EntityMetadataWrapper $wrapper) {
  $application = '';
  $entity_form_id = $wrapper->entityform_id->value();
  if (empty($entity_form_id )) {
    return $application;
  }

  // Status values info.
  $field_status_info = list_allowed_values(field_info_field('field_rfcd_status'));

  global $language;
  $translation_lang = array('langcode' => $language->language);

  // Provider wrapper
  $provider_id = $wrapper->field_rfcd_provider->value();
  $provider_wrapper = entity_metadata_wrapper('user', $provider_id);


  $application .= '<h3>';
  $application .= t('Financing application details', array(), $translation_lang);
  $application .= ':</h3>';

  $application .= '<p>';
  $application .= '<p>---</p>';
  $application .= '<strong>';
  $application .= t('Status', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .=  $field_status_info[$wrapper->field_rfcd_status->value()];
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Granted amount', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_rfcd_granted_amount->value() . ' kr.';
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Remarks', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_rfcd_remarks->value()['value'];
  $application .= '<br/>';
  $application .= '<p>---</p>';
  $application .= '</p>';

  $application .= '<strong>';
  $application .= t('Id', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->entityform_id->value();
  $application .= '<br/>';

  $application .= '<p>';
  $application .= '<strong>';
  $application .= t('School', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_rfcd_school->value();
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Grade', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_rfcd_grade->value();
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Name', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_rfcd_name->value();
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Phone', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_rfcd_phone->value();
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Email', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= _reverseMailEncrypt($wrapper->field_rfcd_mail->value());
  $application .= '</p>';

  $application .= '<p>';
  $application .= '<strong>';
  $application .= t('Provider', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $provider_wrapper->field_profile_name->value();
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Course', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_rfcd_course->label();
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Requested amount', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= $wrapper->field_rfcd_requested_amount->value() . ' kr.';
  $application .= '<br/>';
  $application .= '<strong>';
  $application .= t('Date', array(), $translation_lang);
  $application .= ':</strong> ';
  $application .= date('d/m/Y', $wrapper->field_rfcd_date->value());
  $application .= '</p>';

  return $application;
}
