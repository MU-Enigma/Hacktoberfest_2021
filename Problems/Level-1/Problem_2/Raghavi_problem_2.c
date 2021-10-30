#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int even=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if((arr[i]%2==0)&& (i%2==0)){
            printf("%d ",arr[i]);
            even++;
        }
    }
    if(even==0){
        printf("None");
    }

}