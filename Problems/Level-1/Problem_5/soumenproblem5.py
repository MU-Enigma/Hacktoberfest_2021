#time
def isprime(a):
    count=0
    for j in range(2,a//2+1):
        if a%j==0:
            count=count+1
    if(count>=1 or a==1):
        return False
    else:
        return True
def primesum(li):
    sum=0
    for i in li:
        flag=isprime(i)
        if(flag==True):
            sum=sum+i
    return sum
s=int(input())
li=[int(x) for x in input().split()]
out=primesum(li)
print(out)