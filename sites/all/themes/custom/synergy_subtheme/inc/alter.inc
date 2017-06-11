<?php
/**
 * @file
 * All Alter functions for templates and theme functions.
 */

/**
 * Implements hook_form_user_login_alter().
 */
function synergy_subtheme_form_user_login_alter(&$form, &$form_state, $form_id) {
  $form['links']['reset_password'] = array(
    '#markup' => l(t('Forgotten password?'), 'user/password', array('attributes' => array('title' => t('Request new password.'))))
  );
  $form['links']['register'] = array(
    '#markup' => l(t('Create new user'), 'user/register', array('attributes' => array('title' => t('Request new password.'))))
  );
}

/**
 * Implements hook_form_user_login_alter().
 */
function synergy_subtheme_form_user_pass_alter(&$form, &$form_state, $form_id) {
  $form['actions']['cancel'] = array(
    '#markup' => '<div class="cancel-button-wrapper">' . l(t('Cancel'), '/', array('attributes' => array('title' => t('Cancel'), 'class' => array('cancel-button')))) . '</div>',
  );
}

/**
 * Implements hook_form_user_login_alter().
 */
function synergy_subtheme_form_user_register_form_alter(&$form, &$form_state, $form_id) {
  $form['actions']['cancel'] = array(
    '#markup' => '<div class="cancel-button-wrapper">' . l(t('Cancel'), '/', array('attributes' => array('title' => t('Cancel'), 'class' => array('cancel-button')))) . '</div>',
  );
}
