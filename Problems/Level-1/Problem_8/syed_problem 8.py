def palindromnos():
    l=[]
    n=int(input())
    for i in range(n):
        s=input()
        l.append(s)
    for h in l:
        if h[::1]==h[::-1]:
            print('True')
        else:
            print('False')
palindromnos()