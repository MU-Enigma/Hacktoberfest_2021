#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[99999],sum =0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        int flag =0;
        for(int j=1;j<arr[i];j++){
            if (arr[i]%j==0){
                flag++;
            }
        }
        if(flag==1 || flag ==2){
            sum += arr[i];
        }
    }
    printf("%d",sum);
    return 0;
}
