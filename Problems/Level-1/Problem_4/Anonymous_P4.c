

#include<stdio.h>

int main()
{
    int T;
    //printf("Start\n");
    scanf("%d", &T);
    
    printf("%d Days\t", (T/(24*60*60)));
    T=T%(24*60*60);
    
    printf("%d Hours\t", (T/(60*60)));
    T=T%(60*60);
    
    printf("%d Minutes\t", (T/(60)));
    T=T%60;
    
    printf("%d Seconds", T);
    
    return 0;
}


//ARR Anonymous

