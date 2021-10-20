#include<stdio.h>

int main()
{
 int N;       
scanf("%d" , &N);
  int K , J;
 scanf("%d %d",&K,&J);
 int a[N];

    for(int i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }

float sum1=0;
 float sum2=0;

    for(int i=0;i<K;i++)
    {
        sum1=sum1+a[i];
    }

    for(int i=0;i<J;i++)
    {
        sum2=sum2+a[N-1-i];
    }
 float mean1, mean2;
mean1 = sum1/K;
mean2 = sum2/J;
float result;
result = mean1-mean2;

printf("%0.1f\n",result);

return 0;
}