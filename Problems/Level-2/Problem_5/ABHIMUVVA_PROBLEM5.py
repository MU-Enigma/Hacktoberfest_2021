n = int(input())
a = 0
while(a < n):
    string = input().lower()
    
    string = string.replace(' ', '')
    
    str2 = string[::-1]
    
    if(string == str2):
        print(1)
    
    else:
        print(0)
    
    a += 1
