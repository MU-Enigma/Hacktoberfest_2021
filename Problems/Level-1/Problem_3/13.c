#include <stdio.h>

int main(){

    double n,k,j,a[10000],sum1=0,sum2=0,mean1,mean2;
    scanf("%lf", &n);
    scanf("%lf %lf", &k,&j);
    for(int i=0;i<n;i++){
        scanf("%lf", &a[i]);
    }

    for(int i=0;i<k;i++){
        sum1 = sum1+a[i];
    }
    
    mean1= sum1/k;
    //printf("%lf", mean1);
    for(int i=n-j; i<n;i++){
        sum2 = sum2 + a[i];
    }
    
    
    mean2=sum2/j;
    //printf("    %lf", mean2);
    printf("%lf", mean1-mean2);

}