#include<stdio.h>

int main()
{
    int n, i, j, min, minpos, max, maxpos, flag=0;
    int prices[100];

    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf("%d",&prices[i]);
        if (prices[i]<0)
        {
            flag = 1;
        }
    }

    if (flag==1)
    {
        printf("error\n");
        printf("(price can't be negative)");
        return 0;
    }

    for (i=0; i<n; i++)
    {
        min = prices[i];
        minpos = i;

        for (j=0; j<n; j++)
        {
            if (prices[j]<min)
            {
                min = prices[j];
                minpos = j;
            }
        }
    }

    if (minpos==n-1)
    {
        printf("0 0 0\n");
        printf("(no transaction is done in this case)");
        return 0;
    }

    for (i=0; i<n; i++)
    {
        max = prices[i];
        maxpos = i;

        for (j=0; j<n; j++)
        {
            if (prices[j]>max)
            {
                max = prices[j];
                maxpos = j;
            }
        }
    }

    if (minpos>=maxpos)
    {
        printf("0 0 0\n");
        printf("(no tran1saction is done in this case)");
        return 0;
    }

    printf("%d %d %d", prices[maxpos], prices[minpos], prices[maxpos]-prices[minpos]);
}