<?php
/**
 * @file
 * bloggio_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function bloggio_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: shortcut-set-1:admin/content
  $menu_links['shortcut-set-1:admin/content'] = array(
    'menu_name' => 'shortcut-set-1',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Find content',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: shortcut-set-1:admin/content/comment
  $menu_links['shortcut-set-1:admin/content/comment'] = array(
    'menu_name' => 'shortcut-set-1',
    'link_path' => 'admin/content/comment',
    'router_path' => 'admin/content/comment',
    'link_title' => 'Manage Comments',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: shortcut-set-1:admin/content/comment/approval
  $menu_links['shortcut-set-1:admin/content/comment/approval'] = array(
    'menu_name' => 'shortcut-set-1',
    'link_path' => 'admin/content/comment/approval',
    'router_path' => 'admin/content/comment/approval',
    'link_title' => 'Unapproved comments',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: shortcut-set-1:admin/content/media
  $menu_links['shortcut-set-1:admin/content/media'] = array(
    'menu_name' => 'shortcut-set-1',
    'link_path' => 'admin/content/media',
    'router_path' => 'admin/content/media',
    'link_title' => 'Manage Media',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: shortcut-set-1:node/add
  $menu_links['shortcut-set-1:node/add'] = array(
    'menu_name' => 'shortcut-set-1',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add content');
  t('Find content');
  t('Manage Comments');
  t('Manage Media');
  t('Unapproved comments');


  return $menu_links;
}
