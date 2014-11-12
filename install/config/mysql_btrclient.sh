#!/bin/bash
### set password for the mysql user bcl

### get a new password for the mysql user 'bcl'
if [ "$mysql_passwd_bcl" = 'random' ]
then
    mysql_passwd_bcl=$(mcookie | head -c 16)
elif [ -z "${mysql_passwd_bcl+xxx}" -o "$mysql_passwd_bcl" = '' ]
then
    echo
    echo "===> Please enter new password for the MySQL 'bcl' account. "
    echo
    mysql_passwd_bcl=$(mcookie | head -c 16)
    stty -echo
    read -p "Enter password [$mysql_passwd_bcl]: " passwd
    stty echo
    echo
    mysql_passwd_bcl=${passwd:-$mysql_passwd_bcl}
fi

### set password
source $(dirname $0)/set_mysql_passwd.sh
set_mysql_passwd bcl $mysql_passwd_bcl

### modify the configuration file of Drupal (settings.php)
for file in $(ls /var/www/bcl*/sites/default/settings.php)
do
    sed -i $file \
	-e "/^\\\$databases = array/,+10  s/'password' => .*/'password' => '$mysql_passwd_bcl',/"
done
