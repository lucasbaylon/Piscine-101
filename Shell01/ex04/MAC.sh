ifconfig | grep "ether " | cut -c8- | awk '{print $1}'
