#include <stdio.h>

int main(void) // execution of each program start with main() function.
{
    for(int i = 5; i >= 1 ; i--)
    {
        for(int j = 1; j <= i ; j++)
        {
            printf(" ");
        }
        for(int j = 1; j <= (5 - i + 1); j++)
        {
            printf(":)");
        }
    printf("\n");
    }
    return 0;
}
