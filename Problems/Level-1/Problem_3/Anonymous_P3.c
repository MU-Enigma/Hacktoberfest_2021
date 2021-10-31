

#include<stdio.h>
#include<stdlib.h>

int main()
{

    int N, K, J;
    //printf("Start\n");
    scanf("%d %d %d", &N, &K, &J);
    int *Array,k=0,j=0;
    Array=(int *)malloc(N*sizeof(int));

    int t; double s1=0.0,s2=0.0;
    for(int i=0; i<N; i=i+1)
    {
        scanf("%d", &t);
        Array[i]=t;
        if(k!=K)
        {
            s1+=t;
            k=k+1;
        }

        if(i>= (N-J))
        {
            if(j!=J)
            {
                s2+=t;
                j=j+1;
            }
        }
        double out=((s1/k)-(s2/j));
        printf("%0.1Lf", out);
    }
    return 0;
}

//ARR Anonymous