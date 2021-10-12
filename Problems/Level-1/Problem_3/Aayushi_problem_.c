#include<stdio.h>
int main()
{
    int n, K, J;
    scanf("%d", &n);
    scanf("%d", &K);
    scanf("%d", &J);

    int arr[n];
    for(int i = 0;i < n;i++)
    {
        scanf("%d", &arr[i]);
    }

    float sumK = 0;
    float sumJ = 0;
    float sub = 0;

    for(int i = 0;i < K;i++)
    {
        sumK += arr[i];
    }

    for(int j = n - 1;j > n-1-J;j--)
    {
        sumJ += arr[j];
    }

    sub = (sumK/K) - (sumJ/J);
    printf("%.1f", sub);
    return 0;
}