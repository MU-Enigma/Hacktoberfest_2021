#include<stdio.h>
int main(){
    int tsecs,day,hrs,min,s;
    scanf("%d",&tsecs);
    day=tsecs/(24*60*60);
    tsecs=tsecs%86400;
    hrs=tsecs/(60*60);
    tsecs=tsecs%3600;
    min=tsecs/60;
    tsecs=tsecs%60;
    printf("%d day, %d hr, %d min, %d sec",day,hrs,min,tsecs);
}
