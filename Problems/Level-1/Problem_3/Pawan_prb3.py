n=int(input())
start=int(input())
end=int(input())
li=[int(x) for x in input().split()]
sum1=0
sum2=0
for i in range(0,start):
    sum1+=li[i]
for j in range(len(li)-1,len(li)-end-1,-1):
    sum2=sum2+li[j]
print((sum1/start)-(sum2/end))