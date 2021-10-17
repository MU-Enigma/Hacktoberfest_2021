test_cases = int(input())

for i in range(test_cases):
    number = input()

    number_rev = number[::-1]


    if number == number_rev:
        print(True)
    else:
        print(False)

