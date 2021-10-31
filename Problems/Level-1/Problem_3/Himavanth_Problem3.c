#include <stdio.h>
int main(){
    int n,j,k;
    scanf("%d",&n);
    scanf("%d %d",&k,&j);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum1=0,sum2=0;
    for(int i=0;i<k;i++){
        sum1 = sum1+arr[i];
    }
    n=n-1;
    for(int i=n;i>n-j;i--){
        sum2 = sum2+arr[i];
    }
    float avg1,avg2;
    avg1 = sum1/(float)k;
    avg2 = sum2/(float)j;
    printf("%.1f \n",avg1-avg2);
}