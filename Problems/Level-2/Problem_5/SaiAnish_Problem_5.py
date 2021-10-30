def ispali(s):
    s2=""
    for i in s:
        s2=i+s2
    if(s2==s):
        print("1")
    else:
        print("0")

n=int(input())
s=[]
for i in range(n):
    temp=str(input()).lower().replace(" ","")
    s.append(temp)
for i in range(n):
    ispali(s[i])