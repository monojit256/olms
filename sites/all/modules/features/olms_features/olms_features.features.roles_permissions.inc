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
    'weight' => 2,
    'permissions' => array(),
  );

  // Exported role: librarian
  $roles['librarian'] = array(
    'name' => 'librarian',
    'weight' => 3,
    'permissions' => array(
      'access user profiles' => TRUE,
      'add terms in category' => TRUE,
      'create book content' => TRUE,
      'create book_issue content' => TRUE,
      'delete any book content' => TRUE,
      'delete any book_issue content' => TRUE,
      'delete own book content' => TRUE,
      'delete own book_issue content' => TRUE,
      'edit any book content' => TRUE,
      'edit any book_issue content' => TRUE,
      'edit own book content' => TRUE,
      'edit own book_issue content' => TRUE,
    ),
  );

  return $roles;
}
