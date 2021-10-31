N=int(input(""))
lst=[]
for i in range (0,N):
 elem=int(input(""))
 lst.append(elem)

for i in range (0,N):
 sum=0
 for j in range (0,lst[i]):
  if j%5==0 or j%7==0:
   sum=sum+j
 print(sum)