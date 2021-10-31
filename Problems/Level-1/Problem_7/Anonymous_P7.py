

def RD(str, n):
    index = 0
     
    i=0
    j=0
    while(i<n):
         
    
        while(j<i+1):
            if (str[i] == str[j]):
                break
            j=j+1
                 
        
        if (j == i):
            str[index] = str[i]
            index += 1

        i=i+1     
    return "".join(str[:index])
 
# ------------------------------------------
List=[]
print("Enter")
test=int(input())
while(test !=0):
    s=input()
    List.append(s)
    test=test-1

for str in List:
    n = len(str)
    print(RD(list(str), n))

#ARR Anonymous