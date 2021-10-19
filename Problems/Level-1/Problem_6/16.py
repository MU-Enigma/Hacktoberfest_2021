str = input()

for x in str:
    if x in "AEIOUaeiou":
        str = str.replace(x, "")
print(str)