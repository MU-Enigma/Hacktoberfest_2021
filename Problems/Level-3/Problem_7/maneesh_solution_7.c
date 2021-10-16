#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    while (N>0) {
        int n;
        scanf("%d", &n);
        char arr[n];
        scanf("%s", arr);
        int flag = 0;
        for (int i = 0; i < n-1; i++) {
            flag = 0;
            for (int j = i+1; j < n; j++) {
                if (arr[j] != arr[i]) {
                    flag = 1;
                }
                if (arr[j] == arr[i] && flag == 1) {
                    printf("NO\n");
                    flag = 2;
                    break;
                }
            }
            if (flag == 2) {
                break;
            }
        }
        if (flag == 1 || flag == 0) {
            printf("YES\n");
        }
        N--;
    }
}