<?php
/**
 * @file
 * olms_features.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function olms_features_user_default_roles() {
  $roles = array();

  // Exported role: Member.
  $roles['Member'] = array(
    'name' => 'Member',
    'weight' => 3,
  );

  // Exported role: librarian.
  $roles['librarian'] = array(
    'name' => 'librarian',
    'weight' => 2,
  );

  return $roles;
}
