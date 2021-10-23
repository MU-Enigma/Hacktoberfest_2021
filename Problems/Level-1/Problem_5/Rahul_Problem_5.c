# include <stdio.h>
int main()
{
    int g;
    scanf("%d",&g);
    int prime(int n)
    {
        int a[g];
        for(int i=0;i<g;i++)
        {
            scanf("%d",&a[i]);
        }
        int count=0,sum=0;
        for(int i = 0;i<g;i++)
        {
            int c = 0;
            int rem;
            for(int j=1;j<a[i];j++)
            {
                rem = a[i]%j;
                if(rem==0)
                {
                    c++;
                }
            }
            if(c==1)
            {
                sum = sum + a[i];
                count++;
            }
        }
        printf("%d",sum);
    }
    prime(g);
}