import sympy

n=int(input())
input=input().split()
if(len(input) == 0):
	print("0")
	exit
else:
	sum = 0
	for i in range(n):
		if(sympy.isprime(int(input[i]))):
			sum=sum+int(input[i])
	print(sum)
