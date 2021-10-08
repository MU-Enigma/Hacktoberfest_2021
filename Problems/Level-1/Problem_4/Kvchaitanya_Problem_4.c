#include<stdio.h>
int main()
{
    int time,day,hour,min,sec;
    scanf("%d",&time);
    day=time/(24*60*60);
    hour=((time-(day*60*60*24))/3600);
    min=((time-(day*60*60*24)-(hour*60*60))/60);
    sec=time-day*60*60*24-hour*60*60-min*60;
    printf("%d day, %d hr, %d min, %d sec",day,hour,min,sec);
}