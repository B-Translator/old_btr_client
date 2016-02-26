<?php
/**
 * @file
 * Installation steps for the profile btr_client.
 */

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
  module_load_include('inc', 'btrClient', 'callback/admin');
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
    'oauth2_login_settings' => array(
      'display_name' => st('OAuth2 Login Settings'),
      'type' => 'form',
      'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
      'function' => 'oauth2_login_admin_settings',
    ),
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
