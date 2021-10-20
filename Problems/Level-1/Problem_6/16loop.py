i = 0
n = int(input())
for x in range(n):
    str = input()
    for x in str:
        if x in "AEIOUaeiou":
            str = str.replace(x, "")
    print(str)