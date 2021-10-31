#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
    int a;
    scanf("%d", &a);

    for(int i = a; i>0; i--){
        char string[9999];
        scanf("%s", string);
        
        int n = strlen(string);
        
        for(int i = n-1; i>=0; i--){
            if(string[i]>=97 && string[i]<=122){
                printf("%c", string[i]-32);
            }
            else if(string[i]>= 65 && string[i]<=90){
                printf("%c", string[i]+32);
            }
            else{
                printf("%c", string[i]);
            }
        }
        printf("\n");
    }
}