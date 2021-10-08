import sympy

def solution(listp):
    sum=0;
    for i in range(0,n):
        if(sympy.isprime(int(listp[i]))):
            sum=sum+int(listp[i])  
    print(sum)  

n=int(input())
inp_list=input()
list1=inp_list.split()
solution(list1)