#include<stdio.h>
int reverse(int a,int N){
 int rev = 0,rem=0;
 while(a != 0){
     rem=a%10;
     rev=rev*10+rem;
     a=a/10;
 }
 return rev;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int rev_arr = reverse(arr[i], n);
        if(rev_arr == arr[i])
            printf("True\n");
        else
            printf("False\n");
    }

}