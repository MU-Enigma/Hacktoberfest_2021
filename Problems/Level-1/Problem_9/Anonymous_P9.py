

def lex(str):
    i=0
    while(i<(len(str)-1)):
        if(str[i]>str[i+1]):
            return False
        i=i+1
    return True

    #----------------------------
#print("Begin")
test=int(input())
list=[]
while(test!=0):
    #s=input()
    list.append(input())
    test=test-1

for elem in list:
    if(lex(elem)==True):
        print("True")
    else:
        print("False")


#ARR Anonymous