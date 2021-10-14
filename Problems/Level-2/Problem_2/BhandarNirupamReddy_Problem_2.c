#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    int sum_up = 0, a = 5;
    while(a < N)
    {
        if(a%5 == 0 || a%7 == 0)
        {
            sum_up += a;
        }
        a++;
    }

    printf("%d", sum_up);
    return 0;
}