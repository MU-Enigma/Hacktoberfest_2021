# Time complexity :- O(n), n is the size of the array

def func(arr ,n):
    # Assuming the length of array is greater than 2
    
    mostfreq = -1
    i = 0
    while i < n-1:        
        i1, i2 = arr[i] ,arr[i+1]
        print(i1, i2)
        
        if i1 == i2:
            mostfreq = i1
            i += 2
            
        else:
            if mostfreq == -1:
                if arr[i+2] == arr[i]:
                    return (i+1 , abs(i1 - i2))
                
                else:
                    return (i , abs(i1 - i2))
                    
                
                
            else:
                if i1 == mostfreq:
                    return (i+1 ,abs(i1 - i2))
                
                else:
                    return (i , abs(i1 - i2))
                
                
    if n%2 != 0 and i > n-2:
        return n-1 , abs(arr[n-1] - arr[n-2])
            

inp = [int(x) for x in input().split()]
n = inp[0]
arr = inp[1:]
if len(arr) != n:
    print("Wrong Input")
    
else:
    index , diff = func(arr,n)
    print(index, diff)