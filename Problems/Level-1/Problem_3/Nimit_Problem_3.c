#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k,j;
    scanf("%d %d",&k,&j);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        /* code */
    }
    float sum_k = 0,sum_j = 0;
    for (int i = 0; i < k; i++)
    {
        sum_k = sum_k + arr[i];
        /* code */
    }
    for (int i = 0; i < j; i++)
    {
        sum_j = sum_j + arr[n-i-1];
        /* code */
    }
    printf("%0.1f",(sum_k/k)-(sum_j/j));
    
    
}