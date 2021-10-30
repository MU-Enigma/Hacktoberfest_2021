#include<stdio.h>
void prime(int N,int A[])
{int sum=0;
    for(int i=0;i<N;i++)
    {   int count=0;
        for(int j=1;j<A[i];j++)
        {
            if (A[i]%j==0)
            {
                count++;
            }
        }
        if(count==1)
        sum=sum+A[i];
    }
    printf("%d",sum);
}

int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    prime(N,A);
}