#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i+=2)
    {
        if(a[i] % 2 ==0)
        {
            printf("%d ",a[i]);
        }
        else{
    printf("none");
           break;
        }
    }


}