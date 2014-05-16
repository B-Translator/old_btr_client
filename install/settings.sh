
### Default settings for building the chroot.
target_dir='bcl'
arch='i386'
suite='precise'
apt_mirror='http://archive.ubuntu.com/ubuntu'

### A reboot is needed after installation/configuration.
### If you want to do it automatically, set it to 'true'.
reboot='false'

### Domain of the website.
bcl_domain='example.org'

### Drupal 'admin' password.
bcl_admin_passwd='admin'

### Emails from the server are sent through the SMTP
### of a GMAIL account. Give the full email
### of the gmail account, and the password.
gmail_account='MyEmailAddress@gmail.com'
gmail_passwd=

### Translation language of B-Translator Client.
bcl_translation_lng='fr'

### Mysql passwords. Leave it as 'random'
### to generate a new one randomly
mysql_passwd_root='random'
mysql_passwd_bcl='random'

### Settings for OAuth2 Login.
oauth2_server_url='https://dev.btranslator.org'
oauth2_client_id='client1'
oauth2_client_secret='0123456789'
