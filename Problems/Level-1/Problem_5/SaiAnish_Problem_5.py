import sympy

def solution(listp):
    sum=0
    for i in range(0,n):
        if(sympy.isprime(int(listp[i]))):
            sum=sum+int(listp[i])
    print(sum)

n=int(input())
if(n==0):
    print("0")
    exit
else:
    int_list=input().split()
    list1=int_list
    solution(list1)