#include<stdio.h>
int main(){
    int day = 0, hr = 0, min = 0, sec = 0;
    int inp = 0;
    scanf("%d", &inp);
    
    int n = inp;

    if(n>=86400 || n==0){
        day=n/86400;
        n=n%86400;
        printf("%d day, ", day);
    }

    if(n>=3600 || n==0){
        hr=n/3600;
        n=n%3600;
        printf("%d hour, ", hr);
    }
    
    if(n>=60 || n==0){
        sec=n/60;
        n=n%60;
        printf("%d min, ", sec);
    }

    if(n<60)
        printf("%d sec", n);

}