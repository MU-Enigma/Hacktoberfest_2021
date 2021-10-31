#include <stdio.h>

int isprime(int n);

int main(){
    int n,sum = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(isprime(arr[i])==1){
            sum = sum+arr[i];
        }
    }
    printf("%d",sum);
    
}

int isprime(int n){
    int flag = 1;
    for (int i=2;i<=n/2;i++){
        if(n%i==0||n<=1){
            flag=0;
            return flag;
        }
    }
    return flag;
}