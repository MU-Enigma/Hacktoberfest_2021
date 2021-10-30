#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d", &n);
    int *arr = malloc(sizeof(int)*n);
    for(int i = 0; i<n; i++) {
        scanf("%d", (arr+i));
    }

    int first = 0;
    int last = n-1;
    int extra = -1;
    int diff = 0, index = 0;
    while(first<last) {
        // printf("FIRST: %d\tLAST: %d\n", first, last);
        if((last-first) % 2 == 0) { //odd num of elements
            extra = last;
            last--;
        }   
        int mid = (first + last) / 2;

        int sum1 = 0, sum2 = 0;
        for(int i = first; i<=mid; i++) {
            sum1+=arr[i];
        }
        for(int i = mid+1; i<=last; i++) {
            sum2+=arr[i];
        }
        printf("%d %d\n", sum1, sum2);
        if(sum1 < sum2) {
            first = first;
            last = mid;
            diff = sum2-sum1;
            index = first;
        }
        else if(sum2 < sum1) {
            first = mid+1;
            last = last;
            diff = sum1 - sum2;
            index = mid+1;
        }
        else {
            diff = arr[extra] - arr[extra-1];
            diff = diff > 0? diff : diff*-1;
            index = extra;
            break;
        }
    }

    printf("%d %d", index, diff);
    
}