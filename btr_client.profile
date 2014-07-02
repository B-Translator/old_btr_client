<?php
/**
 * @file
 * Installation steps for the profile btr_client.
 */

// Use functions from the base profile.
require_once(drupal_get_path('profile', 'openatrium') . '/openatrium.profile');

/**
 * Implements hook_install_tasks_alter()
 */
function btr_client_install_tasks_alter(&$tasks, $install_state) {
  // Call the hook of the base profile.
  openatrium_install_tasks_alter($tasks, $install_state);
}

/**
 * Implements hook_form_FORM_ID_alter()
 */
function btr_client_form_apps_profile_apps_select_form_alter(&$form, $form_state) {
  // Call the hook of the base profile.
  openatrium_form_apps_profile_apps_select_form_alter($form, $form_state);
}

/**
 * Implements hook_form_FORM_ID_alter()
 */
function btr_client_form_panopoly_theme_selection_form_alter(&$form, &$form_state, $form_id) {
  // Call the hook of the base profile.
  openatrium_form_panopoly_theme_selection_form_alter($form, $form_state, $form_id);
}

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
function btr_client_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = 'B-Translator';
}

/**
 * Implements hook_install_tasks().
 */
function btr_client_install_tasks($install_state) {
  // Add our custom CSS file for the installation process
  drupal_add_css(drupal_get_path('profile', 'btr_client') . '/btr_client.css');

  module_load_include('inc', 'phpmailer', 'phpmailer.admin');
  module_load_include('inc', 'btrClient', 'btrClient.admin');
  module_load_include('inc', 'oauth2_login', 'oauth2_login.admin');

  $tasks = array(
    'btr_client_mail_config' => array(
      'display_name' => st('Mail Settings'),
      'type' => 'form',
      'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
      'function' => 'phpmailer_settings_form',
    ),
    'btr_client_config' => array(
      'display_name' => st('B-Translator Settings'),
      'type' => 'form',
      'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
      'function' => 'btrClient_config',
    ),

    // Installation tasks of the base profile (openatrium).
    'open_atrium_features_revert_all' => array('type' => 'normal'),
    'open_atrium_rebuild_search' => array('type' => 'normal'),
  );

  return $tasks;
}

/**
 * Implements hook_menu_alter().
 */
function btr_client_menu_alter(&$items) {
  // Disable registration on the local site.
  unset($items['user/register']);
  //unset($items['user/password']);
}
