<?php

/**
 * @file
 *
 * Code for the backend form.
 */

/**
 * Create custom backend form.
 *
 * @param array $form
 *   Custom backend form.
 * @param array $form_state
 *   Form state of the backend form.
 *
 * @return mixed
 *   The form displayed in the backend.
 */
function ulf_free_course_request_daycare_form_backend(array $form, array &$form_state) {
  $form['groups'] = array(
    '#type' => 'vertical_tabs',
  );

  $form['email_texts'] = array(
    '#type' => 'fieldset',
    '#title' => t('Email texts'),
    '#group' => 'groups',
    '#collapsible' => FALSE,
    '#collapsed' => 0,
  );

  $form['email_texts']['ufcrd_notify_admin_email'] = array(
    '#type' => 'text_format',
    '#title' => t('Notification to adm. function when request is sent'),
    '#default_value' => variable_get('ufcrd_notify_admin_email', array('value' => '', 'format' => NULL))['value'],
    '#format' => 'editor',
    '#weight' => 0,
  );

  $form['email_texts']['ufcrd_confirmation_email'] = array(
    '#type' => 'text_format',
    '#title' => t('Copy of confirmation for user'),
    '#default_value' => variable_get('ufcrd_confirmation_email', array('value' => '', 'format' => NULL))['value'],
    '#format' => 'editor',
    '#weight' => 1,
  );

  $form['email_texts']['ufcrd_request_accepted_email'] = array(
    '#type' => 'text_format',
    '#title' => t('Request accepted'),
    '#default_value' => variable_get('ufcrd_request_accepted_email', array('value' => '', 'format' => NULL))['value'],
    '#format' => 'editor',
    '#weight' => 2,
  );

  $form['email_texts']['ufcrd_request_refused_email'] = array(
    '#type' => 'text_format',
    '#title' => t('Request refused'),
    '#default_value' => variable_get('ufcrd_request_refused_email', array('value' => '', 'format' => NULL))['value'],
    '#format' => 'editor',
    '#weight' => 3,
  );

  $form['frontend_texts'] = array(
    '#type' => 'fieldset',
    '#title' => t('Frontend texts'),
    '#group' => 'groups',
    '#collapsible' => FALSE,
    '#collapsed' => 0,
  );

  $form['frontend_texts']['ufcrd_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title for the form'),
    '#default_value' => variable_get('ufcrd_title'),
    '#description' => t('Sit the title for the form page'),
    '#weight' => 0,
    '#size' => 30,
  );

  $form['frontend_texts']['ufcrd_intro'] = array(
    '#type' => 'text_format',
    '#title' => t('Intro text'),
    '#default_value' => variable_get('ufcrd_intro', array('value' => '', 'format' => NULL))['value'],
    '#format' => 'editor',
    '#weight' => 0,
  );

  $form['frontend_texts']['ufcrd_cancellation'] = array(
    '#type' => 'text_format',
    '#title' => t('Cancellation text'),
    '#default_value' => variable_get('ufcrd_cancellation', array('value' => '', 'format' => NULL))['value'],
    '#format' => 'editor',
    '#weight' => 0,
  );

  $form['frontend_texts']['ufcrd_gdpr'] = array(
    '#type' => 'text_format',
    '#title' => t('GDPR text'),
    '#default_value' => variable_get('ufcrd_gdpr', array('value' => '', 'format' => NULL))['value'],
    '#format' => 'editor',
    '#weight' => 0,
  );

  $form['frontend_texts']['ufcrd_receipt'] = array(
    '#type' => 'text_format',
    '#title' => t('Receipt text'),
    '#default_value' => variable_get('ufcrd_receipt', array('value' => '', 'format' => NULL))['value'],
    '#format' => 'editor',
    '#weight' => 0,
  );

  $form['settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Other settings'),
    '#group' => 'groups',
    '#collapsible' => FALSE,
    '#collapsed' => 0,
  );

  $form['settings']['ufcrd_admin_email'] = array(
    '#type' => 'textfield',
    '#title' => t('Email for Ulf administration'),
    '#default_value' => variable_get('ufcrd_admin_email'),
    '#description' => t('Admin emails related to financing applications will be sent here. This must be an email address within the site domain. I.e info@ulfiaarhus.dk'),
    '#weight' => 1,
    '#size' => 30,
  );

  $form['settings']['dates'] = array(
    '#type' => 'fieldset',
    '#title' => t('Arrangement period'),
    '#description' => t('Set the date range of the arrangement date field in frontend'),
    '#weight' => 2,
  );

  $form['settings']['dates']['ufcrd_from'] = array(
    '#type' => 'date_popup',
    '#title' => t('From'),
    '#default_value' => variable_get('ufcrd_from'),
    '#date_type' => DATE_DATETIME,
    '#date_timezone' => date_default_timezone(),
    '#date_format' => 'd-m-Y',
    '#date_increment' => 1,
    '#date_year_range' => '-3:+3',
  );

  $form['settings']['dates']['ufcrd_to'] = array(
    '#type' => 'date_popup',
    '#title' => t('To'),
    '#default_value' => variable_get('ufcrd_to'),
    '#date_type' => DATE_DATETIME,
    '#date_timezone' => date_default_timezone(),
    '#date_format' => 'd-m-Y',
    '#date_increment' => 1,
    '#date_year_range' => '-3:+3',
  );

  return system_settings_form($form);
}
