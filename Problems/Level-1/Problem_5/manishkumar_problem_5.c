#include<stdio.h>
int isPrime(int a){
    for(int i = 2; i < a;i++){
        if(a%i == 0){
            return 0;
        }
        if(a==1){
        return 0;
        }
        else{
            return 1;
        }
    }
}
int main ()
{
    int N;
    scanf("%d", &N);
    int Arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d",&Arr[i]);
    }
    int sum =0;
    for(int i = 0; i < N; i++){
        if(isPrime(Arr[i])==1){
            sum = sum + Arr[i];
        }
    }
    printf("%d\n",sum);
    return 0;
}