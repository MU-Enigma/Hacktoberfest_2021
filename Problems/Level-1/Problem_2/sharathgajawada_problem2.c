#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int count =0;
    for(int i = 0; i < n; i++)
    {
        if(i%2==0&&array[i]%2==0){
            printf("%d ",array[i]);
        }
        else{
            count++;
        }
    }
    if(count==n){
        printf("None");
    }
    
}