t = int(input())
for x in range(t):
    w = input()
    w = w.lower()
    for y in w:
        if y in 'aeiou':
            w = w.replace(y, '')
    print(w)
