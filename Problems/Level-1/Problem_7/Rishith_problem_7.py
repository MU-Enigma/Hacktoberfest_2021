#Returning a new string by removing duplicate characters

runs=int(input())
for i in range(runs) :
    sample=input()
    result=''
    test=[]
    for x in sample :
        if x not in test :
            result=result+x
            test.append(x)
    print(result)
