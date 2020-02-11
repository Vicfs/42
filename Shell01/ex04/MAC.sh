ifconfig | grep "ether" | sed 's/ *ether //' | cut -f 2 | sed 's/ //' 
