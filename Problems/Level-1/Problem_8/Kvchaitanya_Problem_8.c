#include<stdio.h>
int main()
{   int n;
    scanf("%d",&n);
    int a[n],num[n],rev[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        num[i]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        while(a[i]!=0)
        {
            rev[i]=a[i]%10+(rev[i])*10;
            a[i]=a[i]/10;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        if(num[i]==rev[i])
        printf("True\n");
        else
        printf("False\n");
    }
}