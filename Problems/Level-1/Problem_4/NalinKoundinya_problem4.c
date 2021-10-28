#include<stdio.h>

int main(){
    int Seconds;
    scanf("%d", &Seconds);

    int days = Seconds / 86400;
    Seconds = Seconds % 86400;

    int hours = Seconds / 3600; 
    Seconds = Seconds % 3600;

    int min = Seconds / 60;
    Seconds = Seconds % 60;

    printf("%d day, %d hr, %d min, %d sec" ,days, hours, min, Seconds);
}