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
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_book-issue:node/add/book-issue
  $menu_links['main-menu_book-issue:node/add/book-issue'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/book-issue',
    'router_path' => 'node/add/book-issue',
    'link_title' => 'Book Issue',
    'options' => array(
      'attributes' => array(
        'title' => 'Issued Books for library',
      ),
      'identifier' => 'main-menu_book-issue:node/add/book-issue',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_issued-books:issued-books
  $menu_links['main-menu_issued-books:issued-books'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'issued-books',
    'router_path' => 'issued-books',
    'link_title' => 'Issued Books',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_issued-books:issued-books',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_reports:reports',
  );
  // Exported menu link: main-menu_reports:reports
  $menu_links['main-menu_reports:reports'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'reports',
    'router_path' => 'reports',
    'link_title' => 'Reports',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_reports:reports',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Book Display');
  t('Book Issue');
  t('Issued Books');
  t('Reports');


  return $menu_links;
}
