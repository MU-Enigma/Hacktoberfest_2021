#include <stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    
    int D,H,M;
    D = N/86400;
    N = N%86400;
    H = N/3600;   
    N = N%3600;
    M = N/60; 
    N = N%60;
    
    printf("%d day, %d hr, %d min, %d sec", D,H,M,N);
}