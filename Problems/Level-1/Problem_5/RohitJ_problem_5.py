import sympy
n=int(input())
l = list(map(int,input().strip().split(' ')))[:n]
t=[]


for i in range(n):
    if sympy.isprime(l[i])==True:
        t.append(l[i])

s1=0
x=len(t)
for i in range(x):
    s1=s1+t[i]

print(s1)