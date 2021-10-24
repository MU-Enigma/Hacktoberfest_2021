#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int d,h,s,m;
    d = n/86400;
    n = n%86400;
    h = n/3600;   
    n = n%3600;
    m = n/60; 
    n = n%60;  
    printf("%d day, %d hr, %d min, %d sec", d,h,m,n);
}