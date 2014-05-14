#!/bin/bash

### read server_url, client_id and client_secret
echo "
===> Settings for the connection to B-Translator Server

User login is done with OAuth2 to a B-Translator Server.
Translation data is also retrieved/stored to the B-Translator
Server using the API. For these to work, a client must be
registered on the B-Translator Server. Give below the URL
of the B-Translator server and the Client ID and Client Secret
of the registered client.
"
server_url='https://dev.btranslator.org'
read -p "Enter the URL of the B-Translator Server [$server_url]: " input
server_url=${input:-$server_url}

client_id='client1'
read -p "Enter the Client ID [$client_id]: " input
client_id=${input:-$client_id}

client_secret='0123456789'
read -p "Enter the Client Secret [$client_secret]: " input
client_secret=${input:-$client_secret}

### set drupal variables and configs
skip_ssl=1
$(dirname $0)/mysqld.sh start
drush --yes @bcl php-script $(dirname $0)/btr_server.php "$server_url" "$client_id" "$client_secret" "$skip_ssl"
drush @bcl cc all

### drush may create css/js files with wrong(root) permissions
rm -rf /var/www/bcl/sites/default/files/css/
rm -rf /var/www/bcl/sites/default/files/js/
