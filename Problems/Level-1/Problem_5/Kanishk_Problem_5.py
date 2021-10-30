'''
Kanishk's Solution for Problem 5
# Problem 5

Make a function that takes a list of numbers and returns the sum of all prime numbers in the list.

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
    
s = 0
for num in L1:
    i = 2
    p = 1
    while i <= num / 2:
        if num % i == 0:
            p = 0
            break
        i = i + 1
    if p == 1:
        s = s + num
print("sum of all prime numbers in the list is:", s)

    


