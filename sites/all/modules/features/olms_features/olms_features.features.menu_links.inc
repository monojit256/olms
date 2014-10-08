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
  // Exported menu link: main-menu_my-account:myaccount
  $menu_links['main-menu_my-account:myaccount'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'myaccount',
    'router_path' => 'myaccount',
    'link_title' => 'My Account',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_my-account:myaccount',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_return-books-details:return-books-details
  $menu_links['main-menu_return-books-details:return-books-details'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'return-books-details',
    'router_path' => 'return-books-details',
    'link_title' => 'Return Books Details',
    'options' => array(
      'identifier' => 'main-menu_return-books-details:return-books-details',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
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
  // Exported menu link: menu-reports_book-inventory:book-inventory
  $menu_links['menu-reports_book-inventory:book-inventory'] = array(
    'menu_name' => 'menu-reports',
    'link_path' => 'book-inventory',
    'router_path' => 'book-inventory',
    'link_title' => 'Book Inventory',
    'options' => array(
      'identifier' => 'menu-reports_book-inventory:book-inventory',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-reports_book-transaction:book-transaction
  $menu_links['menu-reports_book-transaction:book-transaction'] = array(
    'menu_name' => 'menu-reports',
    'link_path' => 'book-transaction',
    'router_path' => 'book-transaction',
    'link_title' => 'Book Transaction',
    'options' => array(
      'identifier' => 'menu-reports_book-transaction:book-transaction',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
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
  // Exported menu link: menu-reports_pending-book-details:pending-book-details
  $menu_links['menu-reports_pending-book-details:pending-book-details'] = array(
    'menu_name' => 'menu-reports',
    'link_path' => 'pending-book-details',
    'router_path' => 'pending-book-details',
    'link_title' => 'Pending Book Details',
    'options' => array(
      'identifier' => 'menu-reports_pending-book-details:pending-book-details',
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
  t('Add New Book');
  t('Add New Category');
  t('Book Display');
  t('Book Inventory');
  t('Book Issue');
  t('Book Master');
  t('Book Transaction');
  t('Issued Books');
  t('Maintain Books');
  t('Maintain Category');
  t('My Account');
  t('Pending Book Details');
  t('Return Books Details');


  return $menu_links;
}
