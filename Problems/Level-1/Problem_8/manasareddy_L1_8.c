#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int rev,copy;
    int store[n];
     for(int i=0; i<n; i++)
     {
         rev=0;
         copy=arr[i];
         int n = log10(arr[i])+1;
         for(int j=0 ; j < n ;j++)
         {
             int rem= arr[i]%10; 
            rev= rev*10+ rem;
            arr[i]=arr[i]/10;
         }
         if(rev==copy)
         {
             store[i]=1;
         }
         else if (rev!=copy)
         {
             store[i]=0;
         }
         
     }

     for(int i=0; i<n; i++)
     {
         if(store[i]==1)
         {
             printf("True\n");
         }
         else if(store[i]==0)
         {
             printf("False\n");
         }
     }
}