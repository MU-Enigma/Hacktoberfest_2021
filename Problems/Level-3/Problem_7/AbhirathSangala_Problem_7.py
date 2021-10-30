def test_suspicion(x):
    letters = {}
    for alpha in x:
        letters[alpha] = False
    prev_char = ""
    for alpha in x:
        if letters[alpha]:
            if not alpha == prev_char:
                return 0
        else:
            letters[alpha] = True
        prev_char = alpha
        
    return 1


test_cases = int(input())
responses = []

for casenum in range(test_cases):
    time_spent = int(input())
    question_order = input()
    responses.append(test_suspicion(question_order))

for response in responses:
    if response == 1:
        print("YES")
    else:
        print("NO")

