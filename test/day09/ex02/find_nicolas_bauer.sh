 cat $1 | grep -i ^Nicolas | grep -i Bomber | grep '[0-9]\{3\}-[0-9]\{4\}' | cut -f3 -d$'\t'
