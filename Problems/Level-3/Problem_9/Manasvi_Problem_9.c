#include<stdio.h>
#include<math.h>

void main()
{
    unsigned int num[100];
    int n;
    int ascii[100][100];
    int i, j, sum, count, k;

    scanf("%d",&n);
    
    for (i=0; i<n; i++)
    {
        scanf("%u",&num[i]);
    }

    i = 31;
    j = 0;
    sum = 0;
    count = 0;

    for (k=0; k<n; k++)
    {
    while (num[k]>0)
    {
        sum += (num[k]%2)*pow(2,j);
        j++; 
        
        if (j==8 || num[k]/2==0)
        {
            ascii[k][count] = sum;
            sum = 0;
            j = 0;
            count++;
        }
       
        i--;
        num[k] /= 2;
    }

    i = 31;
    j = 0;
    sum = 0;
    count = 0;
    }

    for (i=0; i<n; i++)
    {
        for (j=3; j>=0; j--)
        {
            printf("%c",ascii[i][j]);
        }
    }
}