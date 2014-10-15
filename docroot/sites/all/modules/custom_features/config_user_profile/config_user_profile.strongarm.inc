<?php
/**
 * @file
 * config_user_profile.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function config_user_profile_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
<<<<<<< HEAD
  $strongarm->value = '1';
=======
  $strongarm->value = 1;
>>>>>>> 6d7644130f7400111b146624e60793530fbbd389
  $export['user_register'] = $strongarm;

  return $export;
}
