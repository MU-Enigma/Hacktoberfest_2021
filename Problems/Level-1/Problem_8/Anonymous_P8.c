

#include<stdio.h>
#include<stdlib.h>

int reverse(int n)
{
    int r=0;//rem;
    while(n!=0)
    {
        //rem=n%10;
        r=((r*10)+(n%10));
        n=n/10;
    }

    return r;
}

int main()
{
    //printf("Start\n");
    int test;
    scanf("%d", &test);
    int *cases=(int *)malloc(test*sizeof(int));
    int i=0,t;
    while(test!=0)
    {
        scanf("%d", &t);
        cases[i]=t;
        if(cases[i]==reverse(cases[i]))
        {
            printf("True\n");
        }

        else
        {
            printf("False\n");
        }
        i=i+1;
        test=test-1;
    }

    return 0;
}

//ARR Anonymous
