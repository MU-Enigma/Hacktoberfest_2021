n=int(input())
l=[]
for i in range(n):
    s=input()
    str_rev=s[::-1]
    str_swap=str_rev.swapcase()
    l.append(str_swap)
    i=i+1

for i in range(n):
    print(l[i])