#include <stdio.h>
int main(){
    
    int inp;
    scanf("%d", &inp);
    int arr[inp];

    for (int i=0; i < inp; i++){
        scanf("%d", &arr[i]);
    }

    int cnt = 0;
    for (int i = 0; i < inp; i++){
        if (arr[i] % 2 == 0 && i % 2 == 0){
            printf("%d ", arr[i]);
            cnt++;
        }
    }
    if(cnt == 0)
        printf("None");
}