#include <stdio.h>
int main()
{
  int N;
  scanf("%d",&N);
  int arr[N];
  int i;
  for(i=0;i<N;i++){
      scanf("%d",&arr[i]);
  }
  
  int k,j;
  scanf("%d %d",&k,&j);
  float mean_till_k=0,mean_till_j=0;
  for(i=0;i<k;i++){
  mean_till_k=(mean_till_k+arr[i]);
  }
  for(i=N-j;i<N;i++){
      mean_till_j=(mean_till_j+arr[i]);
  }
  float difference=(mean_till_k/k)-(mean_till_j/j);
  printf("%0.1f",difference);
  
    return 0;
}
