#include<stdio.h>

void prime(int n,int a[])
{int sum=0;
    for(int i=0;i<n;i++)
    {   int count=0;
        for(int j=1;j<a[i];j++)
        {
            if (a[i]%j==0)
            {
                count++;
            }
        }
        if(count==1)
        sum=sum+a[i];
    }
    printf("%d",sum);

}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    prime(n,a);
}