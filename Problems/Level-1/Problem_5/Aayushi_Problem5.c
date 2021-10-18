#include<stdio.h>

void is_prime(int N,int arr[])
{int sum=0;
    for(int i=0;i<N;i++)
    {   int count=0;
        for(int j=1;j<arr[i];j++)
        {
            if (arr[i]%j==0)
            {
                count++;
            }
        }
        if(count==1)
        sum+=arr[i];
    }
    printf("%d",sum);

}

int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    is_prime(N,arr);
}