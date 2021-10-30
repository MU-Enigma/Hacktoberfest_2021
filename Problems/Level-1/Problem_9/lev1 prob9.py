l = []
def islexographical():
    n = int(input())
    for w in range(n):
        x = str(input())
        y = sorted(x)
        z = ''.join(y)
        l.append(z)


islexographical()

print(*l, sep='\n')
