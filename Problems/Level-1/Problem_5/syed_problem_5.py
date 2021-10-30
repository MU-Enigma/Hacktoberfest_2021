import sympy
def sumprime(l):
    k=[]
    s=0
    for i in l:
        if(sympy.isprime(i)):
            k.append(i)

    for h in k:
        s=s+h
    print(s)
s = int(input())
li = [int(x) for x in input().split()]
sumprime(li)