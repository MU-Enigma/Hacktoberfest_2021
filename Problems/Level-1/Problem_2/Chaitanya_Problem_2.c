#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int check = 0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0 && i%2==0){
            printf("%d ",arr[i]);
            check =1;
        }
        else{
            continue;
        }
    }
    if(check == 0){
        printf("None");
        return 0;
    }
    return 0;

}