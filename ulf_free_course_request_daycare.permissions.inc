<?php

/**
 * @file
 * Permission settings for the loop_documents module.
 */

/**
 * Implements hook_permissions_secure_permissions_roles().
 */
function ulf_free_course_request_daycare_secure_permissions_roles() {
  return array(
    'skole',
  );
}

/**
 * Implements hook_permissions().
 *
 * Add permission to restrict access to certain admin paths.
 */
function ulf_free_course_request_daycare_permission() {
  $permissions = array(
    'administer ulf free course request daycare settings' => array(
      'title' => t('Administer free course request daycare settings'),
      'description' => t('Administer free course request daycare settings'),
    ),
  );

  return $permissions;
}

/**
 * Implements hook_secure_permissions().
 */
function ulf_free_course_request_daycare_secure_permissions($role) {
  $permissions = array(
    'editor' => array(
      'view any entityform',
      'edit any entityform',
      'delete any entityform',
      'administer ulf free course request daycare settings',
    ),
  );

  return isset($permissions[$role]) ? $permissions[$role] : NULL;
}
