<?php
/**
 * @file
 * bcl_hybridauth.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bcl_hybridauth_user_default_permissions() {
  $permissions = array();

  // Exported permission: use hybridauth.
  $permissions['use hybridauth'] = array(
    'name' => 'use hybridauth',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'hybridauth',
  );

  return $permissions;
}
