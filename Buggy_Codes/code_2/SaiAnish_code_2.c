#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    int i=0;
    int n[t];
    int x[t];
    int k[t];
    while(i<t)
    {
        scanf("%d %d %d",&n[i],&x[i],&k[i]);
        i++;
    }
    i=0;
    while(i<t)
    {
        if(x[i]%k[i]==0)
        {
            printf("YES\n");
        }
        else if((n[i]+1-x[i])%k[i]==0 && (n[i]+1-x[i])>0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        i++;
    }
    return 0;
}