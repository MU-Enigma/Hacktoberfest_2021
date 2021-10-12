#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void sort(int n, int* a) {
    while ( 1==1) {
        int count = 0;
        for (int i=0; i<n-1; i++) {
            if (a[i] > a[i+1]) {
                int c = a[i];
                a[i] = a[i+1];
                a[i+1] = c;
                count++;
            }
        }
        if (count == 0) {
            break;
        }
    }
}

int main() {
    int N;
    scanf("%d",&N);
    while (N > 0) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int m = 100003,g = 100003;
        int even[m], odd[g];
        int j = 0,k = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] %2 == 0) {
                even[j] = a[i];
                j+=1;
            }
            else {
                odd[k] = a[i];
                k += 1;
            }     
        }
        m = j;
        g = k;
        sort(m,even);
        sort(g,odd);
        for (int i = 0; i < fmax(m,g); i++) {
            printf("%d %d ",odd[i],even[i]);
        }
        printf("\n");
        N--;
    }    
}