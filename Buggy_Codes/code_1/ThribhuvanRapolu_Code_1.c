#include <stdio.h>

int main()
{
    int p;
    int q;
    for(p = 5; p >= 1 ; p--)
    {
        for(q = 1; q <= p ; q++)
        {
            printf(" ");
        }
        for(q = 1; q <= (5 - p + 1); q++)
        {
            printf(":) ");
        }
    printf("\n");
    }
    return 0;
}
