<?php
/**
 * @file
 * Actions setup for the Ulf free course request feature.
 */

/**
 * Add actions to Views bulk operations.
 *
 * Implements hook_action_info().
 */
function ulf_free_course_request_daycare_action_info() {
  $actions = array();

  $actions['_rfcd_change_status_accepted'] = array(
    'type' => 'entityform',
    'label' => t('Change status to accepted (No mail)'),
    'configurable' => FALSE,
    'triggers' => array('any'),
    'behavior' => array('changes_property'),
    'vbo_configurable' => FALSE,
    'pass rows' => TRUE,
  );

  $actions['_rfcd_change_status_refused'] = array(
    'type' => 'entityform',
    'label' => t('Change status to refused (No mail)'),
    'configurable' => FALSE,
    'triggers' => array('any'),
    'behavior' => array('changes_property'),
    'vbo_configurable' => FALSE,
    'pass rows' => TRUE,
  );

  $actions['_rfcd_accept'] = array(
    'type' => 'entityform',
    'label' => t('Accept (With mail)'),
    'configurable' => FALSE,
    'triggers' => array('any'),
    'behavior' => array('changes_property'),
    'vbo_configurable' => FALSE,
    'pass rows' => TRUE,
  );

  $actions['_rfcd_refuse'] = array(
    'type' => 'entityform',
    'label' => t('Refuse (With mail)'),
    'configurable' => FALSE,
    'triggers' => array('any'),
    'behavior' => array('changes_property'),
    'vbo_configurable' => FALSE,
    'pass rows' => TRUE,
  );

  $actions['_rfcd_cancelled'] = array(
    'type' => 'entityform',
    'label' => t('Change status to cancelled'),
    'configurable' => FALSE,
    'triggers' => array('any'),
    'behavior' => array('changes_property'),
    'vbo_configurable' => FALSE,
    'pass rows' => TRUE,
  );

  $actions['_rfcd_ready_for_payment'] = array(
    'type' => 'entityform',
    'label' => t('Change status to Ready for Payment'),
    'configurable' => FALSE,
    'triggers' => array('any'),
    'behavior' => array('changes_property'),
    'vbo_configurable' => FALSE,
    'pass rows' => TRUE,
  );

  $actions['_rfcd_payment_completed'] = array(
    'type' => 'entityform',
    'label' => t('Change status to Payment Completed'),
    'configurable' => FALSE,
    'triggers' => array('any'),
    'behavior' => array('changes_property'),
    'vbo_configurable' => FALSE,
    'pass rows' => TRUE,
  );

  $actions['_rfcd_close'] = array(
    'type' => 'entityform',
    'label' => t('Close'),
    'configurable' => FALSE,
    'triggers' => array('any'),
    'behavior' => array('changes_property'),
    'vbo_configurable' => FALSE,
    'pass rows' => TRUE,
  );


  return $actions;
}

/**
 * Custom action for bulk operation. (Accepted)
 *
 * @param object $entity
 *   The entity to act on.
 */
function _rfcd_change_status_accepted($entity) {
  _rfcd_change_entity($entity, 'accepted');
}

/**
 * Custom action for bulk operation. (Accepted and send mail)
 *
 * @param object $entity
 *   The entity to act on.
 */
function _rfcd_accept($entity) {
  _rfcd_change_entity($entity, 'accepted_mail');
}

/**
 * Custom action for bulk operation. (Refused)
 *
 * @param object $entity
 *   The entity to act on.
 */
function _rfcd_change_status_refused($entity) {
  _rfcd_change_entity($entity, 'refused');
}

/**
 * Custom action for bulk operation. (Refused and send mail)
 *
 * @param object $entity
 *   The entity to act on.
 */
function _rfcd_refuse($entity) {
  _rfcd_change_entity($entity, 'refused_mail');
}

/**
 * Custom action for bulk operation. (Change status to ready for payment)
 *
 * @param object $entity
 *   The entity to act on.
 */
function _rfcd_ready_for_payment($entity) {
  _rfcd_change_entity($entity, 'ready_for_payment');
}

/**
 * Custom action for bulk operation. (Change status to payment completed)
 *
 * @param object $entity
 *   The entity to act on.
 */
function _rfcd_payment_completed($entity) {
  _rfcd_change_entity($entity, 'payment_completed');
}

/**
 * Custom action for bulk operation. (Change status to payment cancelled)
 *
 * @param object $entity
 *   The entity to act on.
 */
function _rfcd_cancelled($entity) {
  _rfcd_change_entity($entity, 'cancelled');
}

/**
 * Custom action for bulk operation. (Close)
 *
 * @param object $entity
 *   The entity to act on.
 */
function _rfcd_close($entity) {
  _rfcd_change_entity($entity, 'closed');
}

/**
 * Set status and send mail based on action selected.
 *
 * @param object $entity
 *   The entity to change.
 * @param string $action
 *   The action to take on the entity.
 */
function _rfcd_change_entity($entity, $action) {
  $wrapper = entity_metadata_wrapper('entityform', $entity);
  switch ($action) {
    case 'accepted':
      if (!empty($wrapper->field_rfcd_granted_amount->value())) {
        $wrapper->field_rfcd_status = 'accepted';
        $wrapper->save();
      }
      else {
        drupal_set_message(t('The application with id: @id was not accepted due to missing granted amount.', array(
          '@id' => $wrapper->getIdentifier(),
        )), 'warning');
      }
      break;

    case 'accepted_mail':
      if (!empty($wrapper->field_rfcd_granted_amount->value())) {
        $wrapper->field_rfcd_status = 'accepted';
        $wrapper->save();
        _rfcd_notify($wrapper, 'on_change_accepted');
      }
      else {
        drupal_set_message(t('The application with id: @id was not accepted due to missing granted amount.', array(
          '@id' => $wrapper->getIdentifier(),
        )), 'warning');
      }
      break;

    case 'refused':
      $wrapper->field_rfcd_status = 'refused';
      $wrapper->save();
      break;

    case 'refused_mail':
      $wrapper->field_rfcd_status = 'refused';
      $wrapper->save();
      _rfcd_notify($wrapper, 'on_change_refused');
      break;

    case 'ready_for_payment':
      $wrapper->field_rfcd_status = 'ready_for_payment';
      $wrapper->save();
      break;

    case 'payment_completed':
      $wrapper->field_rfcd_status = 'payment_completed';
      $wrapper->field_rfcd_payment_date = time();
      $wrapper->save();
      break;

    case 'cancelled':
      $wrapper->field_rfcd_status = 'cancelled';
      $wrapper->save();
      break;

    case 'closed':
      $wrapper->field_rfcd_status = 'closed';
      $wrapper->save();
      break;
  }
}
