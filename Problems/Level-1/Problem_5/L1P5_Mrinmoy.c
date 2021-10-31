//SUM OF PRIME NUMBERS IN THE LIST
#include <stdio.h>
int isPrime(int n){
    int check=0;
    
    for(int i=2; i<=n/2; i++){    
        if(n%i==0){    
            check=1;    
            return 0;   //is not Prime  
        }    
    }   
    
    if(check ==0)
        return 1;   //is Prime
    
}
//main function
int main(){
    int n, sum=0;
    scanf("%d" ,&n);
    int Arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &Arr[i]);
        int bool = isPrime(Arr[i]);
        if(bool == 1)
            sum += Arr[i];
    }
    
    printf("%d", sum); 
    return 0;
}
