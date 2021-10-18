
#include <stdio.h>

int main(){
    int n, x=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);

        if(arr[i]%2==0 && i%2==0){
            printf("%d ", arr[i]);
            x++;
        }
    }

    if(x==0){
        printf("None");
    }

    return 0;
}
