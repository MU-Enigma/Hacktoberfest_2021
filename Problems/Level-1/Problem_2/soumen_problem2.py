s=int(input())
if(s>0):
    li=[int(x) for x in input().split()]
    a=True
    for i in range(0, len(li)):
        if (i%2==0 and li[i]%2==0 ):
            print(li[i], end=" ")
            a=False
    if(a==True):
        print("None")