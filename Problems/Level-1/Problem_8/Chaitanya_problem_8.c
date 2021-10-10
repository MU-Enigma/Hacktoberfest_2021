#include<stdio.h>
#include<math.h>
#include<string.h>


int check_palindrome(char num[]){
    int l = strlen(num)-1;
    //int checker=0;
    //printf("%d\n",l);
    for(int i=0; i<strlen(num)/2; i++,l--){
        if(num[i] == num[l]){
            //printf("%c is equal to %c\n",num[i],num[l]);
            continue;
        }
        else{
            //printf("%c is not equal to %c\n",num[i],num[l]);
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