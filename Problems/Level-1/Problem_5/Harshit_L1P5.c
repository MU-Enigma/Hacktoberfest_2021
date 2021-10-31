#include<stdio.h>


//LEVEL 1

/*
Make a function that takes a list of numbers and returns the sum of all prime numbers in the list.

Sample Input
5
11 2 3 69 420

Sample Output
16
*/


int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int final=0;
    int temp=1;
    for(int i=0;i<n;i++){
        temp=1;
        for(int j=2;j<(arr[i]/2);j++){
            if(arr[i]%j==0){
                temp=0;
                break;
            }
        }
        if(temp==1){

            final+=arr[i];
        }

    }
    printf("%d",final);
    printf("\n");

}