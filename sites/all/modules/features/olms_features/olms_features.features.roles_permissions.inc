<?php
/**
 * @file
 * olms_features.features.roles_permissions.inc
 */

/**
 * Implements hook_default_roles_permissions().
 */
function olms_features_default_roles_permissions() {
  $roles = array();

  // Exported role: Member
  $roles['Member'] = array(
    'name' => 'Member',
    'weight' => 3,
    'permissions' => array(),
  );

  // Exported role: librarian
  $roles['librarian'] = array(
    'name' => 'librarian',
    'weight' => 2,
    'permissions' => array(
      'create book content' => TRUE,
      'delete any book content' => TRUE,
      'delete own book content' => TRUE,
      'edit any book content' => TRUE,
      'edit own book content' => TRUE,
    ),
  );

  return $roles;
}
