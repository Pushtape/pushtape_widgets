<?php
/**
 * @file
 * pushtape_widgets.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pushtape_widgets_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
