#include<stdio.h>
#include<stdlib.h>

int isprime(int n)
{
    int m;
    int flag=0;
    m=n/2;
    if(n == 1)
        return 0;    
    for(int i=2 ; i <= m ; i++)    
    {    
        if(n%i==0)    
        {        
            flag=1;    
            break;    
        }   
            
    }    
        if(flag==1)       
            return 0;  
}

int main()
{
    int size; 
    int sum = 0;
    int x;
    scanf("%d", &size);

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < size; i ++)
    {
        x = isprime(arr[i]);
        if(x == 0)
            sum = sum + 0;

        else
        {
            sum = sum + arr[i];
        }
    }

    printf("%d", sum);
}