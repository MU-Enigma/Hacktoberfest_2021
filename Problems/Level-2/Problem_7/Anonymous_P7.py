
#print("Begin")
test=int(input())
time=[]
while(test!=0):
    time.append(input())
    test=test-1

for element in time:
    if(int(element[:2])<10):
        print(element[1:2])
    else:
        print(element[:2])

#ARR Anonymous
