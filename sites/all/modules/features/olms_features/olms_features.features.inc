<?php
/**
 * @file
 * olms_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function olms_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function olms_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

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
    'book_issue' => array(
      'name' => t('Book Issue'),
      'base' => 'node_content',
      'description' => t('Issued Books for library'),
      'has_title' => '1',
      'title_label' => t('title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
