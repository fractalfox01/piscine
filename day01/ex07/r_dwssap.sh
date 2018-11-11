cat /etc/passwd | grep -e ':' | head -n $FT_LINE2 | tail -n $FT_LINE1 | cut -d: -f1 | awk 'NR>=5&&NR<=9' | rev | awk '{printf "%s,",$0} END {print ""}' | sed 's/,$/./'
