#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d", &n);
    int* price = malloc(n*sizeof(int));
    for(int i =0; i<n; i++) {
        scanf("%d", (price+i));
        if(price[i] <0) {
            printf("error\n(price can't be negative)");
            return 0;
        }
    }

    int bp = 0;
    int sp = 0;
    int profit = 0;
    for(int i = 0; i<n-1; i++) {
        for(int j = i+1; j<n; j++) {
            int diff = price[j] - price[i];
            if(diff>0 && diff>profit) {
                profit = diff;
                bp = price[i];
                sp = price[j];
            }
        }
    }
    if(profit>0)
        printf("%d %d %d", bp, sp, profit);
    else
        printf("0 0 0\n(no transaction is done in this case)");
    
    return 0;
}