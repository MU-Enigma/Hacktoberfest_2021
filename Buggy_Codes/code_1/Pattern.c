#include <stdio.h>

int main(void)
{
    int i,j,k;
    printf("Program to print star pattern\n");
    for(i = 5; i >= 1 ; i--)
    {
        for(j = 1; j <= i ; j++)
        {
            printf(" ");
        }
        for(k = 1; k <= (5 - i + 1); k++)
        {
            printf("%d", i);
        }
    printf("\n");
    }
    return 0;
}
