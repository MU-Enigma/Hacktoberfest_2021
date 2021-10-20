#include<stdio.h>
int main(){
    int n;
    int flag=0;
    scanf("%d",&n);
    int list[n];
    for(int i=0;i<n;i++){
        scanf("%d",&list[i]);
    }

    for(int i=0;i<n;i++){
        if((list[i]%2==0) && (i%2==0)){
            flag=1;
            printf("%d ",list[i]);
        }
    }

    if(flag==0){
        printf("None\n");
    }
    return 0;
}