
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int k, j;
    scanf("%d %d", &k, &j);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    float ksum, jsum;
    for(int i=0; i<k; i++)
    {
        ksum= ksum+arr[i];
        
    }
    for(int i=n-j; i<n; i++)
    {
        jsum= jsum+arr[i];
    }
    ksum=ksum/k;
    jsum= jsum/j;
    float final= ksum-jsum;
    printf("%0.1f", final);
}

