#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    int first_k;
    scanf("%d", &first_k);
    int last_j;
    scanf("%d",&last_j);

    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    float sum_k =0, k_mean, sum_j=0 , j_mean;
for(int i=0; i< first_k; i++){
    sum_k = sum_k + array[i];
}
k_mean= sum_k/first_k ;
for(int i= n-1; i>= n-last_j ; i--){
sum_j = sum_j + array[i];
}
j_mean= sum_j/last_j;
float res;
res = k_mean-j_mean;
printf("%0.1f", res); 
return 0;
}