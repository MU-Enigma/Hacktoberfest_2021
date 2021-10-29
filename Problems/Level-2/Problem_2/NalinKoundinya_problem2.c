#include <stdio.h>

int main()
{
    int NoOfTestCases;
    scanf("%d", &NoOfTestCases);
    
    for (int frq = 0; frq < NoOfTestCases; frq++)
    {
        int N;
        scanf("%d", &N);
        int sum = 0;
        int sum2 = 0;

        for (int i = 1; i < N; i++)
        {
            if (i % 5 == 0)
            {
                sum = sum + i;
            }
            if (i % 7 == 0)
            {
                sum = sum + i;
            }
            if (i % 5 == 0 && i % 7 == 0)
            {
                sum = sum - i;
            }
        }
        printf("%d\n", sum);
    }
}
