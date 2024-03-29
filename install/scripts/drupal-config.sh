#!/bin/bash -x

### prevent robots from crawling translations
sed -i $drupal_dir/robots.txt \
    -e '/# B-Translator/,$ d'
cat <<EOF >> $drupal_dir/robots.txt
# B-Translator
Disallow: /btr/
Disallow: /?q=btr/
Disallow: /translations/
Disallow: /?q=translations/
Disallow: /vocabulary/
Disallow: /?q=vocabulary/
EOF

# Protect Drupal settings from prying eyes
drupal_settings=$drupal_dir/sites/default/settings.php
chown root:www-data $drupal_settings
chmod 640 $drupal_settings

### Modify Drupal settings

# diable poor man's cron
cat >> $drupal_settings << EOF
/**
 * Disable Poor Man's Cron:
 *
 * Drupal 7 enables the built-in Poor Man's Cron by default.
 * Poor Man's Cron relies on site activity to trigger Drupal's cron,
 * and is not well suited for low activity websites.
 *
 * We will use the Linux system cron and override Poor Man's Cron
 * by setting the cron_safe_threshold to 0.
 *
 * To re-enable Poor Man's Cron:
 *    Comment out (add a leading hash sign) the line below,
 *    and the system cron in /etc/cron.d/drupal7.
 */
\$conf['cron_safe_threshold'] = 0;

EOF

# set base_url
cat >> $drupal_settings << EOF
\$base_url = "https://example.org";

EOF

# set the memcache configuration
cat >> $drupal_settings << EOF
// Adds memcache as a cache backend
/* comment memcache config
\$conf['cache_backends'][] = 'profiles/btr_client/modules/contrib/memcache/memcache.inc';
// Makes it so that memcache is the default caching backend
\$conf['cache_default_class'] = 'MemCacheDrupal';
// Keep forms in persistent storage, as per discussed at the beginning
\$conf['cache_class_cache_form'] = 'DrupalDatabaseCache';
// I don't see any point in keeping the module update information in Memcached
\$conf['cache_class_cache_update'] = 'DrupalDatabaseCache';

// Specify the memcache servers you wish to use and assign them to a cluster
// Cluster = group of memcache servers, in our case, it's probably just one server per cluster.
\$conf['memcache_servers'] = array('unix:///var/run/memcached/memcached.sock' => 'default');
// This assigns all cache bins to the 'default' cluster from above
\$conf['memcache_bins'] = array('cache' => 'default');

// If you wanted multiple Drupal installations to share one Memcache instance use the prefix like so:
\$conf['memcache_key_prefix'] = 'btr_client';
comment memcache config */

EOF

### install btrProject and btrVocabulary
### $drush is an alias for 'drush --root=/var/www/bcl'
$drush --yes pm-enable btrProject
$drush --yes pm-enable btrVocabulary

### install additional features
$drush --yes pm-enable bcl_btrClient
$drush --yes features-revert bcl_btrClient

$drush --yes pm-enable bcl_misc
$drush --yes features-revert bcl_misc

$drush --yes pm-enable bcl_layout
$drush --yes features-revert bcl_layout

$drush --yes pm-enable bcl_content

#$drush --yes pm-enable bcl_captcha
#$drush --yes features-revert bcl_captcha

$drush --yes pm-enable bcl_permissions
$drush --yes features-revert bcl_permissions

#$drush --yes pm-enable bcl_discus
#$drush --yes features-revert bcl_discus
#$drush --yes pm-enable bcl_invite
#$drush --yes pm-enable bcl_simplenews
#$drush --yes pm-enable bcl_mass_contact
#$drush --yes pm-enable bcl_googleanalytics
#$drush --yes pm-enable bcl_drupalchat

### update to the latest version of core and modules
#$drush --yes pm-refresh
#$drush --yes pm-update

### refresh and update translations
if [ "$development" != 'true' ]
then
    $drush --yes l10n-update-refresh
    $drush --yes l10n-update
fi
