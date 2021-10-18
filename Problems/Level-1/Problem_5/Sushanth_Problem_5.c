# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int prime(int n)
    {
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int count=0,sum=0;
        for(int i = 0;i<n;i++)
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
    prime(n);
}
