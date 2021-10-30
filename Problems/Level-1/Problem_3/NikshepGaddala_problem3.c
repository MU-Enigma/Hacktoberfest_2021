#include <stdio.h>

int main()
{
    int N, K, J;

    double sum1 = 0,
           sum2 = 0;
    double avg1 = 0, avg2 = 0;

    scanf("%d", &N);
    int arr[N];
    scanf("%d%d", &K, &J);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < K; i++)
    {
        sum1 = sum1 + arr[i];
    }
    avg1 = sum1 / K;
    for (int i = 0; i < J; i++)
    {
        sum2 = sum2 + arr[N - i - 1];
    }
    avg2 = sum2 / J;
    printf("%0.1f", avg1 - avg2);
}
