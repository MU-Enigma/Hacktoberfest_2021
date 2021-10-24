#include<stdio.h>
int main()
{   //N- size 
int N,sum1=0,sum2=0; 
float K,J;
    scanf("%d",&N);
    int a[N-1];
    scanf("%f %f",&K,&J);
    for(int i=0;i<N;i++)
    {scanf("%d",&a[i]);}
    for(int i=0;i<K;i++)
    {sum1=sum1+a[i];}
    for(int i=0;i<J;i++)
    {sum2=sum2+a[N-i-1];}
printf("%.1f",(sum1/K)-(sum2/J));
return 0;
}