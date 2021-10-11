#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, c = 0;
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }   
        
    for (int i = 0; i < n; i++)
    {        
        if((a[i] %2 == 0) && (i %2 == 0))
        {
            printf("%d ", a[i]);
            c++;
        }
    }
    
    if(c == 0)
    {
        printf("None\n");
    }

    return 0;
}