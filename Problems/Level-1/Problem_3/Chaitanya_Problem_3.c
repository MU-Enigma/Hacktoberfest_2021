#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    int n;
    scanf("%d",&n);

    int l,r;
    scanf("%d %d",&l,&r);

    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    float left_mean= 0;
    for(int i=0; i<l; i++){
        left_mean += arr[i];
    }

    float mean_1 = (left_mean)/l;

    int right_mean = 0;
    for(int i=n-r; i<n; i++){
        right_mean = right_mean + arr[i];
    }

    float mean_2 = right_mean/r;
    printf("%.1f",mean_1-mean_2);

} 