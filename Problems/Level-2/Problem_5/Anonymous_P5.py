#print("Begin")
test=int(input())
s=" "
list=[]
while(test!=0):
    s=input()
    B=s.replace(" ", "")
    B=B.lower()
    list.append(B)
    test=test-1
r=""
for str in list:
    r=str[::-1]
    if(str==r):
        print("1")
    else:
        print("0")

#ARR Anonymous

