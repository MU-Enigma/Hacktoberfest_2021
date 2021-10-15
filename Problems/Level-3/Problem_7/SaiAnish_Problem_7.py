def solution(letters,n):
    prev=None
    chars=[]
    for c in letters:
        if prev!=c:
            chars.append(c)
            prev=c
    str1=""
    for ele in chars:
        str1+=ele
    tot=0
    for i in chars:
        x=str1.count(i)
        tot=tot+x
    if(tot==len(str1)):
        print("YES")
    else:
        print("NO")


n=int(input())
list1=[]
nol=[]
for i in range(0,n):
    x=int(input())
    nol.append(x)
    qorder=str(input())
    list1.append(qorder)
for i in range(0,n):
    solution(list1[i],nol[i])