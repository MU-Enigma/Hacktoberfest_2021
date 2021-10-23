#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int flag;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        flag=0;
        for(int j=2; j<arr[i]/2; j++)
        {
            if(arr[i]%j==0)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            sum=sum+arr[i];

        }
    }

    printf("%d",sum);
}