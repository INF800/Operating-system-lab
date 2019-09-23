echo "Enter the Number"
read a
if [ $a -eq 0 ]
then
echo "it is zero"
elif [ $a -gt 0 ]
then
echo " it is a positive number"
else
echo " it is a negative number"
fi
