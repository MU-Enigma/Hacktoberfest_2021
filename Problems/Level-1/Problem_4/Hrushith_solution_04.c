#include<stdio.h>

void main()
{
    int t;
    scanf("%d",&t);

    int d,h,s,m;
    d = t/86400;
    t = t%86400;
    h = t/3600;   
    n = t%3600;
    m = t/60; 
    t = t%60;  
    
    printf("%d day, %d hr, %d min, %d sec", d,h,m,n);
    
}