def revcaps():
    n=int(input(''))
    l=[]
    p=[]
    for i in range (n):
        s=input('')
        p.append(s)
    for v in p:
        j=v[::-1]
        k=j.swapcase()
        l.append(k)
    for m in l:
        print(m)
revcaps()