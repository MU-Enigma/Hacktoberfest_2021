#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int days, hours, min;
    days=n/86400;
    n=n%86400;
    hours=n/3600;
    n=n%3600;
    min=n/60;
    n=n%60;
    printf("%d day, %d hr, %d min, %d sec", days, hours, min, n);

}