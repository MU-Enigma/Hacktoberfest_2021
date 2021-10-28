'''
Kanishk's Solution for level 1 Problem 1
# Problem 1

Given a string as input, return the reversed string with the caps swapped.
'''

ans="n"
while ans == "n" :
    L1 = []
    n = int(input("Enter number of elements : "))
    for i in range(0, n):
	    e = str(input())

	    L1.append(e)
	
    print(L1)
    ans = str(input("Are you fine with the list you entered? y for Yes n for No: "))
    
for x in L1:
    
    vowellist = ['a','e','i','o','u']
    result = [letter for letter in x if letter.lower() not in vowellist]
    result = ''.join(result)
    print(result)