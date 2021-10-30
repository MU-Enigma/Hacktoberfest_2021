#include <stdio.h>
int main()
{
    int day,hr,min,sec,N;
    scanf("%d",&N);
    day=N/86400;
    N=N%86400;
    hr=N/3600;
    N=N%3600;
    min=N/60;
    N=N%60;
    sec=N;
    printf("%d Day,%d Hr,%d Min,%d Sec",day,hr,min,sec);
    
    return 0;
}
