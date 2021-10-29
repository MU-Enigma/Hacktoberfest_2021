#include <stdio.h>

int main(void) //Execution of every program starts from main function.
{
    int i,j,k; //variable declaration.
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
    printf("\n"); //after printing one row it will changle the line.
    }
    return 0;
}
