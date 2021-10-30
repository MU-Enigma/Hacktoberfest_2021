#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    int* arr1 = malloc((n/2)*sizeof(int));
	    int* arr2 = malloc((n/2)*sizeof(int));
	    int temp;
	    int j = 0;
	    int k = 0;
	    for(int i = 0; i < n; i++){
	        scanf("%d", &temp);
	        if(temp%2 == 0){
	            arr1[j] = temp;
	            j++;
	        }else{
	            arr2[k] = temp;
	            k++;
	        }
	    }
	    int temp1;
	    for(int i = 0; i < n/2 - 1; i++){
	        for(int j = i + 1; j < n/2; j++){
	            if(arr1[i] > arr1[j]){
	                temp1 = arr1[i];
	                arr1[i] = arr1[j];
	                arr1[j] = temp1;
	            }
	            if(arr2[i] > arr2[j]){
	                temp1 = arr2[i];
	                arr2[i] = arr2[j];
	                arr2[j] = temp1;
	            }
	        }
	    }
	    for(int i = 0; i < n/2; i++){
	        printf("%d %d ", arr2[i], arr1[i]);
	    }
	    free(arr1);
	    free(arr2);
	    printf("\n");
	}
	return 0;
}

