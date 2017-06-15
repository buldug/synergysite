<?php
/**
 * @file
 * synergy_mailsystem.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function synergy_mailsystem_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mail_system';
  $strongarm->value = array(
    'default-system' => 'MandrillMailSystem',
    'mandrill_test' => 'MandrillMailSystem',
  );
  $export['mail_system'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'contact@drupalsynergy.org';
  $export['site_mail'] = $strongarm;

  return $export;
}
