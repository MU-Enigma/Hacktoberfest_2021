n=int(input())
l = list(map(int,input().strip().split(' ')))[:n]
flag=0

for i in range(n):
    if l[i]%2==0 and i%2==0:
        print(l[i],end=" ")
        flag+=1
if flag==0:
    print("None")
