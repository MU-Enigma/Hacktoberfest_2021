#include<stdio.h>

void main()
{
    int n , k , j;
    int a[100];
    scanf("%d",&n);
    scanf("%d %d",&k,&j);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    float fsum=0,lsum=0;

    for(int i=0;i<k;i++)
    {
        fsum+=a[i];
    }
    for(int i=0;i<j;i++)
    {
        lsum+=a[n-1-i];
    }

    float final = (fsum/k)-(lsum/j);
    printf("%0.1f",final);

}

