#include<stdio.h>
void solution(int *A, int N){
    int count =0;

    for(int i =0; i<N; i++){
        if(i%2== 0){
            if(A[i]%2 == 0){
                printf("%d ", A[i]);
            }else {count = count +1;}

        }

    }
    if(count !=0){
        printf("None");
    }
}
int main(){
    int N;
    scanf("%d", &N);
    int a[N];

    for(int i=0; i<N; i++){
        scanf("%d", &a[i]);
    }

    solution(a, N);

}