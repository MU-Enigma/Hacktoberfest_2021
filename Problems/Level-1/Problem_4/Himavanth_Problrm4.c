#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int day = n/86400;
    int hr = (n%86400)/3600;
    int min = ((n%86400)%3600)/60;
    int sec = (((n%86400)%3600)%60);
    printf("%d day,%d hr , %d min, %d sec",day,hr,min,sec);
}