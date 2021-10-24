#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int k,j;
    scanf("%d%d",&k,&j);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    float mean_k=0;
    float mean_j=0;
    for(int i=0;i<k;i++){
        mean_k=mean_k+arr[i];
    }
    for(int i=n-1;i>n-j-1;i--){
        mean_j=mean_j+arr[i];
    }
    mean_k=mean_k/k;
    mean_j=mean_j/j;
    float diff=0;
    diff=(mean_k-mean_j);
    printf("%f",diff);
}