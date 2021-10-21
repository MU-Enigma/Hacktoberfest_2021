#include<stdio.h>
#include<math.h>
int main()
{
    int N;
    scanf("%d",&N);
    float k,j;
    scanf("%f",&k);
    scanf("%f",&j);
    int arr[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }
    float sum1=0;
    for(int i=0; i<k;i++)
    {
        sum1=sum1+arr[i];
    }
    float mean1= sum1/k;
    int sum2=0;
    for(int i=N-j;  i<N;i ++)
    {
        sum2=sum2+arr[i];
    }
    float mean2= sum2/j;
    float final= mean1-mean2;
    printf("%0.1f",final);

}