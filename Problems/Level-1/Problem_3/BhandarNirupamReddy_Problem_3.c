#include<stdio.h>
int main()
{
    int size, K, J;
    scanf("%d", &size);
    scanf("%d", &K);
    scanf("%d", &J);

    int arra[size];
    for(int a = 0;a < size;a++)
    {
        scanf("%d", &arra[a]);
    }

    float sum_K = 0;
    float sum_J = 0;
    float Difference = 0;

    for(int b = 0;b < K;b++)
    {
        sum_K += arra[b];
    }

    for(int c = size - 1;c > size-1-J;c--)
    {
        sum_J += arra[c];
    }

    Difference = (sum_K/K) - (sum_J/J);
    printf("%.1f", Difference);
    return 0;
}