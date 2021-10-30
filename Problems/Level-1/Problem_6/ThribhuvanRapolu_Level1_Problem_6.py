
numberword=int(input())
for i in range(numberword):
     def vowels(s):     
         newstr = s
         vowels = ('a', 'e', 'i', 'o', 'u','A','E','I','O','U')
         for x in s:
            if x in vowels:
               newstr = newstr.replace(x,"")
         return newstr
     s=input()
     vowels(s)
     print("".join(map(vowels,s)))
