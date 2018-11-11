ldapsearch -Q -LL "uid=z*" | grep -e "cn: Z" | sort -r | cut -c5-
