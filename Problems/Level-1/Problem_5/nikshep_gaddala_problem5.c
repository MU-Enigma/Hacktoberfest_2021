#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prime(int *arr, int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        for (int j = 1; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)
                c++;
        }
        if (c == 1)
        {
            s = s + arr[i];
        }
    }
    printf("%d", s);
}

int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    prime(arr, N);
}