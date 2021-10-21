#include <stdio.h>
#include <stdlib.h>
int main()
{
  int j,n,d;
  int k=0,a[100];
  scanf("%d",&n);
  for(int j=0;j<n;j++)
  {
    scanf("%d",&a[j]);
    k++;
  }
   for(j=0;j<k;j=j+2)
    {
       d=a[j]-a[j+1];
       if(j<k-2)
         {
            if(d==0)
              {
                printf("%d ",a[j]);
                printf("%d \n",a[j+1]);
              }
             else
              {
                printf("%d ",a[j]);
                printf("%d \n",a[j+1]);
                printf("%d %d",j,abs(d));
                break;
              }
         }
       else
         {
            printf("%d %d",j,abs(a[j]-a[j-1]));
         }
   }
    return 0;
}