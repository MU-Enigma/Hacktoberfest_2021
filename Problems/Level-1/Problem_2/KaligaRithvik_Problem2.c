    #include <stdio.h>

    int main()
    {
        int size;
        scanf("%d", &size);
        int arr[size];

        for (int i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }

        int count = 0;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] % 2 == 0 && i % 2 == 0)
            {
                printf("%d ", arr[i]);
                count++;
            }
        }

        if(count == 0)
        {
            printf("None");
        }
    }