IP=`ifconfig | grep "inet " | cut -d ' ' -f2 | awk '($0 != "127.0.0.1") {print}'`
if [[ IP == "" ]]; then
	echo "I am lost!\n"
 else
	echo "$IP"
fi
