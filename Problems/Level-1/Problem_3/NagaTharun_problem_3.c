
#include <stdio.h>

int main(){
    int n, k ,j;
    float p1 = 0, p2 = 0;
    scanf("%d %d %d", &n, &k, &j);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        if(i<k){
            p1 = p1 + arr[i];
        }
        if(i>n-1-j){
            p2 = p2 + arr[i];
        }
    }

    float x = p1/k - p2/j;
    printf("%.1f", x);

    return 0;
}
