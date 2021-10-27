#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arry[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arry[i]);
    }
    int temp;
    for(int i =0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arry[i]>arry[j]){
                temp = arry[i];
                arry[i] = arry[j];
                arry[j] = temp;
            }
        }
    }
    for(int i = 0;i<n;i++){
        printf("%d ",arry[i]);
    }
}
