#include<stdio.h>
void palindrome(int a){
    int sum =0;
    int r;
    int x = a;
    while(a != 0){
      r=a%10;    
      sum=(sum*10)+r;    
      a=a/10;       
    }
    if(sum == x){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
}
int main ()
{
    int N;
    scanf("%d",&N);
    int a;
    for(int i=0; i<N; i++){
        scanf("%d",&a);
        palindrome(a);
    }
    return 0;
}