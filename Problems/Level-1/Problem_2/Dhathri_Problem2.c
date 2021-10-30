#include <stdio.h> 
int main()
{
    int N, Arr[1000], count = 0;

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%d", &Arr[i]);
    }

    for(int i = 0; i < N; i++){
        if(i%2 == 0 && Arr[i]%2 == 0){
            printf("%d ", Arr[i]);
        }
        else{
            count++;

        }
    }
    
    if(count == N){
        printf("None");
    }

    return 0;
}





