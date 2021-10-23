#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int a=0;
    int sum=0;
    for(int i=0;i<N;i++){
        a=0;
        for(int j=arr[i]/2;j>1;j--){
            if(arr[i]%j == 0){
                a=1;
            }

        }
        if(a==0){
                sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}