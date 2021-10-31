#include<stdio.h>


int main ()
{
    int n,k,j;
    scanf("%d%d%d",&n,&k,&j);
    
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    float sum1 = 0,sum2 = 0;
    
    for(int i=0;i<k;i++)
    {
        sum1 = sum1 + arr[i];
    }
    sum1 =(float)sum1/k;
    
    for(int i=n-1;i>n-1-j;i--)
    {
        sum2 = sum2 + arr[i];    
    }
    
    sum2 =(float)sum2/j;
    
    printf("%0.1f",sum1-sum2);
    
}