ldapsearch -LLLQ 'cn=*bon*' dn | grep -E '^dn: ' | wc -l | tr -d ' \t'  
