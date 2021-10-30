t = int(input())
l = []
for x in range(t):
    s = str(input())
    rs = str(s[::-1])
    if s == rs:
        l.append(True)
    else:
        l.append(False)
print(*l, sep='\n')