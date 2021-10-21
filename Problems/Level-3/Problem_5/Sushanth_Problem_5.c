#include <stdio.h>
#include <stdlib.h>
int main()
{ 
int b,n;
int a=0,box[100],i;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&box[i]);
a++;
}
int box1[a],box2[a];
for(i=0;i<a;i++)
{
    box1[i]=box[i];
    box2[i]=i;
}
int coins=a;
if(coins>2)
{
do
{
    int sum1=0,sum2=0;
    
    for(i=0;i<(coins/3);i++)
      {
         sum1=sum1+box[i];
      }
    for(i=(coins/3);i<(2*(coins/3));i++)
      {
         sum2=sum2+box[i];
      }
      
      b=0;
            if(sum1==sum2)
              {  
                  
               for(i=(2*(coins/3));i<coins;i++)
                 {
                   box[b]=box[i];
                   b++;
                 }
                   coins=b;
                   printf("%d %d\n",sum1,sum2);
                   if(coins==2)
                   {
                      printf("%d %d\n",box[coins-2],box[coins-1]);
                      break;
                   }
                  if(coins==1 || coins==0)
                   {
                      break;
                   }
              }
             
            else if(sum1<sum2)
              {
                  
               for(i=0;i<(coins/3);i++)
                 {
                   box[b]=box[i];
                   b++;
                 }
                   coins=b;
                   printf("%d %d\n",sum1,sum2);
                   if(coins==2)
                   {
                       printf("%d %d\n",box[coins-2],box[coins-1]);
                       break;
                   }
                   if(coins==1 || coins==0)
                    {
                       break;
                    }
              }
            else if(sum2<sum1)
              {
                   
               for(i=(coins/3);i<(2*(coins/3));i++)
                 {
                   box[b]=box[i];
                   b++;
                 }
                   coins=b;
                   printf("%d %d\n",sum1,sum2);
                   if(coins==2)
                   {
                       printf("%d %d\n",box[coins-2],box[coins-1]);
                       break;
                   }
                   if(coins==1 || coins==0)
                    {
                       break;
                    }
              }
}
while(1>0);
}
else if(coins==2)
{
    printf("%d %d\n",box[0],box[1]);
    if(box[0]>box[1])
    {
       printf("%d %d\n",1,(box[0]-box[1]));
    }
    if(box[0]<box[1])
    {
       printf("%d %d\n",0,(box[1]-box[0]));
    }
}
 int xob;
    for(int p=0;p<a;p++)
    {
    for(int q=p+1;q<a;q++)
    {
      if(box1[p]>box1[q])
       {
        xob=box1[p];
        box1[p]=box1[q];
        box1[q]=xob;
        xob=box2[p];
        box2[p]=box2[q];
        box2[q]=xob;
       }
    }
    }
    printf("%d %d\n",box2[0],box1[1]-box1[0]);
    return 0;
}
