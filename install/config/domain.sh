#!/bin/bash

echo "
===> Set the domain name (fqdn)

This is the domain that you have (or plan to get)
for the btr_client.

It will modify the files:
 1) /etc/hostname
 2) /etc/hosts
 3) /etc/nginx/sites-available/bcl*
 4) /etc/apache2/sites-available/bcl*
 5) /var/www/bcl*/sites/default/settings.php
"

### get the old domain
old_domain=$(head -n 1 /etc/hosts.conf | cut -d' ' -f2)
old_domain=${old_domain:-example.org}

### get the new domain
if [ -z "${domain+xxx}" -o "$domain" = '' ]
then
    read -p "Enter the domain name for btr_client [$old_domain]: " input
    domain=${input:-$old_domain}
fi

### update /etc/hostname and /etc/hosts
echo $domain > /etc/hostname
old_domain=$(head -n 1 /etc/hosts.conf | cut -d' ' -f2)
sed -i /etc/hosts.conf \
    -e "s/$old_domain/$domain/g"
/etc/hosts_update.sh

### update config files
for file in $(ls /etc/nginx/sites-available/bcl*)
do
    sed -i $file -e "/server_name/ s/$old_domain/$domain/"
done
for file in $(ls /etc/apache2/sites-available/bcl*)
do
    sed -i $file \
        -e "/ServerName/ s/$old_domain/$domain/" \
        -e "/RedirectPermanent/ s/$old_domain/$domain/"
done
for file in $(ls /var/www/bcl*/sites/default/settings.php)
do
    sed -i $file -e "/^\\\$base_url/ s/$old_domain/$domain/"
done

### update uri on drush aliases
sed -i /etc/drush/local_bcl.aliases.drushrc.php \
    -e "/'uri'/ s/$old_domain/$domain/"
