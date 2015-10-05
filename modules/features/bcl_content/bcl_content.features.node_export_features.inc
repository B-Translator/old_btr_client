<?php
/**
 * @file
 * bcl_content.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function bcl_content_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'7\',
      \'uid\' => \'1\',
      \'title\' => \'What is B-Translator\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'1\',
      \'vuuid\' => \'e6333c66-f908-4364-b36f-8b2b2556b7d6\',
      \'nid\' => \'7\',
      \'type\' => \'article\',
      \'language\' => \'en\',
      \'created\' => \'1443908820\',
      \'changed\' => \'1444036022\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'0635f86d-b33b-419b-adac-20782d8fc830\',
      \'revision_timestamp\' => \'1444036022\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<img src=\\"http://info.btranslator.org/images/btranslator.png\\" width=\\"100\\" style=\\"float:left;\\" />\\r\\n\\r\\n<p>The codename <strong>B-Translator</strong> can be decoded like <strong>Bee Translator</strong>, since it aims at collecting very small translation contributions from a wide crowd of people and to dilute them into something useful. It can also be decoded like <strong>Be Translator</strong>, as an invitation to anybody to give his small contribution for translating programs or making their translations better.</p>\\r\\n<hr/>\\r\\n\\r\\n<div class=\\"row\\">\\r\\n<div class=\\"col-sm-6\\">\\r\\n<h2 style=\\"font-size:medium\\">Info Pages:</h2>\\r\\n<ul>\\r\\n  <li><a href=\\"http://info.btranslator.org/install.html\\" target=\\"_blank\\">Installation</a></li>\\r\\n  <li><a href=\\"http://info.btranslator.org/api/\\" target=\\"_blank\\">B-Translator API</a></li>\\r\\n  <li><a href=\\"http://info.btranslator.org/vocabularies/\\" target=\\"_blank\\">Vocabularies</a></li>\\r\\n  <li><a href=\\"http://info.btranslator.org/docs.html\\" target=\\"_blank\\">Documentation</a></li>\\r\\n  <li><a href=\\"http://info.btranslator.org/contact.html\\" target=\\"_blank\\">Contacts and Communication</a></li>\\r\\n</ul>\\r\\n</div>\\r\\n\\r\\n<div class=\\"col-sm-6\\">\\r\\n<h2 style=\\"font-size:medium\\">Sites Using B-Translator:</h2>\\r\\n<ul>\\r\\n  <li><a href=\\"https://btranslator.org\\" target=\\"_blank\\">https://btranslator.org</a> - B-Translator Server</li>\\r\\n  <li><a href=\\"http://v.btranslator.org\\" target=\\"_blank\\">http://v.btranslator.org</a> - Vocabularies</li>\\r\\n  <li><a href=\\"https://l10n.org.al\\" target=\\"_blank\\">https://l10n.org.al</a> - Albanian Translations</li>\\r\\n  <li><a href=\\"http://fjalori.fs.al\\" target=\\"_blank\\">http://fjalori.fs.al</a> - Albanian Vocabularies</li>\\r\\n</ul>\\r\\n</div>\\r\\n</div>",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<img src=\\"http://info.btranslator.org/images/btranslator.png\\" width=\\"100\\" style=\\"float:left;\\" />\\r\\n\\r\\n<p>The codename <strong>B-Translator</strong> can be decoded like <strong>Bee Translator</strong>, since it aims at collecting very small translation contributions from a wide crowd of people and to dilute them into something useful. It can also be decoded like <strong>Be Translator</strong>, as an invitation to anybody to give his small contribution for translating programs or making their translations better.</p>\\n<hr/>\\n<div class=\\"row\\">\\n<div class=\\"col-sm-6\\">\\n<h2 style=\\"font-size:medium\\">Info Pages:</h2>\\n<ul>\\n<li><a href=\\"http://info.btranslator.org/install.html\\" target=\\"_blank\\">Installation</a></li>\\n<li><a href=\\"http://info.btranslator.org/api/\\" target=\\"_blank\\">B-Translator API</a></li>\\n<li><a href=\\"http://info.btranslator.org/vocabularies/\\" target=\\"_blank\\">Vocabularies</a></li>\\n<li><a href=\\"http://info.btranslator.org/docs.html\\" target=\\"_blank\\">Documentation</a></li>\\n<li><a href=\\"http://info.btranslator.org/contact.html\\" target=\\"_blank\\">Contacts and Communication</a></li>\\n</ul>\\n</div>\\n<div class=\\"col-sm-6\\">\\n<h2 style=\\"font-size:medium\\">Sites Using B-Translator:</h2>\\n<ul>\\n<li><a href=\\"https://btranslator.org\\" target=\\"_blank\\">https://btranslator.org</a> - B-Translator Server</li>\\n<li><a href=\\"http://v.btranslator.org\\" target=\\"_blank\\">http://v.btranslator.org</a> - Vocabularies</li>\\n<li><a href=\\"https://l10n.org.al\\" target=\\"_blank\\">https://l10n.org.al</a> - Albanian Translations</li>\\n<li><a href=\\"http://fjalori.fs.al\\" target=\\"_blank\\">http://fjalori.fs.al</a> - Albanian Vocabularies</li>\\n</ul>\\n</div>\\n</div>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_tags\' => array(),
      \'field_image\' => array(),
      \'rdf_mapping\' => array(
        \'field_image\' => array(
          \'predicates\' => array(
            \'og:image\',
            \'rdfs:seeAlso\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_tags\' => array(
          \'predicates\' => array(
            \'dc:subject\',
          ),
          \'type\' => \'rel\',
        ),
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'disqus\' => array(
        \'domain\' => \'btranslator\',
        \'url\' => \'https://l10n.example.org/what-is-btranslator\',
        \'title\' => \'What is B-Translator\',
        \'identifier\' => \'node/7\',
        \'developer\' => 1,
        \'status\' => FALSE,
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'menu\' => NULL,
      \'path\' => array(
        \'pid\' => \'9\',
        \'source\' => \'node/7\',
        \'alias\' => \'what-is-btranslator\',
        \'language\' => \'en\',
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'8\',
      \'uid\' => \'1\',
      \'title\' => \'Sending Translation Tweets\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'1\',
      \'sticky\' => \'1\',
      \'vuuid\' => \'30a84c22-e898-4d1a-80dc-df544addf1cc\',
      \'nid\' => \'8\',
      \'type\' => \'article\',
      \'language\' => \'en\',
      \'created\' => \'1443958008\',
      \'changed\' => \'1444035837\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'089096d5-4dbd-427f-b356-b9bca7a4c275\',
      \'revision_timestamp\' => \'1444035837\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "If you try this url: <a href=\\"https://btranslator.org/tweet/sq/vocabulary/ICT_sq\\" target=\\"_blank\\">https://btranslator.org/tweet/sq/vocabulary/ICT_sq</a>, you will see that each time that you refresh it you will get a random string with its translations, in a format suitable for twitting. This can be used in combination with <em>cli twitter clients</em> and with <strong>cron</strong> to post periodically random tweets about translations.\\r\\n\\r\\nSee this script as an example: <a href=\\"https://github.com/B-Translator/btr_server/blob/master/utils/twitter.sh\\" target=\\"_blank\\">https://github.com/B-Translator/btr_server/blob/master/utils/twitter.sh</a> and here it is in action: <a href=\\"https://twitter.com/hashtag/l10n_sq?src=hash\\" target=\\"_blank\\">https://twitter.com/hashtag/l10n_sq?src=hash</a>.\\r\\n\\r\\nFor more details and examples see: <a href=\\"http://info.btranslator.org/api/#sec-4-3\\" target=\\"_blank\\">http://info.btranslator.org/api/#sec-4-3</a> and <a href=\\"http://info.btranslator.org/api-examples-js/#misc/twitter.js\\" target=\\"_blank\\">http://info.btranslator.org/api-examples-js/#misc/twitter.js</a>",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>If you try this url: <a href=\\"https://btranslator.org/tweet/sq/vocabulary/ICT_sq\\" target=\\"_blank\\">https://btranslator.org/tweet/sq/vocabulary/ICT_sq</a>, you will see that each time that you refresh it you will get a random string with its translations, in a format suitable for twitting. This can be used in combination with <em>cli twitter clients</em> and with <strong>cron</strong> to post periodically random tweets about translations.</p>\\n<p>See this script as an example: <a href=\\"https://github.com/B-Translator/btr_server/blob/master/utils/twitter.sh\\" target=\\"_blank\\">https://github.com/B-Translator/btr_server/blob/master/utils/twitter.sh</a> and here it is in action: <a href=\\"https://twitter.com/hashtag/l10n_sq?src=hash\\" target=\\"_blank\\">https://twitter.com/hashtag/l10n_sq?src=hash</a>.</p>\\n<p>For more details and examples see: <a href=\\"http://info.btranslator.org/api/#sec-4-3\\" target=\\"_blank\\">http://info.btranslator.org/api/#sec-4-3</a> and <a href=\\"http://info.btranslator.org/api-examples-js/#misc/twitter.js\\" target=\\"_blank\\">http://info.btranslator.org/api-examples-js/#misc/twitter.js</a></p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_tags\' => array(),
      \'field_image\' => array(),
      \'rdf_mapping\' => array(
        \'field_image\' => array(
          \'predicates\' => array(
            \'og:image\',
            \'rdfs:seeAlso\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_tags\' => array(
          \'predicates\' => array(
            \'dc:subject\',
          ),
          \'type\' => \'rel\',
        ),
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'disqus\' => array(
        \'domain\' => \'btranslator\',
        \'url\' => \'https://l10n.example.org/sending-translation-tweets\',
        \'title\' => \'Sending Translation Tweets\',
        \'identifier\' => \'node/8\',
        \'developer\' => 1,
        \'status\' => FALSE,
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'menu\' => NULL,
      \'path\' => array(
        \'pid\' => \'10\',
        \'source\' => \'node/8\',
        \'alias\' => \'sending-translation-tweets\',
        \'language\' => \'en\',
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'2\',
      \'uid\' => \'0\',
      \'title\' => \'Privacy Policy\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'5d82f7ac-dd89-2764-ad20-739e4d2396cc\',
      \'nid\' => \'2\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1443780325\',
      \'changed\' => \'1443780325\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'22ca1b5b-31d6-4bfb-be6f-c5c679af27d9\',
      \'revision_timestamp\' => \'1443780325\',
      \'revision_uid\' => \'0\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>The user data provided to this application (for example email address) will be kept confident and will be used only for the purposes of the application.</p>\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>The user data provided to this application (for example email address) will be kept confident and will be used only for the purposes of the application.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'disqus\' => array(
        \'domain\' => \'btranslator\',
        \'url\' => \'https://l10n.example.org/privacy-policy\',
        \'title\' => \'Privacy Policy\',
        \'identifier\' => \'node/2\',
        \'developer\' => 1,
        \'status\' => FALSE,
      ),
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'menu\' => NULL,
      \'path\' => array(
        \'pid\' => \'4\',
        \'source\' => \'node/2\',
        \'alias\' => \'privacy-policy\',
        \'language\' => \'en\',
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'5\',
      \'uid\' => \'1\',
      \'title\' => \'RSS Feeds\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'1\',
      \'vuuid\' => \'98dad4c1-cb3e-4ec3-83bd-0e8512c1839d\',
      \'nid\' => \'5\',
      \'type\' => \'article\',
      \'language\' => \'en\',
      \'created\' => \'1443907029\',
      \'changed\' => \'1444035813\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'68b7f263-f310-4116-8450-26384e43ae9d\',
      \'revision_timestamp\' => \'1444035813\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "RSS feeds allow to follow easily the latest translations/suggestions. Their URL addess is like this: <a href=\\"https://l10n.org.al/btr/rss-feed\\" target=\\"_blank\\">https://l10n.org.al/btr/rss-feed</a> or <a href=\\"https://btranslator.org/btr/rss-feed/sq\\" target=\\"_blank\\">https://btranslator.org/btr/rss-feed/sq</a>. Actually translations can be filtered by project as well, like this: <a href=\\"https://l10n.org.al/btr/rss-feed/LibreOffice\\" target=\\"_blank\\">https://l10n.org.al/btr/rss-feed/LibreOffice</a>, <a href=\\"https://btranslator.org/btr/rss-feed/sq/LibreOffice\\" target=\\"_blank\\">https://btranslator.org/btr/rss-feed/sq/LibreOffice</a>, <a href=\\"https://btranslator.org/btr/rss-feed/sq/LibreOffice/cui\\" target=\\"_blank\\">https://btranslator.org/btr/rss-feed/sq/LibreOffice/cui</a>.\\r\\n\\r\\nThis address can be used in any <em>news/feed reader</em>, which connects periodically to this address to get from it the latest news. The frequency of refresh should be once in 1 or 2 hours, since the feeds are updated at most once in 2 hours, and contain only the latest translations since the last day.\\r\\n\\r\\nThe same address can be used on the <em>feed agregators</em> on your web sites, in order to show the latest translations. Here is an example of such a feed agregator: <a href=\\"https://l10n.org.al/aggregator/sources/1\\" target=\\"_blank\\">https://l10n.org.al/aggregator/sources/1</a>.\\r\\n\\r\\nIn combination with services like <a href=\\"https://dlvr.it/\\" target=\\"_blank\\">https://dlvr.it/</a>, RSS feeds may become a powerful tool for sharing your content to social networks.",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p>RSS feeds allow to follow easily the latest translations/suggestions. Their URL addess is like this: <a href=\\"https://l10n.org.al/btr/rss-feed\\" target=\\"_blank\\">https://l10n.org.al/btr/rss-feed</a> or <a href=\\"https://btranslator.org/btr/rss-feed/sq\\" target=\\"_blank\\">https://btranslator.org/btr/rss-feed/sq</a>. Actually translations can be filtered by project as well, like this: <a href=\\"https://l10n.org.al/btr/rss-feed/LibreOffice\\" target=\\"_blank\\">https://l10n.org.al/btr/rss-feed/LibreOffice</a>, <a href=\\"https://btranslator.org/btr/rss-feed/sq/LibreOffice\\" target=\\"_blank\\">https://btranslator.org/btr/rss-feed/sq/LibreOffice</a>, <a href=\\"https://btranslator.org/btr/rss-feed/sq/LibreOffice/cui\\" target=\\"_blank\\">https://btranslator.org/btr/rss-feed/sq/LibreOffice/cui</a>.</p>\\n<p>This address can be used in any <em>news/feed reader</em>, which connects periodically to this address to get from it the latest news. The frequency of refresh should be once in 1 or 2 hours, since the feeds are updated at most once in 2 hours, and contain only the latest translations since the last day.</p>\\n<p>The same address can be used on the <em>feed agregators</em> on your web sites, in order to show the latest translations. Here is an example of such a feed agregator: <a href=\\"https://l10n.org.al/aggregator/sources/1\\" target=\\"_blank\\">https://l10n.org.al/aggregator/sources/1</a>.</p>\\n<p>In combination with services like <a href=\\"https://dlvr.it/\\" target=\\"_blank\\">https://dlvr.it/</a>, RSS feeds may become a powerful tool for sharing your content to social networks.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_tags\' => array(),
      \'field_image\' => array(),
      \'rdf_mapping\' => array(
        \'field_image\' => array(
          \'predicates\' => array(
            \'og:image\',
            \'rdfs:seeAlso\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_tags\' => array(
          \'predicates\' => array(
            \'dc:subject\',
          ),
          \'type\' => \'rel\',
        ),
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'disqus\' => array(
        \'domain\' => \'btranslator\',
        \'url\' => \'https://l10n.example.org/rss\',
        \'title\' => \'RSS Feeds\',
        \'identifier\' => \'node/5\',
        \'developer\' => 1,
        \'status\' => FALSE,
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'menu\' => NULL,
      \'path\' => array(
        \'pid\' => \'7\',
        \'source\' => \'node/5\',
        \'alias\' => \'rss\',
        \'language\' => \'en\',
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'11\',
      \'uid\' => \'1\',
      \'title\' => \'Integration with other translation tools\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'7997eedb-5d65-48c7-86da-1662e95367bd\',
      \'nid\' => \'11\',
      \'type\' => \'article\',
      \'language\' => \'en\',
      \'created\' => \'1444012865\',
      \'changed\' => \'1444022997\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'89722153-eced-48b4-a14f-469e7526be69\',
      \'revision_timestamp\' => \'1444022997\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Integration with other translation tools, like desktop PO file editors (Virtaal, Lokalize, etc.), web based translation tools (Pootle, Transifex, etc.), can be done by exporting and importing translation files. It can be done on the web interface, from the dashboard of a project. But it can be done from the terminal as well (if you have access on the server).</p>\\r\\n\\r\\n<p>This is how the commands look like:\\r\\n<pre>cd /var/www/data/\\r\\ndrush btr-project-export origin project lng /directory/to/place/exported/files/\\r\\ndrush btr-vote-import --user=\\"user name\\" lng /path/of/po/files/to/be/imported/\\r\\n</pre>\\r\\n</p>\\r\\n\\r\\nWhile exporting, it will by default export the most voted translation of a string (or whatever happens to be at the top of the list of translations). There are ways to modify this befaviour. For example you can export the original translations that were imported at the begining, or you can give priority to the the translations preferred (voted) by one or more users. In this case the preferred translations will be exported even if they don\'t have the maximum number of votes.\\r\\n\\r\\nThe import command requires a username, as well as a language. All the translations that are in the imported PO files will be recorded as supported by the given username. If a translation does not exist, it will be recorded as suggested by the user. If it exists, it will be marked as supported (voted) by the user. So, importing translation PO files is like a bulk translation and voting operation.\\r\\n\\r\\nExporting and importing PO files can be useful if the user prefers to work with offline desktop tools for translating. He can first export the PO files of a project, work with them on desktop, and then upload and import them back to B-Translator.\\r\\n\\r\\nIt also helps for synchronizing with other translation systems. Let\'s say that we want to synchronize with Pootle; the process of synchronization would usually follow these steps:\\r\\n<ol>\\r\\n  <li>Export (download) PO files from Pootle.</li>\\r\\n  <li>Import PO files to B-Translator. During this import they will be merged with the existing translations, since B-Translator supports more than one translation for string.</li>\\r\\n  <li>Export PO files from B-Translator. This will export the most voted translations or those that are preferred by some users.</li>\\r\\n  <li>Import (upload) PO files back to Pootle. This import will override the previous translations.</li>\\r\\n</ol>\\r\\n\\r\\nHere is a script that automates this synchronization process for a subproject of LibreOffice: <a href=\\"https://github.com/B-Translator/btr_server/blob/master/modules/custom/btrCore/data/sync/sq-libo_ui.sh\\" target=\\"_blank\\">modules/custom/btrCore/data/sync/sq-libo_ui.sh</a>\\r\\nSimilar synchronization scripts can be built for other projects as well (KDE, GNOME, etc.) but I havn\'t tried it yet.",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p>Integration with other translation tools, like desktop PO file editors (Virtaal, Lokalize, etc.), web based translation tools (Pootle, Transifex, etc.), can be done by exporting and importing translation files. It can be done on the web interface, from the dashboard of a project. But it can be done from the terminal as well (if you have access on the server).</p>\\n<p>This is how the commands look like:</p>\\n<pre>cd /var/www/data/\\ndrush btr-project-export origin project lng /directory/to/place/exported/files/\\ndrush btr-vote-import --user=\\"user name\\" lng /path/of/po/files/to/be/imported/\\n</pre></p>\\n<p>While exporting, it will by default export the most voted translation of a string (or whatever happens to be at the top of the list of translations). There are ways to modify this befaviour. For example you can export the original translations that were imported at the begining, or you can give priority to the the translations preferred (voted) by one or more users. In this case the preferred translations will be exported even if they don\'t have the maximum number of votes.</p>\\n<p>The import command requires a username, as well as a language. All the translations that are in the imported PO files will be recorded as supported by the given username. If a translation does not exist, it will be recorded as suggested by the user. If it exists, it will be marked as supported (voted) by the user. So, importing translation PO files is like a bulk translation and voting operation.</p>\\n<p>Exporting and importing PO files can be useful if the user prefers to work with offline desktop tools for translating. He can first export the PO files of a project, work with them on desktop, and then upload and import them back to B-Translator.</p>\\n<p>It also helps for synchronizing with other translation systems. Let\'s say that we want to synchronize with Pootle; the process of synchronization would usually follow these steps:</p>\\n<ol>\\n<li>Export (download) PO files from Pootle.</li>\\n<li>Import PO files to B-Translator. During this import they will be merged with the existing translations, since B-Translator supports more than one translation for string.</li>\\n<li>Export PO files from B-Translator. This will export the most voted translations or those that are preferred by some users.</li>\\n<li>Import (upload) PO files back to Pootle. This import will override the previous translations.</li>\\n</ol>\\n<p>Here is a script that automates this synchronization process for a subproject of LibreOffice: <a href=\\"https://github.com/B-Translator/btr_server/blob/master/modules/custom/btrCore/data/sync/sq-libo_ui.sh\\" target=\\"_blank\\">modules/custom/btrCore/data/sync/sq-libo_ui.sh</a><br />\\nSimilar synchronization scripts can be built for other projects as well (KDE, GNOME, etc.) but I havn\'t tried it yet.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_tags\' => array(),
      \'field_image\' => array(),
      \'rdf_mapping\' => array(
        \'field_image\' => array(
          \'predicates\' => array(
            \'og:image\',
            \'rdfs:seeAlso\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_tags\' => array(
          \'predicates\' => array(
            \'dc:subject\',
          ),
          \'type\' => \'rel\',
        ),
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'disqus\' => array(
        \'domain\' => \'btranslator\',
        \'url\' => \'https://l10n.example.org/integration-other-translation-tools\',
        \'title\' => \'Integration with other translation tools\',
        \'identifier\' => \'node/11\',
        \'developer\' => 1,
        \'status\' => FALSE,
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'menu\' => NULL,
      \'path\' => array(
        \'pid\' => \'13\',
        \'source\' => \'node/11\',
        \'alias\' => \'integration-other-translation-tools\',
        \'language\' => \'en\',
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'6\',
      \'uid\' => \'1\',
      \'title\' => \'API Examples\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'1\',
      \'vuuid\' => \'e59bb22c-18a8-4c23-ba78-9d74209937fd\',
      \'nid\' => \'6\',
      \'type\' => \'article\',
      \'language\' => \'en\',
      \'created\' => \'1443907856\',
      \'changed\' => \'1444036013\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'8cf866b1-a427-4865-8a95-b1235d93bd90\',
      \'revision_timestamp\' => \'1444036013\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<a href="http://info.btranslator.org/api-examples-js/" target="_blank">The application of API Examples</a> has been improved. Now the interface is built with Bootstrap3 and is more responsive (looks nice in mobile as well). Also, the code of the examples can be edited and executed, in order to play around and test.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><a href=\\"http://info.btranslator.org/api-examples-js/\\" target=\\"_blank\\">The application of API Examples</a> has been improved. Now the interface is built with Bootstrap3 and is more responsive (looks nice in mobile as well). Also, the code of the examples can be edited and executed, in order to play around and test.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_tags\' => array(),
      \'field_image\' => array(),
      \'rdf_mapping\' => array(
        \'field_image\' => array(
          \'predicates\' => array(
            \'og:image\',
            \'rdfs:seeAlso\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_tags\' => array(
          \'predicates\' => array(
            \'dc:subject\',
          ),
          \'type\' => \'rel\',
        ),
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'disqus\' => array(
        \'domain\' => \'btranslator\',
        \'url\' => \'https://l10n.example.org/api-examples\',
        \'title\' => \'API Examples\',
        \'identifier\' => \'node/6\',
        \'developer\' => 1,
        \'status\' => FALSE,
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'menu\' => NULL,
      \'path\' => array(
        \'pid\' => \'8\',
        \'source\' => \'node/6\',
        \'alias\' => \'api-examples\',
        \'language\' => \'en\',
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'9\',
      \'uid\' => \'1\',
      \'title\' => \'Embed Translation Project Inside a Webpage\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'1\',
      \'sticky\' => \'1\',
      \'vuuid\' => \'20fb29e5-1928-417b-a91e-5138615a8dd8\',
      \'nid\' => \'9\',
      \'type\' => \'article\',
      \'language\' => \'en\',
      \'created\' => \'1443960017\',
      \'changed\' => \'1444035877\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'9c9f537d-be3d-4eb3-820f-9cb88cd6b64f\',
      \'revision_timestamp\' => \'1444035877\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>B-Translator is responsive, which means that it is designed to look nice on small screens as well, usually on mobiles. But it also looks nice inside an iFrame as well, so it can easily be embedded inside a webpage.\\r\\nIt can be done by using an url like this as the <strong>src</strong> of an <strong>&lt;iframe&gt;</strong> tag:\\r\\n  <code>https://l10n.org.al/btr/project/LibreOffice/sw/sq?display=iframe</code>\\r\\n</p>\\r\\n\\r\\n<p>Here is a quick example to demonstrate this. Simply copy and paste this code inside a webpage:\\r\\n<!-- HTML generated using hilite.me -->\\r\\n<div><pre style=\\"margin: 0; line-height: 125%\\"><span style=\\"color: #6ab825; font-weight: bold\\">&lt;div</span> <span style=\\"color: #bbbbbb\\">style=</span><span style=\\"color: #ed9d13\\">&quot;width:450px; display:inline-block; float:right; border:1px solid #aaa; border-radius: 3px; padding:10px; margin-left: 10px;&quot;</span><span style=\\"color: #6ab825; font-weight: bold\\">&gt;</span>\\r\\n  <span style=\\"color: #6ab825; font-weight: bold\\">&lt;h3</span> <span style=\\"color: #bbbbbb\\">style=</span><span style=\\"color: #ed9d13\\">&quot;margin-top:0px; color:#2a2; font-size:large&quot;</span><span style=\\"color: #6ab825; font-weight: bold\\">&gt;</span>Translations of LibreOffice/sw/sq<span style=\\"color: #6ab825; font-weight: bold\\">&lt;/h3&gt;</span>\\r\\n  <span style=\\"color: #6ab825; font-weight: bold\\">&lt;iframe</span> <span style=\\"color: #bbbbbb\\">src=</span><span style=\\"color: #ed9d13\\">&quot;https://l10n.org.al/btr/project/LibreOffice/sw/sq?display=iframe&quot;</span>\\r\\n          <span style=\\"color: #bbbbbb\\">width=</span><span style=\\"color: #ed9d13\\">&quot;100%&quot;</span> <span style=\\"color: #bbbbbb\\">height=</span><span style=\\"color: #ed9d13\\">&quot;500px&quot;</span>\\r\\n          <span style=\\"color: #bbbbbb\\">seamless=</span><span style=\\"color: #ed9d13\\">&quot;seamless&quot;</span> <span style=\\"color: #bbbbbb\\">frameborder=</span><span style=\\"color: #ed9d13\\">&quot;0&quot;</span><span style=\\"color: #6ab825; font-weight: bold\\">&gt;</span>\\r\\n  <span style=\\"color: #6ab825; font-weight: bold\\">&lt;/iframe&gt;</span>\\r\\n<span style=\\"color: #6ab825; font-weight: bold\\">&lt;/div&gt;</span>\\r\\n</pre></div>\\r\\n</p>\\r\\n\\r\\n<div style=\\"width:450px; display:inline-block; float:right; border:1px solid #aaa; border-radius: 3px; padding:10px; margin-left: 10px;\\">\\r\\n  <h3 style=\\"margin-top:0px; color:#2a2; font-size:large\\">Translations of LibreOffice/sw/sq</h3>\\r\\n  <iframe src=\\"https://l10n.org.al/btr/project/LibreOffice/sw/sq?display=iframe\\"\\r\\n          width=\\"100%\\" height=\\"500px\\"\\r\\n          seamless=\\"seamless\\" frameborder=\\"0\\">\\r\\n  </iframe>\\r\\n</div>\\r\\n\\r\\n<p>Notice <strong>?display=iframe</strong> at the end of the URL. This tells the application to customize the output so that it is suitable for an iFrame. It basically includes an extra CSS file which tailors the application by hiding the navbar on the header of the page, removing any margins on the body of the page, etc.</p>\\r\\n\\r\\n<p>The same thing can be done with vocabularies: <code>https://l10n.org.al/vocabulary/ICT_sq?display=iframe</code>, with translations: <code>https://l10n.org.al/translations?display=iframe</code>, or with any path of the application that makes sense to be embedded with an iFrame inside another page (for example try this one: <a href=\\"https://l10n.example.org/embed-translation-project-inside-webpage?display=iframe\\" target=\\"_blank\\">https://l10n.example.org/embed-translation-project-inside-webpage?display=iframe</a>).</p>\\r\\n\\r\\n<div style=\\"clear: both;\\" />\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p>B-Translator is responsive, which means that it is designed to look nice on small screens as well, usually on mobiles. But it also looks nice inside an iFrame as well, so it can easily be embedded inside a webpage.<br />\\nIt can be done by using an url like this as the <strong>src</strong> of an <strong>&lt;iframe&gt;</strong> tag:<br />\\n  <code>https://l10n.org.al/btr/project/LibreOffice/sw/sq?display=iframe</code>\\n</p>\\n<p>Here is a quick example to demonstrate this. Simply copy and paste this code inside a webpage:</p>\\n<!-- HTML generated using hilite.me --><div>\\n<pre style=\\"margin: 0; line-height: 125%\\"><span style=\\"color: #6ab825; font-weight: bold\\">&lt;div</span> <span style=\\"color: #bbbbbb\\">style=</span><span style=\\"color: #ed9d13\\">&quot;width:450px; display:inline-block; float:right; border:1px solid #aaa; border-radius: 3px; padding:10px; margin-left: 10px;&quot;</span><span style=\\"color: #6ab825; font-weight: bold\\">&gt;</span>\\n  <span style=\\"color: #6ab825; font-weight: bold\\">&lt;h3</span> <span style=\\"color: #bbbbbb\\">style=</span><span style=\\"color: #ed9d13\\">&quot;margin-top:0px; color:#2a2; font-size:large&quot;</span><span style=\\"color: #6ab825; font-weight: bold\\">&gt;</span>Translations of LibreOffice/sw/sq<span style=\\"color: #6ab825; font-weight: bold\\">&lt;/h3&gt;</span>\\n  <span style=\\"color: #6ab825; font-weight: bold\\">&lt;iframe</span> <span style=\\"color: #bbbbbb\\">src=</span><span style=\\"color: #ed9d13\\">&quot;https://l10n.org.al/btr/project/LibreOffice/sw/sq?display=iframe&quot;</span>\\n          <span style=\\"color: #bbbbbb\\">width=</span><span style=\\"color: #ed9d13\\">&quot;100%&quot;</span> <span style=\\"color: #bbbbbb\\">height=</span><span style=\\"color: #ed9d13\\">&quot;500px&quot;</span>\\n          <span style=\\"color: #bbbbbb\\">seamless=</span><span style=\\"color: #ed9d13\\">&quot;seamless&quot;</span> <span style=\\"color: #bbbbbb\\">frameborder=</span><span style=\\"color: #ed9d13\\">&quot;0&quot;</span><span style=\\"color: #6ab825; font-weight: bold\\">&gt;</span>\\n  <span style=\\"color: #6ab825; font-weight: bold\\">&lt;/iframe&gt;</span>\\n<span style=\\"color: #6ab825; font-weight: bold\\">&lt;/div&gt;</span>\\n</pre></div>\\n</p>\\n<div style=\\"width:450px; display:inline-block; float:right; border:1px solid #aaa; border-radius: 3px; padding:10px; margin-left: 10px;\\">\\n<h3 style=\\"margin-top:0px; color:#2a2; font-size:large\\">Translations of LibreOffice/sw/sq</h3>\\n<iframe src=\\"https://l10n.org.al/btr/project/LibreOffice/sw/sq?display=iframe\\"\\n          width=\\"100%\\" height=\\"500px\\"\\n          seamless=\\"seamless\\" frameborder=\\"0\\">\\n  </iframe></div>\\n<p>Notice <strong>?display=iframe</strong> at the end of the URL. This tells the application to customize the output so that it is suitable for an iFrame. It basically includes an extra CSS file which tailors the application by hiding the navbar on the header of the page, removing any margins on the body of the page, etc.</p>\\n<p>The same thing can be done with vocabularies: <code>https://l10n.org.al/vocabulary/ICT_sq?display=iframe</code>, with translations: <code>https://l10n.org.al/translations?display=iframe</code>, or with any path of the application that makes sense to be embedded with an iFrame inside another page (for example try this one: <a href=\\"https://l10n.example.org/embed-translation-project-inside-webpage?display=iframe\\" target=\\"_blank\\">https://l10n.example.org/embed-translation-project-inside-webpage?display=iframe</a>).</p>\\n<div style=\\"clear: both;\\" />\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_tags\' => array(),
      \'field_image\' => array(),
      \'rdf_mapping\' => array(
        \'field_image\' => array(
          \'predicates\' => array(
            \'og:image\',
            \'rdfs:seeAlso\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_tags\' => array(
          \'predicates\' => array(
            \'dc:subject\',
          ),
          \'type\' => \'rel\',
        ),
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'disqus\' => array(
        \'domain\' => \'btranslator\',
        \'url\' => \'https://l10n.example.org/embed-translation-project-inside-webpage\',
        \'title\' => \'Embed Translation Project Inside a Webpage\',
        \'identifier\' => \'node/9\',
        \'developer\' => 1,
        \'status\' => FALSE,
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'menu\' => NULL,
      \'path\' => array(
        \'pid\' => \'11\',
        \'source\' => \'node/9\',
        \'alias\' => \'embed-translation-project-inside-webpage\',
        \'language\' => \'en\',
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'12\',
      \'uid\' => \'1\',
      \'title\' => \'Translation in Context\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'c9a3eb4a-2c28-4833-866d-4f9c0baa8d10\',
      \'nid\' => \'12\',
      \'type\' => \'article\',
      \'language\' => \'en\',
      \'created\' => \'1444033934\',
      \'changed\' => \'1444034800\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'bb878610-27ab-477e-aaf0-dfc142863213\',
      \'revision_timestamp\' => \'1444034800\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "In the vocabulary mobile app (<a href=\\"http://v.btranslator.org\\" target=\\"_blank\\">http://v.btranslator.org</a>) I have implemented what I call <em>translation in context</em>. It works like this: when the user makes a <strong>Ctrl+Click</strong> on a string/translation anywhere on the UI, a browser tab/window is opened automatically with the correct url in the translation server (web application), where he can give a translation or a new suggestion for the selected string. Of course, for a normal Click  the UI works as normally it should.\\r\\n\\r\\nThe funny thing is that this is a mobile application and in a mobile application you cannot make a Ctrl+Click. But for translation purposes it can be opened in a desktop browser. Anyway, at least it illustrates/demonstrates the idea of \\"translation in context\\" (or whatever it can be called).\\r\\n\\r\\nThe implementation details are not so complicated. This app uses a gettext-like localization system, where there is a JavaScript function <code>_()</code> that is used to mark the strings that need to be translated, like this: <code>_(\\"string\\")</code>. It returns the corresponding <code>translation</code>, which is then used in the application.\\r\\n\\r\\nI have overridden the function <code>_()</code> so that it does not return just the plain <code>translation</code>, but it returns instead a decorated translation like this:\\r\\n<pre><xmp><span class=\\"gettext\\" sguid=\\"id-of-the-string\\">translation</span></xmp></pre>\\r\\nSee: <a href=\\"https://github.com/FreeSoft-AL/vocabulary/blob/gh-pages/js/_app/translate_in_context.js#L43-L54\\" target=\\"_blank\\">s/_app/translate_in_context.js#L43-L54</a>.\\r\\n\\r\\nThen I assign with jQuery an event-handler for the event <strong>Ctrl+Click</strong> to all the elements of the class \\"gettext\\". This event handler gets the id of the string and opens a tab with the proper URL for translating that string in the translation server.\\r\\nSee: <a href=\\"https://github.com/FreeSoft-AL/vocabulary/blob/gh-pages/js/_app/translate_in_context.js#L82-L98\\" target=\\"_blank\\">js/_app/translate_in_context.js#L82-L98</a>.\\r\\n\\r\\nI am sure that it is possible to do the same thing for any JavaScript application that has a translation system based on PO files. Actually it can be done for any web application, since it should be possible to mark/decorate the translation in the same way, and include a small JavaScript function that handles the <strong>Ctrl+Click</strong> event.\\r\\n\\r\\nWhat about the desktop applications (KDE, GNOME, etc.)? Is it possible to do something similar? I am not sure, maybe it is, maybe it is not possible. The most difficult part in my opinion is how to mark (or decorate) the translated string, so that it can respond to a Ctrl+Click event. Then you can construct the correct url and open it in browser.",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p>In the vocabulary mobile app (<a href=\\"http://v.btranslator.org\\" target=\\"_blank\\">http://v.btranslator.org</a>) I have implemented what I call <em>translation in context</em>. It works like this: when the user makes a <strong>Ctrl+Click</strong> on a string/translation anywhere on the UI, a browser tab/window is opened automatically with the correct url in the translation server (web application), where he can give a translation or a new suggestion for the selected string. Of course, for a normal Click  the UI works as normally it should.</p>\\n<p>The funny thing is that this is a mobile application and in a mobile application you cannot make a Ctrl+Click. But for translation purposes it can be opened in a desktop browser. Anyway, at least it illustrates/demonstrates the idea of \\"translation in context\\" (or whatever it can be called).</p>\\n<p>The implementation details are not so complicated. This app uses a gettext-like localization system, where there is a JavaScript function <code>_()</code> that is used to mark the strings that need to be translated, like this: <code>_(\\"string\\")</code>. It returns the corresponding <code>translation</code>, which is then used in the application.</p>\\n<p>I have overridden the function <code>_()</code> so that it does not return just the plain <code>translation</code>, but it returns instead a decorated translation like this:</p>\\n<pre><xmp><span class=\\"gettext\\" sguid=\\"id-of-the-string\\">translation</span></xmp></pre><p>See: <a href=\\"https://github.com/FreeSoft-AL/vocabulary/blob/gh-pages/js/_app/translate_in_context.js#L43-L54\\" target=\\"_blank\\">s/_app/translate_in_context.js#L43-L54</a>.</p>\\n<p>Then I assign with jQuery an event-handler for the event <strong>Ctrl+Click</strong> to all the elements of the class \\"gettext\\". This event handler gets the id of the string and opens a tab with the proper URL for translating that string in the translation server.<br />\\nSee: <a href=\\"https://github.com/FreeSoft-AL/vocabulary/blob/gh-pages/js/_app/translate_in_context.js#L82-L98\\" target=\\"_blank\\">js/_app/translate_in_context.js#L82-L98</a>.</p>\\n<p>I am sure that it is possible to do the same thing for any JavaScript application that has a translation system based on PO files. Actually it can be done for any web application, since it should be possible to mark/decorate the translation in the same way, and include a small JavaScript function that handles the <strong>Ctrl+Click</strong> event.</p>\\n<p>What about the desktop applications (KDE, GNOME, etc.)? Is it possible to do something similar? I am not sure, maybe it is, maybe it is not possible. The most difficult part in my opinion is how to mark (or decorate) the translated string, so that it can respond to a Ctrl+Click event. Then you can construct the correct url and open it in browser.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_tags\' => array(),
      \'field_image\' => array(),
      \'rdf_mapping\' => array(
        \'field_image\' => array(
          \'predicates\' => array(
            \'og:image\',
            \'rdfs:seeAlso\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_tags\' => array(
          \'predicates\' => array(
            \'dc:subject\',
          ),
          \'type\' => \'rel\',
        ),
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'disqus\' => array(
        \'domain\' => \'btranslator\',
        \'url\' => \'https://l10n.example.org/translation-context\',
        \'title\' => \'Translation in Context\',
        \'identifier\' => \'node/12\',
        \'developer\' => 1,
        \'status\' => FALSE,
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'menu\' => NULL,
      \'path\' => array(
        \'pid\' => \'14\',
        \'source\' => \'node/12\',
        \'alias\' => \'translation-context\',
        \'language\' => \'en\',
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'3\',
      \'uid\' => \'0\',
      \'title\' => \'Terms of Service\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'60df27dc-1b3a-8eb4-5512-ff65210dbf9b\',
      \'nid\' => \'3\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1443780325\',
      \'changed\' => \'1443780325\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'cdd868f4-63bd-4c89-b1cc-87d32fe3358f\',
      \'revision_timestamp\' => \'1443780325\',
      \'revision_uid\' => \'0\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>The services of this application will be used in good faith. Any disputes will be solved with agreement and mutual understanding.</p>\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>The services of this application will be used in good faith. Any disputes will be solved with agreement and mutual understanding.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'disqus\' => array(
        \'domain\' => \'btranslator\',
        \'url\' => \'https://l10n.example.org/terms-service\',
        \'title\' => \'Terms of Service\',
        \'identifier\' => \'node/3\',
        \'developer\' => 1,
        \'status\' => FALSE,
      ),
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'menu\' => NULL,
      \'path\' => array(
        \'pid\' => \'5\',
        \'source\' => \'node/3\',
        \'alias\' => \'terms-service\',
        \'language\' => \'en\',
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'10\',
      \'uid\' => \'1\',
      \'title\' => \'Importing New Projects\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'0fb496b0-03a5-4bf2-a82f-39a943dac77d\',
      \'nid\' => \'10\',
      \'type\' => \'article\',
      \'language\' => \'en\',
      \'created\' => \'1443970176\',
      \'changed\' => \'1443970988\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'fd9f83bb-94fd-4fd7-b805-b850e4db2aa8\',
      \'revision_timestamp\' => \'1443970988\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>A translation project is composed of some <strong>POT</strong> files (PO template files, with extension <strong>.pot</strong>) and some <strong>PO</strong> files (<strong>.po</strong> extension) for each translation language. The name of the PO files should match that of the template (POT) files, except for the extension. New projects on B-Translator can be added both from the GUI or from the command line terminal (if you have access to the server).</p>\\r\\n\\r\\n<p>For adding a new project from the web interface you have to put all the POT files in the directory <code>pot/</code>, and all the PO files in directories named after the code of the language (for example <code>sq/</code>, <code>fr/</code>, <code>de/</code>, etc.) Then you should create an archive of all these directories (for example a <strong>.tgz</strong> archive), and then upload it here: <a href=\\"https://l10n.example.org/btr/project/\\" target=\\"_blank\\">https://l10n.example.org/btr/project/</a>, at the import section. This will schedule the uploaded project for import and it will be done in about 1 or 2 hours.</p>\\r\\n\\r\\n<p>From the terminal you can use <em>drush</em> commands, like this:\\r\\n<pre>\\r\\ncd /var/www/data/\\r\\ndrush btr-project-add --user=\\"user name\\" test project1 /path/to/pot/files/\\r\\ndrush btr-project-import --user=\\"user name\\" test project1 lng1 /path/to/po/files/of/lng1\\r\\ndrush btr-project-import --user=\\"user name\\" test project1 lng2 /path/to/po/files/of/lng2\\r\\ndrush btr-project-import --user=\\"user name\\" test project1 lng3 /path/to/po/files/of/lng3\\r\\ndrush btr-project-list --origin=test\\r\\ndrush btr-project-delete --origin=test --project=project1 --erase=true --purge=true\\r\\n</pre>\\r\\n</p>\\r\\n\\r\\n<p>For example, here is a simple script that does this: <a href=\\"https://github.com/B-Translator/btr_server/blob/master/modules/custom/btrCore/data/test/import-pingus.sh\\" target=\\"_blank\\">modules/custom/btrCore/data/test/import-pingus.sh</a>.</p>\\r\\n\\r\\n<p>In the directory <a href=\\"https://github.com/B-Translator/btr_server/tree/master/modules/custom/btrCore/data/import\\" target=\\"_blank\\">modules/custom/btrCore/data/import/</a> there are some scripts that can be used to import the translations of some well known open source projects.</p>",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p>A translation project is composed of some <strong>POT</strong> files (PO template files, with extension <strong>.pot</strong>) and some <strong>PO</strong> files (<strong>.po</strong> extension) for each translation language. The name of the PO files should match that of the template (POT) files, except for the extension. New projects on B-Translator can be added both from the GUI or from the command line terminal (if you have access to the server).</p>\\n<p>For adding a new project from the web interface you have to put all the POT files in the directory <code>pot/</code>, and all the PO files in directories named after the code of the language (for example <code>sq/</code>, <code>fr/</code>, <code>de/</code>, etc.) Then you should create an archive of all these directories (for example a <strong>.tgz</strong> archive), and then upload it here: <a href=\\"https://l10n.example.org/btr/project/\\" target=\\"_blank\\">https://l10n.example.org/btr/project/</a>, at the import section. This will schedule the uploaded project for import and it will be done in about 1 or 2 hours.</p>\\n<p>From the terminal you can use <em>drush</em> commands, like this:</p>\\n<pre>\\ncd /var/www/data/\\ndrush btr-project-add --user=\\"user name\\" test project1 /path/to/pot/files/\\ndrush btr-project-import --user=\\"user name\\" test project1 lng1 /path/to/po/files/of/lng1\\ndrush btr-project-import --user=\\"user name\\" test project1 lng2 /path/to/po/files/of/lng2\\ndrush btr-project-import --user=\\"user name\\" test project1 lng3 /path/to/po/files/of/lng3\\ndrush btr-project-list --origin=test\\ndrush btr-project-delete --origin=test --project=project1 --erase=true --purge=true\\n</pre></p>\\n<p>For example, here is a simple script that does this: <a href=\\"https://github.com/B-Translator/btr_server/blob/master/modules/custom/btrCore/data/test/import-pingus.sh\\" target=\\"_blank\\">modules/custom/btrCore/data/test/import-pingus.sh</a>.</p>\\n<p>In the directory <a href=\\"https://github.com/B-Translator/btr_server/tree/master/modules/custom/btrCore/data/import\\" target=\\"_blank\\">modules/custom/btrCore/data/import/</a> there are some scripts that can be used to import the translations of some well known open source projects.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_tags\' => array(),
      \'field_image\' => array(),
      \'rdf_mapping\' => array(
        \'field_image\' => array(
          \'predicates\' => array(
            \'og:image\',
            \'rdfs:seeAlso\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_tags\' => array(
          \'predicates\' => array(
            \'dc:subject\',
          ),
          \'type\' => \'rel\',
        ),
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'disqus\' => array(
        \'domain\' => \'btranslator\',
        \'url\' => \'https://l10n.example.org/importing-new-projects\',
        \'title\' => \'Importing New Projects\',
        \'identifier\' => \'node/10\',
        \'developer\' => 1,
        \'status\' => FALSE,
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'menu\' => NULL,
      \'path\' => array(
        \'pid\' => \'12\',
        \'source\' => \'node/10\',
        \'alias\' => \'importing-new-projects\',
        \'language\' => \'en\',
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
