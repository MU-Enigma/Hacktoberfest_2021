#include <stdio.h>
#include <stdio.h>
int main() {
	int n,y;
	scanf("%d%d", &n, &y);
	int temp1;
	int ans = 0;
	int temp2 = y;
	while(n--){
	    scanf("%d", &temp1);
	    if(temp1 == temp2){
	        temp2--;
	    }else{
	        temp2 = y;
	    }
	    if(temp2 == 0){
	        ans++;
	        temp2 = y;
	    }
	}
	printf("%d", ans);
	return 0;
}

