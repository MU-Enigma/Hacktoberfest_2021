#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    while(t--)
    {
        int n,x,k;
        scanf("%d %d %d",&n,&x,&k);
        
        if(x%k==0)
        {
            printf("YES");
        }
        else if((n-x+1)%k==0)
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
