<?php
/**
 * @file
 * synergy_mailsystem.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function synergy_mailsystem_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
