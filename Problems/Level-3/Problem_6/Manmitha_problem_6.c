#include<stdio.h>
#include<string.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[100];
    for(int i=0;i<N;i++){
    scanf("%d",&arr[i]);
    }
    int least=10000;
    int highest=-10000;
    int a=0;
    int count=0;
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(arr[j]<arr[i]){
                count++;
                a=1;
                break;
            }
        }
    }

    for(int i=0;i<N;i++){
        if(arr[i]<0){
            printf("error\n");
            printf("(price cant be negative)");
            a=1;
            break;
        }

        if(arr[i]<least){
            least=arr[i];
        }
        if(arr[i]>highest){
            highest=arr[i];
        }
    }
    int profit=highest-least;
    if(a==0){
    printf("%d ",least);
    printf("%d ",highest);
    printf("%d ",profit);
    }
    if(count==N-1){
        printf("0 0 0\n");
        printf("(no transaction is done in this case)");
    }
}