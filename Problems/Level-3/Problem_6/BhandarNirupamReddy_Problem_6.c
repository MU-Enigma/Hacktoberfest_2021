#include<stdio.h>
int main()
{
    int Num;
    scanf("%d", &Num);

    int price[Num];

    for(int a = 0;a < Num;a++)
    {
        scanf("%d", &price[a]);
    }

    for(int a = 0;a < Num;a++)
    {
        if(price[a] < 0)
        {
            printf("error");
            return 0;
        }
    }

    int largest = price[0];
    int index_of_largest = 0;

    for(int i = 1;i < Num;i++)
    {
        if(price[i] > largest)
        {
            largest = price[i];
            index_of_largest = i;
        }
    }

    int smallest = price[0];
    int index_of_smallest = 0;

    for(int j = 1;j < Num;j++)
    {
        if(price[j] < smallest)
        {
            smallest = price[j];
            index_of_smallest = j;
        }
    }

    if(index_of_smallest < index_of_largest)
    {
        printf("%d %d %d", smallest, largest, (largest-smallest));
    }

    if(index_of_smallest > index_of_largest)
    {
        printf("0 0 0");
    }

    return 0;
}