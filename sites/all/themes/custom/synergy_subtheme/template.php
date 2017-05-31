<?php

/**
 * @file
 *
 * Contains the theme's functions to manipulate Drupal's default markup.
 */

// Separating files makes readability better.
$path_to_synergy_subtheme = drupal_get_path('theme', 'synergy_subtheme');

include_once $path_to_synergy_subtheme . '/inc/alter.inc';
include_once $path_to_synergy_subtheme . '/inc/theme.inc';