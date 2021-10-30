#include <stdlib.h>
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int temp;
    int ans = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &temp);
        if(temp%2 == 0 && i%2 == 0){
            printf("%d ", temp);
            ans++;
        }
    }
    if(ans == 0){
        printf("None");
    }
    return 0;
}