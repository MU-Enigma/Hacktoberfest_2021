#include <stdio.h>
int main(){
    int n,profit=0;
    scanf("%d",&n);
    int arr[n],b=0,s=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<0){
                printf("error\n");
                printf("(price can't be negative)");
                return 0;
            }
            if(arr[i]<arr[j]){
                if(profit<(arr[j]-arr[i])){
                profit = arr[j]-arr[i];
                b = arr[j];
                s = arr[i];}
            }
        }
    }
    if(b==0&&s==0&&profit==0){
    printf("%d %d %d\n",s,b,profit);
    printf("(no transaction is done in this case)");
    return 0;
    }
    printf("%d %d %d ",s,b,profit);
}