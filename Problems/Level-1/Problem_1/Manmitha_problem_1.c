#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse(char arr[]){
    for(int i=strlen(arr);i>=0;i--){
        if(arr[i]>='A'&&arr[i]<='Z')
        printf("%c",arr[i]+32);
        else if(arr[i]>='a'&&arr[i]<='z')
        printf("%c",arr[i]-32);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    
    while(1==1) {
        char c;
        scanf("%c", &c);
        if(c=='\n')
            break;
    }
    for(int j=0;j<n;j++){
        char arr[30];
        for(int i=0;i<30;i++){
            scanf("%c",&arr[i]);
                if(arr[i]=='\n'){
                    break;
                }
        }
        reverse(arr);
        printf("\n");
    }
    
}