for i in range(int(input( ))):
    N, x, k = map(int, input().split())
    if (x)%k == 0:
        print("YES")
    elif (N - x + 1) % k == 0:
        print("YES")
    else:
        print("NO")
