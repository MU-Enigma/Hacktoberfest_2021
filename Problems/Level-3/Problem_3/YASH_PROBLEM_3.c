//counterfit coin riddle with pairwise comparasions

#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d", &n);
    int *arr = malloc(sizeof(int)*n);
    for(int i = 0; i<n; i++) {
        scanf("%d", (arr+i));
    }
    int flag = 0, index, diff;
    for(int i = 0; i<n-1; i+=2) {
        printf("%d %d\n", arr[i], arr[i+1]);
        if(arr[i] == arr[i+1])
            continue;
        diff = arr[i] - arr[i+1];
        flag = 1;
        index = i; //now need to find if i or i+1
        break;
    }

    if(n%2 != 0) {
        if(n>1) { //more than 1 element
            if(arr[n-1] != arr[n-2]) {
                diff = arr[n-1]-arr[n-2];
                flag = 1;
                index = n-2;
            }
        }
    }
    if(flag == 0) {
        printf("All coins are same");
    }
    else {
        diff = diff < 0 ? -1*diff : diff;
        if(arr[index] < arr[index+1]) //since counterfit coin is lighter
            index = index;
        else 
            index = index + 1;
        printf("%d %d", index, diff);
        
    }
}