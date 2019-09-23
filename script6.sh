n=0
fact=1
g=0
y=1
echo "enter no to find the factorial:"
read n
g=$n
while [ $n -ge $y ]
do
fact=` expr $fact \* $n `
n=` expr $n - 1 `
done
echo "$fact"
