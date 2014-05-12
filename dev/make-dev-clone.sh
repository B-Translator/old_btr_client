#!/bin/bash -x

### get a copy of 'btr_client' to /var/www/github/btr_client/
mkdir -p /var/www/github/
cd /var/www/github/
test -d btr_client || git clone https://github.com/B-Translator/btr_client.git
cd btr_client/
git pull

### make a clone of /var/www/bcl to /var/www/bcl_dev
dev/clone.sh bcl bcl_dev
