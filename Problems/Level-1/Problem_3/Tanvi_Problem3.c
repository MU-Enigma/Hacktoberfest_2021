#include<stdio.h>
int main(){
    int n,k,j;
    scanf("%d",&n);
    scanf("%d %d",&k,&j);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    float avg1 = 0, avg2 = 0, final_ans = 0;

    for(int i=0;i<k;i++){
        avg1+=array[i];
    }
    avg1 /= k;

    for(int i=n-1;i>n-j-1;i--){
        avg2+=array[i];
    }
    avg2 /= j;

    final_ans = avg1-avg2;
    printf("%.1f",final_ans);
    return 0;
}