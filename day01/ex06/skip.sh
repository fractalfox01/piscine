show=true
for file in *
do
	if [ $show = true ]
	then echo $file; show=false
	else show=true
	fi
done |
xargs ls -l
