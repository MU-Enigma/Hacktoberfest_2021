#include<stdio.h>
#include<stdlib.h>
int main()
{
    int N, C = 0;
    scanf("%d", &N);
    int a[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d", &a[i]);
    }   
    for (int i=0;i<N;i++)
    {        
        if((a[i] %2 == 0) && (i %2 == 0))
        {
            printf("%d ", a[i]);
            C++;
        }
    }
    if(C == 0)
    {
        printf("None\n");
    }
    return 0;
}
