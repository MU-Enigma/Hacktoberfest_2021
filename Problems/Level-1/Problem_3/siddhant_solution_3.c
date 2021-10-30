#include <stdio.h>

int main()
{
    int N;
    float K,J;
    float sum_K,sum_J;
    scanf("%d",&N);
    
    float num_arr[N];

    scanf("%f",&K);

    scanf("%f",&J);

    for(int i=0;i<N;i++)
    {
        scanf("%f",&num_arr[i]);
    }

    for(int i=0;i<K;i++)
    {
        sum_K=sum_K+ num_arr[i];
    }

     for(int i=N-J;i<N;i++)
    {
        sum_J=sum_J+ num_arr[i];
    }
    sum_K= sum_K / K;
    
    sum_J= sum_J / J;

    float final= sum_K - sum_J;


    printf("%.1f",final );



}