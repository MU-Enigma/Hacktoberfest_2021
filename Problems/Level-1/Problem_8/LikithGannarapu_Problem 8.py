n = int(input())
for i in range(n):
    t = input()
    t_rev=t[::-1]
    if t_rev == t:
        print(True)
    else:
        print(False)
