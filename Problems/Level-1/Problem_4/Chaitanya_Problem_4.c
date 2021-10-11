#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int day = n/86400;

    n = n - (day)*86400;

    int hours = n/3600;

    //printf("%d\n",hours);

    n = n - (hours)*3600;

    //printf("%d",n);

    int minutes = n/60;  //1 day, 1 hr, 1 min, 6 sec

    //printf("%d\n",minutes);

    int seconds = n-(minutes)*60;

    printf("%d day,%d hr, %d min, %d sec",day,hours,minutes,seconds);

}