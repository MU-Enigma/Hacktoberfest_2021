#include<stdio.h>

int main(){
    int m;
    scanf("%d",&m);
    int arr[m];
    int even=0;
    for(int i=0;i<m;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<m;i=i+2){
        if(arr[i]%2==0){
            printf("%d ",arr[i]);
            even++;
        }
    }
    if(even==0){
        printf("None");
    }

}