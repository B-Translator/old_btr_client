api = 2
core = 7.x

;------------------------------
; Build Drupal core (with patches).
;------------------------------
includes[drupal] = drupal-org-core.make

;------------------------------
; Get profile btr_client.
;------------------------------
projects[btr_client][type] = profile
projects[btr_client][download][type] = git
projects[btr_client][download][url] = /usr/local/src/btr_client
projects[btr_client][download][branch] = master
