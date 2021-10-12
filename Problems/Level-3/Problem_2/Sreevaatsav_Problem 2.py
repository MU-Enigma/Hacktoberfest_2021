# Brute force method of finding the square sub-matrices whose avg >= given number
def averageMat(arr, m, row, col):
    tot = 0
    for i in range(row, row+m):
        for j in range(col, col+m):
            tot += arr[i][j]
    return tot/(m*m)

def numSqMats_Brute_Force(arr, m, target):
    tot = 0
    size = 1
    while size <= m:
        print("size =", size)
        i = 0
        while i < m - size + 1:
            j = 0
            while j < m - size + 1: 
                avg = averageMat(arr, size, i, j)
                print(avg," " ,i, j)
                if avg >= target:
                    tot += 1
                    
                j += 1
            i += 1
            
        size += 1
        print()
        
    return tot


# Optimised code by excluding few reduntant counting 
def numSqMats(arr, m, target):
    tot = 0
    size = 1
    while size <= m:
        i = 0
        while i < m - size + 1:
            j = 0
            while j < m - size + 1: 
                avg = averageMat(arr, size, i, j)
                if avg >= target:
                    tot += m - j - size + 1
                    j = m - size + 1
                    continue
                    
                else:
                    j += 1
                    
            i += 1
            
        size += 1
        
    return tot

m = int(input())
target = int(input())
arr = [[int(x) for x in input().split()] for i in range(m)]
ans = numSqMats(arr, m, target)

print(ans)