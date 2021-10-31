#CHECK FOR PALINDROME 
def isPali(str):
    str = str.lower().replace(" ", "")
    if(str == str[::-1]):
        print(1)
    else:
        print(0)
    
if __name__ == "__main__":    
    test = int(input())
    for i in range(0, test):
        s = input()
        isPali(s)
        
  