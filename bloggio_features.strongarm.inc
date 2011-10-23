<?php
/**
 * @file
 * bloggio_features.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function bloggio_features_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_blog_node_hide_author';
  $strongarm->value = 1;
  $export['simplify_blog_node_hide_author'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_blog_node_hide_comment_settings';
  $strongarm->value = 1;
  $export['simplify_blog_node_hide_comment_settings'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_blog_node_hide_filter';
  $strongarm->value = 1;
  $export['simplify_blog_node_hide_filter'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_blog_node_hide_menu';
  $strongarm->value = 1;
  $export['simplify_blog_node_hide_menu'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_blog_node_hide_options';
  $strongarm->value = 1;
  $export['simplify_blog_node_hide_options'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_blog_node_hide_path';
  $strongarm->value = 1;
  $export['simplify_blog_node_hide_path'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_blog_node_hide_revision_information';
  $strongarm->value = 1;
  $export['simplify_blog_node_hide_revision_information'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_node_hide_author';
  $strongarm->value = 1;
  $export['simplify_node_hide_author'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_node_hide_comment_settings';
  $strongarm->value = 1;
  $export['simplify_node_hide_comment_settings'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_node_hide_filter';
  $strongarm->value = 1;
  $export['simplify_node_hide_filter'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_node_hide_menu';
  $strongarm->value = 1;
  $export['simplify_node_hide_menu'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_node_hide_options';
  $strongarm->value = 1;
  $export['simplify_node_hide_options'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_node_hide_path';
  $strongarm->value = 1;
  $export['simplify_node_hide_path'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplify_node_hide_revision_information';
  $strongarm->value = 1;
  $export['simplify_node_hide_revision_information'] = $strongarm;

  return $export;
}
