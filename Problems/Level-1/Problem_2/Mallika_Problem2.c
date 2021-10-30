#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);

    }
    int count=0;
    for(int i=0; i<n; i++)
    {
        if((a[i]%2==0) && (i%2==0))
        {
            printf("%d ", a[i]);
            count++;
        }
    }
    if(count==0)
    {
        printf("None");
    }
    return 0;
}
