#include<stdio.h>
#include<stdlib.h>
int main()
{
    int N;
    scanf("%d", &N); //test case input
    
    int a[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d", &a[i]); //input for the lit

    }
    int count=0;
    for(int i=0; i<N; i++)
    {
        if((a[i]%2==0) && (i%2==0)) //check port for the even index and value respectively
        {
            printf("%d ", a[i]);
            count++;
        }
    }
    if(count==0) //if count is zero after iterating through the loop, printing no obv
    {
        printf("None");
    }
    return 0;
}