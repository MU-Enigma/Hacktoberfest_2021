def convert_to_intarr(x, l):
    l = int(l)
    for i in range(l):
        x[i] = int(x[i])
    return x, l

def print_pair(p):
    string = ""
    no_transaction = 0
    for i in p:
        if i == 0:
            no_transaction += 1
        string += str(i) + " "
    print(string)
    if no_transaction == 3:
        print("(no transaction is done in this case)")


def input_check(x):
    for item in x:
        if item < 0:
            print("error\n(price can't be negative)")
            exit()

def getmaxdiff(x, l):
    #Uses bruteforce
    current_pair = [0, 0, 0]
    for i in range(l):
        for index, forward_element in enumerate(x[i+1:l]):
            diff = forward_element - x[i]
            if diff > current_pair[2]:
                current_pair = [x[i], forward_element, diff]

    return current_pair

raw_input = input()
tokenized_input = raw_input.split(" ")
days, prices = tokenized_input[0], tokenized_input[1:]

prices, days = convert_to_intarr(prices, days)
input_check(prices)
pair = getmaxdiff(prices, days)
print_pair(pair)
