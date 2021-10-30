#include<stdio.h>
int sum_primes(int, int []);
int main(){
    int n,sum2;
    scanf("%d",&n);
    int array_num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array_num[i]);
    }
    
        sum2 = sum_primes(n,array_num);
        printf("%d",sum2);
    }


int sum_primes(int n, int array_num[]){
    int sum= 0;
     
        for (int i = 0; i < n; i++) {
       int j = 2;
       int flag = 1;
       while (j < array_num[i]) {
           if (array_num[i]%j== 0) {
               flag = 0;
               break;
           }
           j++;
       }
       if (flag == 1){
           sum = sum + array_num[i];
       }
   }
        
       return sum;  
    }
  

