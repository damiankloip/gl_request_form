<?php

/**
 * @file
 * gl_request_form admin pages.
 */

/**
 * Admin settings form.
 */
function gl_request_form_admin_form($form, &$form_state) {

  $form['gl_request_form_admin_mail'] = array(
    '#type' => 'textfield',
    '#title' => t('Administator email addresses'),
    '#description' => t('A comma separated list of email addresses to send form submissions to.'),
    '#default_value' => variable_get('gl_request_form_admin_mail', ''),
  );

  $form['gl_request_form_mail_from'] = array(
    '#type' => 'textfield',
    '#title' => t('Email from address'),
    '#description' => t('Defaults to site mail.'),
    '#default_value' => gl_request_form_mail_from(),
  );

  return system_settings_form($form);
}
