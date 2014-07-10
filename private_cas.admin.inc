<?php

/**
 * @file
 * pp_core.admin.inc
 */

function private_cas_general_settings($form, &$form_state) {
  
  $form['private_cas'] = array(
    '#type' => 'fieldset',
    '#title' => t('Authorization'),
    '#description' => 'Configure access authorization.'
  );
  $form['private_cas']['private_cas_group_authorization'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable authorization by CAS groups'),
    '#default_value' => variable_get('private_cas_group_authorization', 1),
    '#description' => t('Access to protected content will be granted if the user belongs to the appropriate CAS groups. Authorized groups can set by node.'),
  );

  return system_settings_form($form);
}
