<?php
/**
 * @file
 * olms_features.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function olms_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create book content'.
  $permissions['create book content'] = array(
    'name' => 'create book content',
    'roles' => array(
      'librarian' => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any book content'.
  $permissions['delete any book content'] = array(
    'name' => 'delete any book content',
    'roles' => array(
      'librarian' => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own book content'.
  $permissions['delete own book content'] = array(
    'name' => 'delete own book content',
    'roles' => array(
      'librarian' => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any book content'.
  $permissions['edit any book content'] = array(
    'name' => 'edit any book content',
    'roles' => array(
      'librarian' => 'librarian',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own book content'.
  $permissions['edit own book content'] = array(
    'name' => 'edit own book content',
    'roles' => array(
      'librarian' => 'librarian',
    ),
    'module' => 'node',
  );

  return $permissions;
}
