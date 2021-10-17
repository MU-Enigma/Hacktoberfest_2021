
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int isprime(int t)
{
    for(int i=2; i< ((int)sqrt((double)t)); i=i+1)
    {
        if(t%i==0) return 1;
    }

    return 0;
}



int main()
{
    int size;
    //printf("Start\n");
    scanf("%d", &size);
    int *list;
    list=(int *)malloc(size*sizeof(int));

    int t,s=0;
    for(int i=0; i<size; i=i+1)
    {
        scanf("%d", &t);
        list[i]=t;
        if(isprime(t)==0)   s+=t;
    }

    printf("%d", s);


    return 0;
}

//ARR Anonymous
