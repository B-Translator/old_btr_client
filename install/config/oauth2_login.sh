#!/bin/bash

### read server_url, client_id and client_secret
echo "
===> Settings for OAuth2 Login

User login is done with OAuth2 to a B-Translator Server.
Translation data is also retrieved/stored to this server
using the B-Translator API. For these to work, a client must be
registered on the B-Translator Server. Give below the URL
of the B-Translator server and the Client ID and Client Secret
of the registered client.
"

if [ -z "${oauth2_server_url+xxx}" -o "$oauth2_server_url" = '' ]
then
    oauth2_server_url='https://dev.btranslator.org'
    read -p "Enter the URL of the B-Translator Server [$oauth2_server_url]: " input
    oauth2_server_url=${input:-$oauth2_server_url}
fi

if [ -z "${oauth2_client_id+xxx}" -o "$oauth2_client_id" = '' ]
then
    oauth2_client_id='client1'
    read -p "Enter the Client ID [$oauth2_client_id]: " input
    oauth2_client_id=${input:-$oauth2_client_id}
fi

if [ -z "${oauth2_client_secret+xxx}" -o "$oauth2_client_secret" = '' ]
then
    oauth2_client_secret='0123456789'
    read -p "Enter the Client Secret [$oauth2_client_secret]: " input
    oauth2_client_secret=${input:-$oauth2_client_secret}
fi

### set drupal variables and configs
alias=${1:-@bcl}
skip_ssl=1
drush --yes $alias php-script $(dirname $0)/oauth2_login.php  \
    "$oauth2_server_url" "$oauth2_client_id" "$oauth2_client_secret" "$skip_ssl"
drush $alias cc all
