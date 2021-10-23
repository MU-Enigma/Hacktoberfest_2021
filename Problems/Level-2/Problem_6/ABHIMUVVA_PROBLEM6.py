L = []
L1 = []
L2 = []

n = int(input())
for i in range(0, n):
    x = int(input())
    L.append(x)
    if(L[i] % 2 == 0):
        L1.append(L[i])
    else:
        L2.append(L[i])

L1.sort()
L2.sort()

a = 0; b = 0

for i in range(0, n):
    if(i % 2 == 0):
            print(L2[a], '' , end = '')
            a += 1
    else:
            print(L1[b],'', end = '')
            b += 1

print('\b')
#     if(L[i] % 2 == 0):
#         L1.append(L[i])
#     else:
#         L2.append(L[i])

# for



# print(L)
