#include <stdio.h>
int lite(num){
    int rem,total=0;
   
    while(num!=0){
        rem = num%10;
        total= rem+total*10;
        num=num/10;
    }
    return total;
}
int main(){
    int num;
    scanf("%d", &num);
    
    for(int i=0;i<num;i++){
    int n,t;
    t=n;
    scanf("%d", &n);
    
    if(n==lite(n)){
        printf("True\n");
    }else{
        printf("False\n");
    }}
    
}