#include<stdio.h>

int palindrome(int n){
    int rev=0,ld;       //ld-last digit
    int temp=n;
    while(temp!=0){
        int ld=temp%10;
        rev=rev*10+ld;
        temp=temp/10;

    }
    return rev;


}
    
int main(){ 
    int m; 
    scanf("%d" , &m); 

    int arr[99999];
    for(int i=0;i<m;i++){ 
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<m;i++){
        int reverse=palindrome(arr[i]);
        if(reverse !=arr[i]){
            printf("False\n");
        }
        else{ 
            printf("True\n");
        }
    }
    return 0;
}