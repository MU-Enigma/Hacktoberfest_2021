l = []


def islexographical():
    n = int(input())
    for w in range(n):
        x = input()
        y = list(x)
        z = sorted(x)
        if z == y:
            l.append(True)
        else:
            l.append(False)


islexographical()


print(*l, sep='\n')
