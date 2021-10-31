test_cases = int(input())
vowels = "aeiou"


for i in range(test_cases):

    word = input()

    for i in word:
        if i.casefold() in vowels:
            continue
        else:
            print(i,end="")
    print()

