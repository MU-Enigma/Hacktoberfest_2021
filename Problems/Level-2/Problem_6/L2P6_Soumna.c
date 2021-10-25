#include<stdio.h>
#include<stdlib.h>

int main()
{
    int T;
    scanf("%d", &T);

    for(int i = 0; i < T; i++)
    {
        int n;
        scanf("%d", &n);

        int arr[n], odd[n/2], even[n/2];

        for(int m = 0; m < n; m++)
        {
            scanf("%d", &arr[m]);
        }

        for(int j = 0; j < n; j++)
        {
            int temp;
            for(int k = j + 1; k < n; k++)
            {
                if(arr[j] > arr[k])
                {
                    temp = arr[j];
                    arr[j] = arr[k];
                    arr[k] = temp;
                }
            }
        }

        int p = 0, q=0;
        for(int m = 0; m < n; m++)
        {
            if(arr[m]%2 == 0)
            {
                even[p] = arr[m];
                p++;
            }

            else
            {
                odd[q] = arr[m];
                q++;
            }
        }

        for(int m = 0; m < n/2; m++)
        {

            if(m == (n/2)-1)
            {
                printf("%d ", odd[m]);
                printf("%d\n", even[m]);
            }
            else
            {
                printf("%d ", odd[m]);
                printf("%d ", even[m]);
            }
        }
    }
}