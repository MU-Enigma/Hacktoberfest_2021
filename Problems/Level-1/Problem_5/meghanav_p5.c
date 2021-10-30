#include<stdio.h>

int main()
{
    int n;
    //printf("Enter a number: ");
    scanf("%d",&n);
    int arr[n];
    //printf("Enter %d numbers in the array: ",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    
    for (int i=0; i<n;i++)
    {
        int j=2;
        int k=1;
        while(j<arr[i])
        {
            if (arr[i]%j==0)
            {
            k=0;
            break;
            }
            j++;
        }
    
        if (k==1)
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}