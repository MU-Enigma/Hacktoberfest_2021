

def Diff(arr, i, J,K):
 
    if (i == 0):
        return abs((K - J) -J)
 
    return min(Diff(arr, i - 1,J+arr[i - 1],K),Diff(arr, i - 1,J, K))
#------------------------------------------------- 
def fMin(arr,  n):
 
    # Compute total sum
    # of elements
    K = 0
    for i in range(n):
        K += arr[i]
    
    return Diff(arr, n,0, K)
#-----------------------------------
if __name__ == "__main__":
 
    arr = []
    print("Begin")
    n = int(input())
    while(n!=0):
        arr.append(int(input()))
        n=n-1
    
    print(fMin(arr, n))

#ARR Anonymous

