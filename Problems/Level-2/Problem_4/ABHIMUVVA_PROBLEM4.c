#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size, s1 = 0, s2 = 0;
    scanf("%d", &size);
    int (*A) = malloc(sizeof(int)*size);
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &A[i]);
    }
    if(size%2 == 0)
    {
        for(int i = 0; i < size/2; i++)
        {
            s1 += A[i];
        }
        for(int i  = size/2; i < size; i++)
        {
            s2 += A[i];
        }
    }
    else
    {
        for(int i = 0; i <= size/2; i++)
        {
            s1 += A[i];
        }
        for(int i = size/2+1; i < size; i++)
        {
            s2 += A[i];
        }
    }

    printf("%d\n", abs(s1-s2));

}