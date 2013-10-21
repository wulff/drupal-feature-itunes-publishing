<?php
/**
 * @file
 * itunes_publishing.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function itunes_publishing_taxonomy_default_vocabularies() {
  return array(
    'itunes_channel' => array(
      'name' => 'iTunes Channel',
      'machine_name' => 'itunes_channel',
      'description' => 'Add a channel to you podcast empire!',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'itunes_keywords' => array(
      'name' => 'iTunes Keywords',
      'machine_name' => 'itunes_keywords',
      'description' => 'Add keywords to your podcast episodes.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
