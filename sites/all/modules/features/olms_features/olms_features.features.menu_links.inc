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
    'weight' => -48,
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
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_book-master:book-master
  $menu_links['main-menu_book-master:book-master'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'book-master',
    'router_path' => 'book-master',
    'link_title' => 'Book Master',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_book-master:book-master',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_issued-books:issued-books
  $menu_links['main-menu_issued-books:issued-books'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'issued-books',
    'router_path' => 'issued-books',
    'link_title' => 'Issued Books',
    'options' => array(
      'identifier' => 'main-menu_issued-books:issued-books',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-master-menu_add-new-book:http://localhost/olms/node/add/book
  $menu_links['menu-master-menu_add-new-book:http://localhost/olms/node/add/book'] = array(
    'menu_name' => 'menu-master-menu',
    'link_path' => 'http://localhost/olms/node/add/book',
    'router_path' => '',
    'link_title' => 'Add New Book',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-master-menu_add-new-book:http://localhost/olms/node/add/book',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-master-menu_add-new-category:admin/structure/taxonomy/category/add
  $menu_links['menu-master-menu_add-new-category:admin/structure/taxonomy/category/add'] = array(
    'menu_name' => 'menu-master-menu',
    'link_path' => 'admin/structure/taxonomy/category/add',
    'router_path' => 'admin/structure/taxonomy/%/add',
    'link_title' => 'Add New Category',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-master-menu_add-new-category:admin/structure/taxonomy/category/add',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-master-menu_maintain-books:book-display
  $menu_links['menu-master-menu_maintain-books:book-display'] = array(
    'menu_name' => 'menu-master-menu',
    'link_path' => 'book-display',
    'router_path' => 'book-display',
    'link_title' => 'Maintain Books',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-master-menu_maintain-books:book-display',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-master-menu_maintain-category:category-display
  $menu_links['menu-master-menu_maintain-category:category-display'] = array(
    'menu_name' => 'menu-master-menu',
    'link_path' => 'category-display',
    'router_path' => 'category-display',
    'link_title' => 'Maintain Category',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-master-menu_maintain-category:category-display',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-reports_issued-books:issued-books
  $menu_links['menu-reports_issued-books:issued-books'] = array(
    'menu_name' => 'menu-reports',
    'link_path' => 'issued-books',
    'router_path' => 'issued-books',
    'link_title' => 'Issued Books',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-reports_issued-books:issued-books',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add New Book');
  t('Add New Category');
  t('Book Display');
  t('Book Issue');
  t('Book Master');
  t('Issued Books');
  t('Maintain Books');
  t('Maintain Category');


  return $menu_links;
}
