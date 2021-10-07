def solution(HeightOfLetters, word):
    MaxHeight = 0
    for letter in word:
     if MaxHeight < HeightOfLetters[(ord(letter) & 31)]:
           MaxHieght = HeightOfLetters[(ord(letter) & 31) + 1]
    return MaxHeight





if __name__ == "__main__":
    HeightOfLetters = [1,3,1,3,1,4,1,3,2,5,5,5,5,1,1,5,5,1,5,2,5,5,5,5,5,5]

    word = input()
    MaxHeight = solution(HeightOfLetters, word)
    print(MaxHeight - len(word))

