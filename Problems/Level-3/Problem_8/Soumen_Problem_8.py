def order(a):
    sum=0
    for i in a:
        sum=sum+ord(i)
    return sum

    
        
s=int(input())
str=input()
index=-1
for m in range(0,s):
    count=0
    a=''
    for i in str:
        if(i=='A' or i=='E' or i=='I' or i=='O' or i=='U'or i=='a' or i=='e' or i=='i' or i=='o' or i=='u'):
             a=a+i
             count+=1
        if(count==5):
             break
    for j in range(0,len(str)):   
        if(j==index):
            continue
        if(str[j]!='A' and str[j]!='E' and str[j]!='I' and str[j]!='O' and str[j]!='U' and str[j]!='-1' and j>index and i!='a' and i!='e' and i!='i' and i!='o' and i!='u'):
             a=a+str[j]
             index=j
             break
    a='A'+ a             
    finalnumber= order(a)
    print(a,end="")
    print(finalnumber)