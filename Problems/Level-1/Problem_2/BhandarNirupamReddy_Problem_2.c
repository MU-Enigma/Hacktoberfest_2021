#include<stdio.h>
int main()
{
    int Num, count = 0;
    scanf("%d", &Num);

    int Arra[Num], Ans[Num];

    for(int a = 0;a < Num;a++)
    {
        scanf("%d", &Arra[a]);
    }

    for(int a = 0;a < Num;a++)
    {
        if(a%2 == 0)
        {
            if(Arra[a]%2 == 0)
            {
                Ans[count] = Arra[a];
                count++;
            }
        }
    }

    if(count == 0)
    {
        printf("None");
        return 0;
    }

    for(int b = 0;b < count;b++)
    {
        printf("%d ", Ans[b]);
    }
    return 0;
}