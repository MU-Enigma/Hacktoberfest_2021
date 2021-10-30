#include<stdio.h>
#include<string.h>

int solution(char arr[]){
    
    int n = strlen(arr);
    
    for(int i=0; i<n-1; i++){
        if(arr[i]<=arr[i+1]){
            continue;
        }
        else{
            return 0;
        }
    }
    return 1;
}

int main(){
    int N;
    scanf("%d",&N);

    char arr[N][1000];

    for(int i=0; i<N; i++){
        scanf("%s",arr[i]);
    }
    for(int i=0; i<N; i++){
        int check = solution(arr[i]);
        if(check == 1){
            printf("true\n");
        }
        else{
            printf("false\n");
        }
    }
}