#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int min=n/60;
    int hrs=min/60;
    int days=hrs/24;
    min=min-hrs*60;
    hrs=hrs-days*24;
    int sec=n-(days*86400+hrs*3600+min*60);
    printf("%d day, %d hr, %d min, %d sec",days,hrs,min,sec);
}