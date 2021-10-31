
#print("Begin")
test=int(input())
r=test
OL=[]
EL=[]
t=0
while(test!=0):
    t=int(input())
    if(t%2!=0):
        OL.append(t)
    else:
        EL.append(t)
    test=test-1
OL.sort()
EL.sort()

j=0
k=0
while(r!=0):
    if(r%2!=0):
        print(EL[j], end="\t")
        j=j+1
    else:
        print(OL[k], end="\t")
        k=k+1
    r=r-1

#ARR Anonymous