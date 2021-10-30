#include <stdio.h> 
#include <stdlib.h>

int main() {
    
    int t;
    scanf("%d", &t);
   
    int n[t], temp; 
    char ans[100] = "";
    
    for (int i = 0; i < t; i++){
        scanf("%d", &n[i]);
    }
        
    for (int i = 0; i < t; i++){
        int temp = n[i];
        int num = 0;
        int r;
        
        while (temp > 0){
            r = temp % 10;
            num = (num*10) + r;
            temp = temp/10;
        }
        
        if (n[i] == num){
            n[i] = 1;
        }
   
        else{
            n[i] = 0;
        }
   }
   
   for (int i = 0; i < t; i++)
    
    if (n[i] == 0){
        printf("False\n");
    }
   
    else{
        printf("True\n");
    }
}
