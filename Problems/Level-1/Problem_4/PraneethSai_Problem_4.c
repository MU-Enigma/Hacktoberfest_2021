#include <stdio.h>

int main()
{
    int k;
    scanf("%d",&k);
    
    int day,hrs,min,sec;
    day=k/86400;
    k=k%86400;
    hrs=k/3600;
    k=k%3600;
    min=k/60;
    k=k%60;
    sec =k;
    printf("%d day,%d hrs,%d min,%d sec",day,hrs,min,sec);
    return 0;
}