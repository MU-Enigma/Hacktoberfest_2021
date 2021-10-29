n = int(input())
v = ("aeiou")
for i in range(n):
    t = input()
    l=t.lower()
    for x in v:
        l = l.replace(x, "")
    print(l)





