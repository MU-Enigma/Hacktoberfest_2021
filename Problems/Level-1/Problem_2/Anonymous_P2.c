
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size;
    printf("Start");
    scanf("%d", &size);
    int *list;
    list=(int *)malloc(size*sizeof(int));

    int t;
    for(int i=0; i<size; i=i+1)
    {
        scanf("%d", &t);
        list[i]=t;
    }

    t=0;
    for(int i=0; i<size; i=i+1)
    {
        if(((list[i]%2)==0) && ((i%2)==0))
        {   
            t=t+1;
            if(i!=(size-1))
                printf("%d ", list[i]);
            else
                printf("%d", list[i]);
        }
    }

    if(t==0)
        printf("None");

    return 0;

}

//ARR Anonymous

