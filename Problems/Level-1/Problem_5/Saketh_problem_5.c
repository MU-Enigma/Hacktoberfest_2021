#include <stdio.h>
int main()
{
    int k;
    scanf("%d",&k);
    int prime(int n)
    {
        int a[k];
        for(int j=0;j<k;j++)
        {
            scanf("%d",&a[j]);
        }
        int count=0,sum=0;
        for(int j= 0;j<k;j++)
        {
            int c = 0;
            int r;
            for(int m=1;m<a[j];m++)
            {
                r= a[j]%m;
                if(r==0)
                {
                    c++;
                }
            }
            if(c==1)
            {
                sum = sum + a[j];
                count++;
            }
        }
        printf("%d",sum);
    }
    prime(k);
}