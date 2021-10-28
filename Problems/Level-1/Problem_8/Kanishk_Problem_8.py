'''
Kanishk's Solution for Problem 8
# Problem 8

Given a number, return True if its a palindrome number, else return False.
'''

ans="n"
while ans == "n" :
    L1 = []
    n = int(input("Enter number of elements : "))
    for i in range(0, n):
	    e = int(input())

	    L1.append(e)
	
    print(L1)
    ans = str(input("Are you fine with the list you entered? y for Yes n for No: "))
    
for number in L1:
    temp=number
    reverse_num=0
    while(number>0):
        digit=number%10
        reverse_num=reverse_num*10+digit
        number=number//10
    if(temp==reverse_num):
        print("True")
    else:
        print("False")