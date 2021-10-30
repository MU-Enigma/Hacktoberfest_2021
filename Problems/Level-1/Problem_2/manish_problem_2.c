#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
    scanf("%d",&arr[i]);
    }
    int extra=0;
    for(int i=0;i<N;i=i+2){
        if(arr[i]%2==0){
            printf("%d ",arr[i]);
            extra++;
        }
    }
    if(extra==0){
        printf("None");
    }

}