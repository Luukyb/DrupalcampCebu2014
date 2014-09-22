<?php
/**
 * @file
 * config_opengraph_meta.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function config_opengraph_meta_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'opengraph_meta_fallback_img';
  $strongarm->value = 'sites/all/themes/drupalcampcebu2014/public/images/logo.png';
  $export['opengraph_meta_fallback_img'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'opengraph_meta_optional_tags';
  $strongarm->value = array(
    'latitude' => '',
    'longitude' => '',
    'street-address' => '',
    'locality' => '',
    'region' => '',
    'postal-code' => '',
    'country-name' => '',
    'email' => '',
    'phone_number' => '',
    'fax_number' => '',
  );
  $export['opengraph_meta_optional_tags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'opengraph_meta_site_name';
  $strongarm->value = 'DrupalcampCebu';
  $export['opengraph_meta_site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'opengraph_meta_types_enabled';
  $strongarm->value = array(
    'page' => 'page',
    'session' => 0,
    'sponsor' => 0,
    'webform' => 0,
  );
  $export['opengraph_meta_types_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'opengraph_meta_type_page';
  $strongarm->value = '';
  $export['opengraph_meta_type_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'opengraph_meta_type_session';
  $strongarm->value = '';
  $export['opengraph_meta_type_session'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'opengraph_meta_type_sponsor';
  $strongarm->value = '';
  $export['opengraph_meta_type_sponsor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'opengraph_meta_type_webform';
  $strongarm->value = '';
  $export['opengraph_meta_type_webform'] = $strongarm;

  return $export;
}
