#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arry[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }
    int count =0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (arry[i] % 2 == 0)
            {
                printf("%d ", arry[i]);
            count++;
            }
        }
    }
    if(count==0){
        printf("None");
    }
}