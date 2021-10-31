#include<stdio.h>
#include<stdlib.h>

void eveniseve(int *A, int n)
{
    int j = 0;
    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            if(A[i] % 2 == 0)
            {
                printf("%d ", A[i]);
                j++;
            }
        }
    }
    if(j == 0)
    {
        printf("None");
    }
    printf("\n");
}

int main()
{
    int n, j = 0;
    scanf("%d", &n);

    if( n != 0)
    {
        int (*A) = malloc(sizeof(int)*n);
        int (*A1) = malloc(sizeof(int)*n);

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &A[i]);
        }

        eveniseve(A, n);
    }

    else
    {
        printf("None\n");
    }

}