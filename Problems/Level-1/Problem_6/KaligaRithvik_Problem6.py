testcase = int(input())
for x in range(testcase):
    vow_str = input()
    for vowel in vow_str:
        if vowel in "AaEeIiOoUu":
            vow_str = vow_str.replace(vowel, "")
    print(vow_str)