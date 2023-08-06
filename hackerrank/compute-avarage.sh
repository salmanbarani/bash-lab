read n
sum=0

for ((i = 0; i <n; i++)); do
	read line
	((sum+=$line))
done

printf "%.3f" $(echo "$sum / $n" | bc -l)

