#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,k;
        scanf("%d %d %d",&n,&x,&k);
        
        if(x%k==0)
        {
            printf("YES");
        }
        else if((n-x)%k!=0)
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
