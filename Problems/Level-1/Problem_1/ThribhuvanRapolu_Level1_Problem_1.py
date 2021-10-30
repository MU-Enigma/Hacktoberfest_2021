numberword=int(input())
for i in range(numberword):
    def swap_case(s):
        ans=""
        ch=""
        j=len(s)-1
        while j>=0:
            if s[j].isupper():
                 ans+=s[j].lower()
            elif s[j].islower():
                 ans+=s[j].upper()
            else:
                 ans+=s[j]
            j=j-1
        print(ans)       
    s=input()
    swap_case(s)
    
