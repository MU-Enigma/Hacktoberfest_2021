#include <stdio.h> 

int main() {

    int T, N, sum;
    scanf("%d", &T);
    
    for(int i=0; i<T; i++)
    {
       sum = 0;
       scanf("%d", &N);
       
       for(int i = 0; i < N; i++)
       {
           if(i%5 == 0 || i%7 == 0)
           {
               sum = sum + i;
           }
       }
       printf("%d\n", sum);
    }
    
    return 0;
}