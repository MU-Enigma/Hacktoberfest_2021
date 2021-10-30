#to check if a given number is a palindrome

runs=int(input())
for i in range(runs) :
    sample=input()
    reverse=sample[::-1]
    if sample==reverse :
        print(True)
    else :
        print(False)
