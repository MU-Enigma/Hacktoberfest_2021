#include <stdio.h> 
#include <stdlib.h>

int main() {

    int T, num, arr[100], sum1 = 0, sum2 = 0;
    
    scanf("%d", &num);
    
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }
        
    if(num % 2 == 0)
    {
        for(int i = 0; i < num/2; i++)
        {
            sum1 = sum1 + arr[i];
        }
        for(int i = num/2; i < num; i++)
        {
            sum2 = sum2 + arr[i];
        }
    }
    else{
        for(int i = 0; i < num/2+1; i++)
        {
            sum1 = sum1 + arr[i];
        }
        for(int i = num/2+1; i < num; i++)
        {
            sum2 = sum2 + arr[i];
        }
    }
    printf("%d", abs(sum1 - sum2));
    printf("\n");
    
    
    return 0;
}