api = 2
core = 7.x

;--------------------
; Specify defaults
;--------------------

defaults[projects][subdir] = contrib

; ;--------------------
; ; Bootstrap Theme
; ;--------------------
;
; projects[bootstrap] = 2.2
; projects[jquery_update] = 2.4
;
; libraries[bootstrap][directory_name] = bootstrap
; libraries[bootstrap][download][type] = get
; libraries[bootstrap][download][url] = https://github.com/twbs/bootstrap/archive/v3.0.0.zip

;--------------------
; Custom
;--------------------

projects[btrclient] = 1.x-dev

;--------------------
; Contrib
;--------------------

;;; Extensions
projects[xautoload] = 4.5
projects[rules] = 2.7

; ;;; User interface
; projects[context] = 3.2
; projects[homebox] = 2.0-beta7
; projects[boxes] = 1.2
projects[edit_profile] = 1.0-beta2

;;; Security
projects[captcha] = 1.1
projects[recaptcha] = 1.11
projects[honeypot] = 1.17
projects[user_restrictions] = 1.0

;;; Features
projects[features_extra] = 1.0-beta1
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
;projects[mimemail] = 1.0-beta3
projects[reroute_email] = 1.1

;projects[phpmailer] = 3.x-dev
projects[phpmailer][download][revision] = 8f7c632
projects[phpmailer][download][branch] = 7.x-3.x

libraries[phpmailer][directory_name] = phpmailer
libraries[phpmailer][download][type] = get
libraries[phpmailer][download][url] = https://github.com/PHPMailer/PHPMailer/archive/v5.2.6.zip
