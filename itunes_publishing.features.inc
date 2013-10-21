<?php
/**
 * @file
 * itunes_publishing.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function itunes_publishing_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function itunes_publishing_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function itunes_publishing_image_default_styles() {
  $styles = array();

  // Exported image style: itunes_cover.
  $styles['itunes_cover'] = array(
    'name' => 'itunes_cover',
    'label' => 'iTunes Cover',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 600,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: itunes_thumbnail.
  $styles['itunes_thumbnail'] = array(
    'name' => 'itunes_thumbnail',
    'label' => 'iTunes Thumbnail',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 144,
          'height' => 144,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function itunes_publishing_node_info() {
  $items = array(
    'itunes_podcast' => array(
      'name' => t('iTunes Podcast'),
      'base' => 'node_content',
      'description' => t('Add a new episode to one of your podcasts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
