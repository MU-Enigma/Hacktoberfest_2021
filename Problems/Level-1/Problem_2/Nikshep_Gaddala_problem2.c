#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int c = 0, i = 0;
    while (i < n)
    {
        if ((arr[i] % 2 == 0) && (i % 2 == 0))
        {
            printf("%d ", arr[i]);
            c++;
        }
        i++;
    }
    if (c < 1)
    {
        printf("none");
    }
    return 0;
}