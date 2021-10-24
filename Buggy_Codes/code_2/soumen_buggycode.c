#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n1,x1,ktemp;
        scanf("%d %d %d",&n1,&x1,&ktemp);
        int k1=1;
        if(x1%ktemp==0)
        {
            printf("YES");
        }
        else if((n1-x1+k1)%ktemp==0)
        {
            printf("YES");
        }   
        else
        {
            printf("NO");
        }
        printf("\n");
    }
    return 0;
}
