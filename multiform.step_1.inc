<?php

/**
 * @file
 *   A form that does nothing
 */

function multiform_step_1_form($form, &$form_state) {
  $form['box_one'] = array(
    '#type' => 'textfield',
    '#title' => t('Box One'),
    '#description' => t('Enter something here'),
    '#default_value' => !empty($form_state['object']->box_one) ? $form_state['object']->box_one : NULL,
    '#markup' => $intro,
  );

  return $form;
}

function multiform_step_2_form_validate($form, &$form_state) {
}

function multiform_step_3_form_submit($form, &$form_state) {
  $form_state['object']->box_one = !empty($form_state['values']['box_one']) ? $form_state['values']['box_one'] : NULL;
}
