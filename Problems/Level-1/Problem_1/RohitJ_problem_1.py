n=int(input())
count=0
l=[]
while(count<n):
    str1=input()
    strrev=str1[::-1]
    strswap=strrev.swapcase()
    l.append(strswap)
    count=count+1

for i in range(n):
    print(l[i])
