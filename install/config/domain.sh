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

if [ -z "${domain+xxx}" -o "$domain" = '' ]
then
    domain='example.org'
    read -p "Enter the domain name for btr_client [$domain]: " input
    domain=${input:-$domain}
fi

echo $domain > /etc/hostname
sed -i /etc/hosts \
    -e "/ localhost/c 127.0.0.1 $domain localhost"

### change config files
for file in $(ls /etc/nginx/sites-available/bcl*)
do
    sed -i $file -e "s/server_name .*\$/server_name $domain;/"
done
for file in $(ls /etc/apache2/sites-available/bcl*)
do
    sed -i $file \
        -e "s#ServerName .*\$#ServerName $domain#" \
        -e "s#RedirectPermanent .*\$#RedirectPermanent / https://$domain/#"
done
for file in $(ls /var/www/bcl*/sites/default/settings.php)
do
    sed -i $file -e "/^\\\$base_url/c \$base_url = \"https://$domain\";"
done
