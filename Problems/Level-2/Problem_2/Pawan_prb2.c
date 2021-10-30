#include<stdio.h>
#include<stdlib.h>
int main(){
    int T;
    scanf("%d",&T);
    int sum;
    for(int i =0; i<T; i++){
        int N;
        scanf("%d",&N);
         sum = 0;
        for(int i = 0; i<N; i++){
            if(i%5 == 0 || i%7 == 0){
                sum = sum + i;
            }
        }
         printf("%d",sum);
    }  
}
