#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int m;
    scanf("%d",&m);
    int arr[N][m];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int count=1;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if((arr[i][j]+arr[i+1][j]+arr[i][j+1]+arr[i+1][j+1])/4>=m)
                count++;
            {
            if(arr[i][j]>=m)
                count++;
            }
        }
    }
    printf("%d",count);
}
