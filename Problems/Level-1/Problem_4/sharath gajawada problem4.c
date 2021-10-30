#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int day = n/(24*3600);
    n = n% (24*3600);
    int hours = n/3600;
    n = n%3600;
    int minutes = n/60;
    n = n%60;
    int sec  = n;
    printf("%d day, %d hr, %d min, %d sec",day,hours,minutes,sec);
}