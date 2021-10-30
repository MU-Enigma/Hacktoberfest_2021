#include <stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int day,hr,sec,min;
    day=N/86400;
    N=N%86400;
    hr=N/3600;   
    N=N%3600;
    min=N/60; 
    N=N%60;  
    printf("%d day, %d hr, %d min, %d sec", day,hr,min,N);
}
