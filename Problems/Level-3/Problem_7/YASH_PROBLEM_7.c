#include <stdio.h>
int main() {
    int test;
    scanf("%d", &test);
    for(int t = 0; t<test; t++) {
        int n;
        scanf("%d", &n);
        char arr[n];
        while(getc(stdin) != '\n') {} //clearing buffer of prev line
        for(int i = 0; i<n; i++) {
            scanf("%c", &arr[i]);
        }
        char fin[n];
        fin[0] = arr[0];
        int top = 1;
        
        int flag = 0;
        for(int i =1; i<n; i++) { //trimming out repeated characters
            // printf("\n%c\n", arr[i]);
            if(arr[i] == arr[i-1])
                continue;
            else {
                
                fin[top] = arr[i];
                top++;
            }
        }
        // for(int i = 0; i<top; i++)
        //     printf("%c", fin[i]);
        for(int i = 0; i<top; i++) {
            for(int j = 0; j<i; j++) {
                if(fin[j] == fin[i]) {
                    printf("NO\n"); //suspicion valid
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0) {
            printf("YES\n");
        }
    } //test cases
}