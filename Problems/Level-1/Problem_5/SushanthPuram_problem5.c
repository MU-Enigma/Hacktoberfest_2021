#include <stdio.h>
#include <stdlib.h>
int prime(int n){
    int ans = 0;
    for(int i = 2; i < n; i++){
        if(n%i == 0){
            ans = 1;
            break;
        }
    }
    return ans;
}

int main(void) {
	int n;
	scanf("%d", &n);
	int ans = 0;
	int temp;
	while(n--){
	    scanf("%d", &temp);
	    if(prime(temp) == 0){
            ans = ans + temp;
        }
	}
	printf("%d", ans);
	
	return 0;
}

