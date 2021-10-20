#include<stdio.h>
#include<math.h>
int main()
{
    int N;
    scanf("%d",&N);
    double k,j;
    scanf("%lf",&k);
    scanf("%lf",&j);
    int arr[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }
    double sum1=0;
    for(int i=0; i<k;i++)
    {
        sum1=sum1+arr[i];
    }
    double mean1= sum1/k;
    int sum2=0;
    for(int i=N-j;  i<N;i ++)
    {
        sum2=sum2+arr[i];
    }
    double mean2= sum2/j;
    double final= mean1-mean2;
    printf("%lf",final);
}