<?php
/**
 * @file
 * All Theme functions.
 */
/**
 * Implements hook_theme().
 */
function synergy_subtheme_theme($existing, $type, $theme, $path) {
  $items = array();

  $items['user_login'] = array(
    'render element' => 'form',
    'path' => drupal_get_path('theme', 'synergy_subtheme') . '/templates/user',
    'template' => 'user-login',
  );

  return $items;
}
