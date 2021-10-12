#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int n,sum = 65;
    scanf("%d", &n);   
    char* str;
    scanf("%s",str);
    int b = strlen(str);
    char vowel[5];
    int k = 0;
    for (int i = 0; i < b; i++) {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vowel[k] = str[i];
            sum += str[i];
            k += 1;
        }
        if (k == 5) {
            break;
        }
    }
    int count = 0;
    while (n>0) {
        int dummy = count,sum2 = sum;
        char tmp;
        printf("A");
        for (int i=0;i<5;i++) {
            printf("%c",vowel[i]);
        }
        for (int i=count;i<b;i++) {
            if (str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U' && str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u') {
                printf("%c",str[i]);
                printf("%d\n",sum+str[i]);
                count = i+1;
                break;
            }
        }
        n-=1;
    }
}

