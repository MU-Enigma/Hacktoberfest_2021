#include <stdio.h>

int reverse(int n)
{
    int sum =0;
    int rem;
    while(n>0)
    {
        rem=n%10;
        sum=(sum*10)+rem;
        n=n/10;
        
    }
    return sum;
    
}



int main()
{
    int n;
    scanf("%d",&n);
    
    
    for(int i=0;i<n;i++)
    {
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);

             int palin=reverse(arr[i]);
            if(palin !=arr[i]){
                printf("False\n");
                break;
            }
            else{ 
                printf("True\n");
                break;
            }
      
        }
       
    }
    
}