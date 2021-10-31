#include<stdio.h>
#include<math.h>
#include<string.h>


int check_palindrome(char num[]){
    int l = strlen(num)-1;
    
    for(int i=0; i<strlen(num)/2; i++,l--){
        if(num[i] == num[l]){
            
            continue;
        }
        else
        {
           
            return 0;
        }
        
    }
    return 1;
}

int main(){
    int T;
    scanf("%d",&T);
    
    char num[T][10000];
    for(int i=0; i<T; i++){
        scanf("%s",num[i]);
    }
    for(int i=0; i<T; i++){
        int check = check_palindrome(num[i]);
        if(check==0){
            printf("False\n");
        }
        else{
            printf("True\n");
        }
    }
}