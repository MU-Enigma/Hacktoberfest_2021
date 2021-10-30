#include<stdio.h>
int main(){
   long int sec;
    scanf("%ld", &sec);
    int day ,hour, min, seconds;

    day= sec/(24*60*60);
    sec= sec-(day*24*60*60);

    hour= sec/3600;
    sec= sec-(hour*3600);

    min= sec/60;

    seconds= sec-(min*60);

    printf("%d day, %d hr, %d min, %d sec",day,hour,min,seconds);
    return 0;
}