<?php
/**
 * @file
 * synergy_mailsystem.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function synergy_mailsystem_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer mailsystem'.
  $permissions['administer mailsystem'] = array(
    'name' => 'administer mailsystem',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailsystem',
  );

  // Exported permission: 'administer mandrill'.
  $permissions['administer mandrill'] = array(
    'name' => 'administer mandrill',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mandrill',
  );

  return $permissions;
}
