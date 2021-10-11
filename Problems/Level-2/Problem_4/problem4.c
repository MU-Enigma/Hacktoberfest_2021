#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        if(i<(n/2)+1)
        {
            sum1+=a[i];
        }
        else
        {
            sum2+=a[i];
        }

    }
    int total=sum1-sum2;
    printf("%d",abs(total));




}