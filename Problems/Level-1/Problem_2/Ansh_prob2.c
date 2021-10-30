#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    
    for(int i=0;i<N;i++)
    {
        int Num;
        scanf("%d", &Num);

        int sum_up = 0, a = 5;
        while(a < Num)
        {
            if(a%5 == 0 || a%7 == 0)
            {
                sum_up += a;
            }
            a++;
        }
        printf("%d", sum_up);
        printf("\n");
    }
}