n = int(input())
foo =[]
temp = ""

for i in range(n):
    v = int(input())
    foo.append(v)

for i in range(n):
    if i%2==0 and foo[i]%2==0:
        temp += f"{str(foo[i])} "
    
if temp:
    print(temp)
else:
    print(None)