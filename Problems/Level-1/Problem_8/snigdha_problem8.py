lst = []
N=int(input(""))
for i in range(0,N):
 string=input(" ")
 lst.append(string)
    
for i in range(0,N):
 if(lst[i]==lst[i][::-1]):
      print("True")
 else:
      print("False")
      