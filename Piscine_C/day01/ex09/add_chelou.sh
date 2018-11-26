N1=$(echo $FT_NBR1 | tr \'\\\\\"?\! 01234)
N2=$(echo $FT_NBR2 | tr mrdoc 01234)

echo "ibase=5; obase=D; $N1 + $N2" | bc | tr '0123456789ABC' 'gtaio luSnemf'
