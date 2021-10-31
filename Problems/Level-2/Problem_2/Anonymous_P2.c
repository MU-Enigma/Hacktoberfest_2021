

#include<stdio.h>
#include<stdlib.h>

double sum5(int n)
{
    if((n%5)!=0)    n=n-(n%5);
    else            n=n-5;
    double terms=(n/5)+1;
    terms=terms/2;
    return (terms*(n));
}

double sum7(int n)
{
    double terms;
    if((n%7)!=0)    {n=n-(n%7);terms=(n/7)+1;}
    else            {n=n-7;terms=(n/7)+1;}
    
    //terms=(n/7)+1;
    terms=terms/2;
    return (terms*(n));
}

int main()
{
    int test;
    scanf("%d", & test);
    int *list=(int *)malloc(test*sizeof(int));
    int t;
    for(int i=0; i<test; i=i+1)
    {
        scanf("%d", &t);
        list[i]=t;
    }


    for(int i=0; i<test; i=i+1)
    {
        //printf("%d", (int((sum5(list[i]))+(sum7(list[i]))));
        double sum=(sum5(list[i])+sum7(list[i]));
        printf("%Lf\n", sum);
    }

    return 0;
}


//ARR Anonymous
