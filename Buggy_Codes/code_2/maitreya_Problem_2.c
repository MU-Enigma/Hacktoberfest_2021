#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,k;
        scanf("%d %d %d",&n,&x,&k);
        if(x % k == 0)
        {
            printf("YES\n");
        }
        else if( (n- x - 1) % k == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
