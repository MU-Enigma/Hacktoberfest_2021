def solution(listp,n):
    even=[]
    odd=[]
    n=int(n)
    for i in range(0,n):
        listp[i]=int(listp[i])
    for i in range(0,n):
        if(int(listp[i])%2==0):
            even.append(listp[i])
        else:
            odd.append(listp[i])
    even.sort()
    odd.sort()
    e=len(even)
    o=len(odd)
    final=[]
    for i in range(0,n):    
        if i<o:    
            final.append(odd[i])
        if i<e:
            final.append(even[i])
    for i in range(0,n):
        print(final[i],end=" ")
    print("\n")

n=int(input())
list1=[]
no_of_ele=[]
for i in range(0,n):
    no_of_ele.append(input())
    int_list=input().split()
    list1.append(int_list)
for i in range(0,n):
    solution(list1[i],no_of_ele[i])