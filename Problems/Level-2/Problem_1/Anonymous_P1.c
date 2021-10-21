
#include<stdio.h>
#include<stdlib.h>

int  main()
{
    int test;
    //printf("Begin\n");
    scanf("%d", &test);
    int *B,*R,*X;
    B=(int *)malloc(test*sizeof(int));
    R=(int *)malloc(test*sizeof(int));
    X=(int *)malloc(test*sizeof(int));
    int t;
    for(int i=0; i<test; i=i+1)
    {
        scanf("%d", &t);
        B[i]=t;
        scanf("%d", &t);
        R[i]=t;
        scanf("%d", &t);
        X[i]=t;
    }
    
    t=0;
    int count=0,j=0;
    for(int i=0; i<test; i=i+1)
    {
        if((((R[i]-B[i])*X[i])<=0) && (X[i]!=0))
        {
            printf("-1\n");
            continue;
        }
        if(X[i]==0)
        {
            printf("0\n");
            continue;
        }
        count=0;
        t=0;
        j=0;
        //for(int j=0; j<test; j=j+1)
        //{
            while(t<=X[i])
            {   
                if(j%2==0)
                {
                    t=t+R[i];
                    count=count+R[i];
                }
                else
                {
                    t=t-B[i];
                    count=count+B[i];
                }
                j=j+1;
            }
        //}
        //count=count*(R[i]+B[i]);
        count=count+(X[i]-t);
        printf("%d\n", count);
    }

    return 0;
}

//ARR Anonymous

