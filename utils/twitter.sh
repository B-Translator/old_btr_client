#!/bin/bash
### Send tweets from command line.
### For installation instructions see:
### http://xmodulo.com/2013/12/access-twitter-command-line-linux.html

t='/usr/local/bin/t'
base_url=https://l10n.org.al
tweet=$(curl -k $base_url/translations/twitter)
mention=$($t followings | sort -R | tail -1)
$t update "$tweet @$mention"
