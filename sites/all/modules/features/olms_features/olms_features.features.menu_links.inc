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

  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_issue-books:node/add/book-issue
  $menu_links['main-menu_issue-books:node/add/book-issue'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/book-issue',
    'router_path' => 'node/add/book-issue',
    'link_title' => 'Issue Books',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_issue-books:node/add/book-issue',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-master-menu_add-new-book:node/add/book
  $menu_links['menu-master-menu_add-new-book:node/add/book'] = array(
    'menu_name' => 'menu-master-menu',
    'link_path' => 'node/add/book',
    'router_path' => 'node/add/book',
    'link_title' => 'Add New Book',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-master-menu_add-new-book:node/add/book',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
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
      'alter' => TRUE,
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
  t('Home');
  t('Issue Books');


  return $menu_links;
}
