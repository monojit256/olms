<?php
/**
 * @file
 * olms_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function olms_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_book-display:book-display
  $menu_links['main-menu_book-display:book-display'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'book-display',
    'router_path' => 'book-display',
    'link_title' => 'Book Display',
    'options' => array(
      'identifier' => 'main-menu_book-display:book-display',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Book Display');


  return $menu_links;
}
