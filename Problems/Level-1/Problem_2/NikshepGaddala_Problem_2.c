#include <stdio.h>
int main()
{
    int n;
    int count = 0;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if ((arr[i] % 2 == 0) && (i % 2 == 0))
        {
            printf("%d ", arr[i]);
            count = count + 1;
        }
    }
    if (count == 0)
    {
        printf("none");
    }
    return 0;
}