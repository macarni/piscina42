#!/bin/bash
cat /etc/passwd | grep -v "^#" | awk "NR%2==0" | awk -F ":" '{print " ," $1}' | rev | sort -r | awk "NR >=$FT_LINE1 && NR <=$FT_LINE2 {print}" | tr -d "\n" | sed "s/..$/./" | tr -d '\n'