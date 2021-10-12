#include<stdio.h> 

int palin(int a){
    int a1=0,rem;
    while (a != 0){
        rem = a % 10;
        a1 = a1 * 10 + rem;
        a = a / 10;
    }
    return a1;
}

int main(){ 
    int n; 
    scanf("%d" , &n); 

    int arr[99999];
    for(int i=0;i<n;i++){ 
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        int reverse=palin(arr[i]);
        if(reverse !=arr[i]){
            printf("False\n");
        }
        else{ 
            printf("True\n");
        }
    }
    return 0;
}
