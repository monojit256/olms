<?php
/**
 * @file
 * olms_features.features.inc
 */

/**
 * Implements hook_node_info().
 */
function olms_features_node_info() {
  $items = array(
    'book' => array(
      'name' => t('Book'),
      'base' => 'node_content',
      'description' => t('This Is Book Type Contant'),
      'has_title' => '1',
      'title_label' => t('Book Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
