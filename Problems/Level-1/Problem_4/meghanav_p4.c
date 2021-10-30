#include<stdio.h>

int main()
{
    int s;
    //printf("Enter seconds: ");
    scanf("%d",&s);
    int days=s/86400;
    //printf("%d day",days);
    s=s-(days)*86400;
    int hrs=s/3600;
    //printf(" %d hr",hrs);
    s=s-(hrs)*3600;
    int min=s/60;
    //printf(" %d min",min);
    s=s-(min)*60;
    int sec=s;
    //printf(" %d sec",sec);
    printf("%d days,%d hrs, %d min, %d sec",days,hrs,min,sec);



}