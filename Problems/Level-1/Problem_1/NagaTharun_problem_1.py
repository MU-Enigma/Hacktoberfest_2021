
t = int(input())
while(t>0):
    given = input()
    rev_given = given[::-1]
    rev_swap = rev_given.swapcase()
    print(rev_swap)
    t += -1
    