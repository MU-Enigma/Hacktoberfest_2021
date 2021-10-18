#include <stdio.h>

int main()
{
    int ele;
    scanf("%d",&ele);
    int num_arr[ele];
    int new[ele];
    int c=0;
    
    for(int i=0;i<ele;i++)
    {
        scanf("%d",&num_arr[i]);
    }

    for(int i=0;i<ele;i=i+2)
    {
        if (num_arr[i]%2==0)
        {
            new[c]=num_arr[i];
            c=c+1;
        }
    }

    if (c==0)
    printf("None");

    else
    {
        for(int i=0;i<c;i++)
        {
           printf("%d ",new[i]); 

        }
    }
    
    

    
}