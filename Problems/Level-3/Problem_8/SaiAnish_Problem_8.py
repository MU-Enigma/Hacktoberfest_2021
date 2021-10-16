def solution(s,n):
    name=['A']
    vowels=[]
    cons=[]
    l=[]
    l[:0]=s
    for i in range(0,len(l)):
        if(l[i]=='A'or l[i]=='E'or l[i]=='I'or l[i]=='O'or l[i]=='U'or l[i]=='a'or l[i]=='e'or l[i]=='i'or l[i]=='o'or l[i]=='u'):
            vowels.append(l[i])
        else:
            cons.append(l[i])
    for i in range(0,5):
        name.append(vowels[i])
    c=0
    for i in range(0,n):
        temp=[]
        for i in name:
            temp.append(i)
        temp.append(cons[c])
        ascii_values = []
        strname=""
        for ele in temp:
            strname+=ele
        for character in strname:
            ascii_values.append(ord(character))
        sum=0
        for i in ascii_values:
            sum=sum+i
        temp.append(str(sum))
        final=""
        for ele in temp:
            final+=ele
        print(final)
        c+=1


n=int(input())
string=input()
solution(string,n)