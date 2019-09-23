echo "enter the three numbers"
read x
read y
read z
if [ $x -gt $y -a $x -gt $z ]
then
echo " $x is greater"
elif [ $y -gt $x -a $y -gt $z ]
then
echo " $y is greater"
else
echo " $z is greater"
fi
