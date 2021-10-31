/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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