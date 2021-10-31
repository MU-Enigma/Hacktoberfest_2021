//TO CONVERT SECONDS TO DAYS, HOURS, MINUTES, AND SECONDS
#include <stdio.h>

int DAYS(int sec){
    int d = sec/(60*60*24);
    return d;  
}

int HOURS(int sec){
    int h = sec/(60*60);
    return h;
}

int MINS(int sec){
    int m = sec/(60);
    return m;
}

//main function
int main(){
    int sec;
    scanf("%d", &sec);
    
    int days, hrs, mins;
    days = DAYS(sec);
    sec = sec%(60*60*24);
    
    hrs = HOURS(sec);
    sec = sec%(60*60);
    
    mins = MINS(sec);
    sec = sec%(60);
    
    printf("%d day, ", days);
    printf("%d hr, ", hrs);
    printf("%d min, ", mins);
    printf("%d sec", sec);
    return 0;
}
