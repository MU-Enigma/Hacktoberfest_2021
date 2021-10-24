#include<stdio.h>
int reverse(int n){
    int rev=0;
    while(n!=0){
        rev*=10;
        rev+=n%10;
        n/=10;
    }
    return rev;
}
int main(){
    int test = 0;
    scanf("%d",&test);
    int num[test];
    
    for(int i=0;i<test;i++){
        scanf("%d",&num[i]);
    }

    for(int i=0;i<test;i++){
        if(num[i]==reverse(num[i]))
            printf("True\n");
        else
            printf("False\n");
    }
    return 0;
}