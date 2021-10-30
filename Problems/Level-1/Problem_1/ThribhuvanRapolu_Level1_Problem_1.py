numberword=int(input())
for i in range(numberword):
    def swap_case(s):
        for j in range (len(s)):
            if s[j].isupper():
                 return s[j].lower()
            elif s[j].islower():
                return s[j].upper()
            else:
                return s[j]
    s=input()
    swap_case(s)
    print("".join(map(swap_case,s)))