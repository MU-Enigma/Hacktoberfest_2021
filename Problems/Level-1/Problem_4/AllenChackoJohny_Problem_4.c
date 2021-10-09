#include<stdio.h>

int main()
{
    int day,hour,min,sec,total;
    int inter;

    scanf("%d",&total);

    day=total/86400;
    total=total%86400;

    hour=total/3600;
    total=total%3600;

    min=total/60;
    total=total%60;

    sec=total;

    printf("%d day, %d hr, %d min, %d sec\n",day,hour,min,sec);

    return 0;
}