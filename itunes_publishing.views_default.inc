<?php
/**
 * @file
 * itunes_publishing.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function itunes_publishing_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'itunes_channels';
  $view->description = 'Lists all available channels';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'iTunes Channels';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Podcast channels';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'field_itunes_cover' => 'field_itunes_cover',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_itunes_cover' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: File Usage: File */
  $handler->display->display_options['relationships']['taxonomy_term_to_file']['id'] = 'taxonomy_term_to_file';
  $handler->display->display_options['relationships']['taxonomy_term_to_file']['table'] = 'file_usage';
  $handler->display->display_options['relationships']['taxonomy_term_to_file']['field'] = 'taxonomy_term_to_file';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Channel';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name]<br />Term ID: [tid]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Cover */
  $handler->display->display_options['fields']['field_itunes_cover_1']['id'] = 'field_itunes_cover_1';
  $handler->display->display_options['fields']['field_itunes_cover_1']['table'] = 'field_data_field_itunes_cover';
  $handler->display->display_options['fields']['field_itunes_cover_1']['field'] = 'field_itunes_cover';
  $handler->display->display_options['fields']['field_itunes_cover_1']['label'] = 'Paths';
  $handler->display->display_options['fields']['field_itunes_cover_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_itunes_cover_1']['type'] = 'itunes_publishing_image_url';
  $handler->display->display_options['fields']['field_itunes_cover_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Cover */
  $handler->display->display_options['fields']['field_itunes_cover']['id'] = 'field_itunes_cover';
  $handler->display->display_options['fields']['field_itunes_cover']['table'] = 'field_data_field_itunes_cover';
  $handler->display->display_options['fields']['field_itunes_cover']['field'] = 'field_itunes_cover';
  $handler->display->display_options['fields']['field_itunes_cover']['label'] = '';
  $handler->display->display_options['fields']['field_itunes_cover']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_itunes_cover']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_itunes_cover']['settings'] = array(
    'image_style' => 'itunes_thumbnail',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Cover */
  $handler->display->display_options['fields']['field_itunes_cover_2']['id'] = 'field_itunes_cover_2';
  $handler->display->display_options['fields']['field_itunes_cover_2']['table'] = 'field_data_field_itunes_cover';
  $handler->display->display_options['fields']['field_itunes_cover_2']['field'] = 'field_itunes_cover';
  $handler->display->display_options['fields']['field_itunes_cover_2']['label'] = '';
  $handler->display->display_options['fields']['field_itunes_cover_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_itunes_cover_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_itunes_cover_2']['settings'] = array(
    'image_style' => 'itunes_cover',
    'image_link' => '',
  );
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'itunes_channel' => 'itunes_channel',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/itunes-channels';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Podcast channels';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['itunes_channels'] = $view;

  $view = new view();
  $view->name = 'itunes_feed_default';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'iTunes Feed: Default';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'Author';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_itunes_description']['id'] = 'field_itunes_description';
  $handler->display->display_options['fields']['field_itunes_description']['table'] = 'field_data_field_itunes_description';
  $handler->display->display_options['fields']['field_itunes_description']['field'] = 'field_itunes_description';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'uid';
  $handler->display->display_options['fields']['mail']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  $handler->display->display_options['fields']['mail']['rss_format'] = 'with_name';
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['type'] = 'rss_category';
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'itunes_keywords' => 'itunes_keywords',
    'views_rss_itunes_category' => 0,
    'itunes_feed' => 0,
    'itunes_channel' => 0,
    'itunes_tags' => 0,
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'r';
  /* Field: Content: Subtitle */
  $handler->display->display_options['fields']['field_itunes_subtitle']['id'] = 'field_itunes_subtitle';
  $handler->display->display_options['fields']['field_itunes_subtitle']['table'] = 'field_data_field_itunes_subtitle';
  $handler->display->display_options['fields']['field_itunes_subtitle']['field'] = 'field_itunes_subtitle';
  $handler->display->display_options['fields']['field_itunes_subtitle']['alter']['strip_tags'] = TRUE;
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_itunes_summary']['id'] = 'field_itunes_summary';
  $handler->display->display_options['fields']['field_itunes_summary']['table'] = 'field_data_field_itunes_summary';
  $handler->display->display_options['fields']['field_itunes_summary']['field'] = 'field_itunes_summary';
  $handler->display->display_options['fields']['field_itunes_summary']['alter']['strip_tags'] = TRUE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid_1']['id'] = 'term_node_tid_1';
  $handler->display->display_options['fields']['term_node_tid_1']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid_1']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid_1']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid_1']['vocabularies'] = array(
    'views_rss_itunes_category' => 0,
    'itunes_feed' => 0,
    'itunes_channel' => 0,
    'itunes_keywords' => 0,
    'itunes_tags' => 0,
  );
  /* Field: Content: Artwork */
  $handler->display->display_options['fields']['field_itunes_artwork']['id'] = 'field_itunes_artwork';
  $handler->display->display_options['fields']['field_itunes_artwork']['table'] = 'field_data_field_itunes_artwork';
  $handler->display->display_options['fields']['field_itunes_artwork']['field'] = 'field_itunes_artwork';
  $handler->display->display_options['fields']['field_itunes_artwork']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_itunes_artwork']['type'] = 'itunes:image';
  $handler->display->display_options['fields']['field_itunes_artwork']['settings'] = array(
    'image_style' => '',
  );
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_itunes_audio']['id'] = 'field_itunes_audio';
  $handler->display->display_options['fields']['field_itunes_audio']['table'] = 'field_data_field_itunes_audio';
  $handler->display->display_options['fields']['field_itunes_audio']['field'] = 'field_itunes_audio';
  $handler->display->display_options['fields']['field_itunes_audio']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_itunes_audio']['type'] = 'enclosure';
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_itunes_audio_1']['id'] = 'field_itunes_audio_1';
  $handler->display->display_options['fields']['field_itunes_audio_1']['table'] = 'field_data_field_itunes_audio';
  $handler->display->display_options['fields']['field_itunes_audio_1']['field'] = 'field_itunes_audio';
  $handler->display->display_options['fields']['field_itunes_audio_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_itunes_audio_1']['type'] = 'itunes:duration';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'itunes_podcast' => 'itunes_podcast',
  );
  /* Filter criterion: Content: Channel (field_itunes_channel) */
  $handler->display->display_options['filters']['field_itunes_channel_tid']['id'] = 'field_itunes_channel_tid';
  $handler->display->display_options['filters']['field_itunes_channel_tid']['table'] = 'field_data_field_itunes_channel';
  $handler->display->display_options['filters']['field_itunes_channel_tid']['field'] = 'field_itunes_channel_tid';
  $handler->display->display_options['filters']['field_itunes_channel_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_itunes_channel_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_itunes_channel_tid']['vocabulary'] = 'itunes_channel';

  /* Display: iTunes Feed */
  $handler = $view->new_display('feed', 'iTunes Feed', 'itunes_feed');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => 'Feed description. Not displayed in iTunes.',
        'language' => 'en',
        'category' => 'News, Politics',
        'image' => 'sites/all/modules/features/itunes_publishing/cover-thumb.png',
        'copyright' => 'Copyright 2013 Example.com. Not displayed in iTunes.',
        'managingEditor' => 'editor@example.com',
        'webMaster' => 'tech@example.com',
        'generator' => 'Drupal iTunes Publishing',
        'docs' => '',
        'cloud' => '',
        'ttl' => '3600',
        'skipHours' => '',
        'skipDays' => '',
      ),
    ),
    'itunes' => array(
      'views_rss_itunes' => array(
        'subtitle' => 'Short channel description. Displayed in iTunes list view.',
        'summary' => 'Long channel description. Displayed when clicking the "i" link in the iTunes list view.',
        'category' => array(
          9 => '9',
        ),
        'keywords' => 'News, Politics',
        'image' => 'sites/all/modules/features/itunes_publishing/cover.png',
        'author' => 'Channel author. Not displayed in iTunes.',
        'explicit' => 'clean',
        'block' => 'no',
        'complete' => 'no',
        'new-feed-url' => '',
        'owner' => 'jdoe@example.com, John Doe',
      ),
    ),
  );
  $handler->display->display_options['style_options']['item'] = array(
    'core' => array(
      'views_rss_core' => array(
        'title' => 'title',
        'link' => 'path',
        'description' => 'field_itunes_description',
        'author' => 'mail',
        'category' => 'term_node_tid',
        'comments' => '',
        'enclosure' => 'field_itunes_audio',
        'guid' => 'path',
        'pubDate' => 'created',
      ),
    ),
    'itunes' => array(
      'views_rss_itunes' => array(
        'subtitle' => 'field_itunes_subtitle',
        'summary' => 'field_itunes_summary',
        'duration' => 'field_itunes_audio_1',
        'keywords' => 'term_node_tid_1',
        'image' => 'field_itunes_artwork',
        'author' => 'mail',
        'isClosedCaptioned' => '',
        'explicit' => '',
        'block' => '',
        'order' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
  $handler->display->display_options['path'] = 'itunes/feed/default';
  $handler->display->display_options['sitename_title'] = 1;
  $export['itunes_feed_default'] = $view;

  return $export;
}
