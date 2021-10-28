def evenindiceno(l):
    m=[]
    for i in range (len(l)):
        if i%2==0 and l[i]%2==0:

            m.append(l[i])
        else:
            continue
    if len(m)>0:
        for u in m:
            print(u,end=' ')
    else:
        print('None')
s=int(input())
li=[int(x) for x in input().split()]
evenindiceno(li)