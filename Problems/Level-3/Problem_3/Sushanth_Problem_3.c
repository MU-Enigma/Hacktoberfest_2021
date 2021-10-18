
#include <stdio.h>
#include <stdlib.h>


int main(int n,char *y[])
{
int i , diff;
int a=0,box[n];
for(int i=2;i<n;i++)
{
box[a]=atoi(y[i]);
a++;
}
for(i=0;i<a;i=i+2)
   {
       diff=box[i]-box[i+1];
       if(i<a-2)
         {
            if(diff==0)
              {
                printf("%d ",box[i]);
                printf("%d \n",box[i+1]);
              }
             else
              {
                printf("%d ",box[i]);
                printf("%d \n",box[i+1]);
                printf("%d %d",i,abs(diff));
                break;
     
              }
       
         }
       else
         {
            printf("%d %d",i,abs(box[i]-box[i-1]));
         }
   }
 
   
    
    return 0;
}

