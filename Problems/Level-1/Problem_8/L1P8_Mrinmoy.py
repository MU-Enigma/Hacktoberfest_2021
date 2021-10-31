#Palindrome
def isPali(str):
    if(str == str[::-1]):
        print(True)    
    else:
        print(False)
    
if __name__ == "__main__":    
    test = int(input())
    for i in range(0, test):
        s = input()
        isPali(s)
        