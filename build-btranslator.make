api = 2
core = 7.x

;------------------------------
; Build Drupal core (with patches).
;------------------------------
includes[drupal] = https://raw.github.com/B-Translator/client/master/drupal-org-core.make
;includes[drupal] = drupal-org-core.make

;------------------------------
; Get profile btrclient.
;------------------------------
projects[btrclient][type] = profile
projects[btrclient][download][type] = git
projects[btrclient][download][url] = https://github.com/B-Translator/client.git
;projects[btrclient][download][url] = /var/www/B-Translator
;projects[btrclient][download][branch] = dev
