api = 2
core = 7.x

;------------------------------
; Build Drupal core (with patches).
;------------------------------
includes[drupal] = https://raw.github.com/B-Translator/btr_client/master/drupal-org-core.make
;includes[drupal] = drupal-org-core.make

;------------------------------
; Get profile btr_client.
;------------------------------
projects[btr_client][type] = profile
projects[btr_client][download][type] = git
projects[btr_client][download][url] = https://github.com/B-Translator/btr_client.git
;projects[btr_client][download][url] = /var/www/btr_client
;projects[btr_client][download][branch] = dev
