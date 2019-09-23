echo "enter the number"
read num
ans=0
n=$num
while [ $n -gt 0 ]
do
q=`expr $n % 10`
ans=`expr $ans + $q \* $q \* $q`
n=`expr $n / 10`
done
if [ $ans -eq $num ]
then
echo "number is armstrong"
else
echo "number is not armstrong"
fi
