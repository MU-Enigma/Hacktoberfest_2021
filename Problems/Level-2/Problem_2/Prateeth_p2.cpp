#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int t;
    scanf("%d",&t);
    
    for(int j=0; j<t; j++){
        
        int n;
        scanf("%d",&n);

        int sum=0;

        for(int i=5; i<n; i++){
            if(i%5==0){
                sum=sum+i;
            }
            if(i%35==0){
                sum=sum-i;
            }
        }
        
        for(int i=7; i<n; i++){
            if(i%7==0){
                sum=sum+i;
            }
        }
        printf("%d\n",sum);
    }
}