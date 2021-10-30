#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int arr[n];
    
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        
    }
    
    int sum = 0, extra = 0, max; 
    
    for (int i = 0; i < n; i++){
        max = arr[i];

        for (int j = 7; j < max; j = j+7){
                sum +=j;
        }
        for (int k = 5; k < max; k = k+5){
                sum +=k;

                if (k%7 == 0){
                    extra += k;
                } 
        }
           printf("%d", (sum-extra));
           sum = 0, extra = 0, max = 0;
    }
    
}
