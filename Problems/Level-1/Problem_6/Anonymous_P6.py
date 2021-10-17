

def rem_vowel(string):
    vowels = ['a','e','i','o','u']
    result = [letter for letter in string if letter.lower() not in vowels]
    result = ''.join(result)
    print(result)
 
n=int(input("Enter "))
#i=n
List=[]
while(n!=0):
    string = input()
    List.append(string)                                   #rem_vowel(string)
    n=n-1
#a=0
#while(a!=i):
    for s in List:
        rem_vowel(s)
    #a=a+1


