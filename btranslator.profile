<?php
/**
 * @file
 * Installation steps for the profile Btranslator.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
function btranslator_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = 'Btranslator';
}

/**
 * Implements hook_install_tasks().
 */
function btranslator_install_tasks($install_state) {
  // Add our custom CSS file for the installation process
  drupal_add_css(drupal_get_path('profile', 'btranslator') . '/btranslator.css');

  require_once(drupal_get_path('module', 'phpmailer') . '/phpmailer.admin.inc');

  $tasks = array(
    'btranslator_mail_config' => array(
      'display_name' => st('Mail Settings'),
      'type' => 'form',
      'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
      'function' => 'phpmailer_settings_form',
    ),
    /*
    'btranslator_config' => array(
      'display_name' => st('Btranslator Settings'),
      'type' => 'form',
      'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
      'function' => 'btranslator_config',
    ),
    */
  );

  return $tasks;
}


/**
 * General configuration settings for Btranslator.
 *
 * @return
 *   An array containing form items to place on the module settings page.
 */
function btranslator_config() {

  $form['config'] = array(
    '#type'  => 'fieldset',
    '#title' => t('Btranslator configuration options'),
  );

  // . . . . .

  return system_settings_form($form);
}
