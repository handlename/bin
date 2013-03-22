#!/bin/sh

module=`perldoc -ml $1`

if [ ! -e $module ] ; then
    echo "no such module";
else
    open -a /Applications/Emacs.app $module;
fi
