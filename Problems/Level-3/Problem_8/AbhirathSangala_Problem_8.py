vowels = ['A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u']
def get_vowels_and_negative(x, l, n=5):
    vowelS = ""
    negative = ""
    pleasenomorevowels = False
    for alpha in x:
        vowelB = False
        for vowel in vowels:
            if alpha == vowel:
                if not pleasenomorevowels:
                    vowelS += alpha
                vowelB = True
                break
        if not vowelB:
            negative += alpha
        if len(vowelS) == n:
            pleasenomorevowels = True
            if len(negative)>=l:
                return vowelS, negative
    return [False, False]

def print_names(x, l):
    name = ""
    vowelstring, negative = get_vowels_and_negative(x, l)
    if not vowelstring:
        print("INVALID STRING INPUT")
        exit()
        
    for n in range(l):
        name = "A"+vowelstring+negative[n]
        SUM = 0
        for alpha in name:
            SUM += ord(alpha)
        name += str(int(SUM))
        print(name)
        

elem_num = int(input())
string = input()

print_names(string, elem_num)

