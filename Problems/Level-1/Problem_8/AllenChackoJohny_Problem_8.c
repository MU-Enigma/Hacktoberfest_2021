#include<stdio.h>

int main()
{
    int T,r,i;

    scanf("%d",&T);

    int num[T];
    int rev[T];

    for(i=0;i<T;i++)
    {
        scanf("%d",&num[i]);
    }

    for(i=0;i<T;i++)
    { int n=num[i];
 
      while(n!=0)
      { r=n%10;
        rev[i]=(rev[i]*10)+r;
        n=n/10;
      }
    }

    for(i=0;i<T;i++)
    {
        if(num[i]==rev[i])
        {
            printf("True\n");
        }
        else
        {
            printf("False\n");
        }
    }

    return 0;
}