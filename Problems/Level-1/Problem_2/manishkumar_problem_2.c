#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int N;
    scanf("%d", &N);
    int Arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &Arr[i]);
    }
    int c = 0;
    for(int i = 0; i < N; i++){
          if(Arr[i]%2 == 0 && i%2 == 0){
              printf("%d", Arr[i]);
              c = c+1;
          }
    }
    if( c==0){
        printf("None");
    }
    return 0;
}