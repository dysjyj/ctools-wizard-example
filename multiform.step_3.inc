<?php

/**
 * @file
 *   A form that does nothing
 */

function multiform_step_3_form($form, &$form_state) {
  $form['box_three'] = array(
    '#type' => 'textfield',
    '#title' => t('Box One'),
    '#description' => t('Enter something here'),
    '#default_value' => !empty($form_state['object']->box_three) ? $form_state['object']->box_three : NULL,
    '#markup' => $intro,
  );

  return $form;
}

function multiform_step_2_form_validate($form, &$form_state) {
}

function multiform_step_3_form_submit($form, &$form_state) {
  $form_state['object']->box_three = !empty($form_state['values']['box_three']) ? $form_state['values']['box_three'] : NULL;
}
