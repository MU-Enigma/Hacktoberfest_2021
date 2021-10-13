#include<stdio.h>

int main()
{
    int result;
    int mean1,mean2;
    int sum1=0;
    int sum2=0;
    int N,K, J;
    scanf("%d",&N);
    scanf("%d",&K);
    scanf("%d",&J);
    // 4 5 3 10 34 54 10 4 -6 -60

    int arr[N];
    for(int i=0;i< N; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<K;i++)
    {
        sum1=sum1+arr[i];
    }
    mean1=sum1/K;

    for(int i=N-1;i>N-1-J;i--)
    {
        sum2=sum2+arr[i];
    }
    mean2=sum2/J;

    result=mean1-mean2;

    printf("%d",result);
}