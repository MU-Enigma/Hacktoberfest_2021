#include<stdio.h>
#include<stdlib.h>

void even(int n){
	int arr[1000];
	int index=0;
	for(int i=0;i<n;i++){
		scanf("%d", &arr[i]);
		}
//element and index should be even
	for(int i=0;i<n;i++){
		if(arr[i] %2 == 0){
			if(i %2 == 0){
				printf("%d ",arr[i]);
				index++;
			}
		}
	}
	if(index ==0){
		printf("None");
	}
}

int main(){
	int n;
	scanf("%d", &n);
	even(n);
    return 0;
}
