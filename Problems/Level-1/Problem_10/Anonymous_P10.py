
#print("Begin")
N=int(input())

Array=[]
while(N!=0):
    Array.append(int(input()))
    N=N-1
if(Array.sort()==None):
    for elem in Array:
        print(elem, end='\t')
else:
    print(Array.sort())


#ARR Anonymous

