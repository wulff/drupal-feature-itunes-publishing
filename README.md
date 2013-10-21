iTunes Publishing
=================


Installation
------------

1. Download and install the latest versions of the required contrib modules:
    * CTools
    * Features
    * GetID3
    * Strongarm
    * Views
    * Views RSS
    * Views RSS iTunes
2. Download this feature and place it in the `sites/all/modules/features`
   directory.
3. Download the latest stable version of the getID3() library from
   http://www.getid3.org/ and put it in the `sites/all/libraries` directory.
   You should delete the `demo` directory which comes with the library.
   The path to getid3.php should be: '.../libraries/getid3/getid3/getid3.php'.
4. Enable the *iTunes Publishing* module.


Getting started
---------------

Before you can start publishing your podcasts, you need to create a new
podcast channel and clone the default view provided by this feature.

First, go to *Administration → Structure → Taxonomy* and add a channel term to
the *iTunes Channel* taxonomy. The name of the channel will only appear on
your site. You can upload a cover image for your channel to make it easier to
configure the feed.

Next, go to *Administration → Structure → Views* and clone the default view
"iTunes Feed: Default" (this view is disable by default). When you have cloned
the view, you should change its title and path, modify the *Content: Channel*
filter settings, and modify the *Format Settings* to fit your new podcast
channel.


Setting up a new channel
------------------------

When you have cloned the default view, you need to modify the following
settings: Title, path, channel ID, and feed settings.

By default, the podcast feed uses the site name to populate the `<title>`
element in the feed. Uncheck *Use the site name for the title* if you want to
provide a unique title for the feed.

Next, you must provide a unique path to your feed. This can be something like
`feeds/itunes/my-podcast`, `itunes/42`, etc.

To make sure the feed only contains items from a specific podcast channel, you
must edit the *Content: Channel* filter criteria, choose *Is one of*, and
select the name of the channel you just created.

The following sections describe which settings you should modify in the various *Format Settings* sections (but first, go to *Administration → Content → Podcast channels* to make sure the various image styles have been created).

### Channel elements: core

* Description: Provide a brief description of the feed. This value is not displayed in iTunes.
* Language: Set the language of your feed.
* Category: Add one or more categories describing the channel. This value is not displayed in iTunes.
* Image: Provide artwork for your feed. You can use the thumbnail path from *Administration → Content → Podcast channels*. This image is not displayed in iTunes.
* Copyright: Enter the copyright message. This value is not displayed in iTunes.
* Managing editor: Enter the e-mail address of the feed editor. This value is not displayed in iTunes.
* Web master: Enter the e-mail address of the technical contact for the feed.  This value is not displayed in iTunes.

### Channel elements: iTunes

* Subtitle: Short description of the channel. Displayed in the *Description* field in the iTunes list view.
* Summary: Long description of the channel. Displayed when clicking the "i" link next to the *Description* field in the iTunes list view.
* Keywords: Up to twelve keywords describing the channel. Not visible in iTunes, but can be used to find the podcast in the iTunes store.
* Image: The cover image for the podcast. This image is displayed in iTunes. You can use the cover path from *Administration → Content → Podcast channels*.
* Author: The channel author. Not displayed in iTunes.
* Explicit: Set according to the content of your podcast.
* Owner: Contact information for the owner of the feed. This value is not displayed in iTunes.


Tips and tricks
---------------

For best results, the user account used to create podcast items should use a real name as the username (i.e. "John Doe" instead of "jdoe42"), since the username is used to render the `<author>` elements in the feed.
