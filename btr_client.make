api = 2
core = 7.x

;--------------------
; Specify defaults
;--------------------

defaults[projects][subdir] = contrib


;--------------------
; Custom
;--------------------

;projects[btrclient] = 2.x-dev
projects[btrclient][type] = module
projects[btrclient][download][type] = git
projects[btrclient][download][url] = https://github.com/B-Translator/btrclient.git
projects[btrclient][download][branch] = 7.x-2.x

;--------------------
; Contrib
;--------------------

;;; Extensions
projects[xautoload] = 5.2
projects[rules] = 2.9
projects[edit_profile] = 1.0-beta2

;;; Security
projects[captcha] = 1.3
projects[recaptcha] = 2.0
projects[honeypot] = 1.19
projects[user_restrictions] = 1.0

;;; Features
projects[features_extra] = 1.0
projects[node_export] = 3.0

;;; Admin Utils
projects[] = l10n_update
projects[] = drush_language
projects[] = drush_remake
projects[] = delete_all
projects[] = menu_import

;;; Performance
projects[] = boost
projects[] = memcache

;--------------------
; Sending Emails
;--------------------

;projects[mailsystem] = 2.34
;projects[mimemail] = 1.0-beta4
projects[reroute_email] = 1.2

;projects[phpmailer] = 3.x-dev
projects[phpmailer][download][revision] = 8f7c632
projects[phpmailer][download][branch] = 7.x-3.x

libraries[phpmailer][directory_name] = phpmailer
libraries[phpmailer][download][type] = get
libraries[phpmailer][download][url] = https://github.com/PHPMailer/PHPMailer/archive/v5.2.9.zip
