#to check if the given string in is lexographical order

runs=int(input())
for i in range(runs) :
    sample=input()
    answer= True
    for x in range(len(sample)-1) :
        if sample[x]> sample[x+1] :
            answer = False
            break
    if answer :
        print("true")
    else :
        print("false")
