#include<stdio.h>
#include<string.h>

int reverse(int T){
    char arr[100000];
    scanf("%s",arr);

    for(int i=strlen(arr)-1; i>=0; i--){
        if(arr[i] > 64 && arr[i]<91){
            arr[i] = arr[i] + 32;
            printf("%c",arr[i]);
        }
        else if(arr[i]>96 && arr[i]<123){
            arr[i] = arr[i]-32;
            printf("%c",arr[i]);
        }
        else return 0;
    }


}

int main(){
    int T;
    scanf("%d",&T);

    int check = reverse(T);
    if(check == 0){
        printf("Error. Please use alphabets only");
    }
}