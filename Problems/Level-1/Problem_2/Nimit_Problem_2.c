#include<stdio.h>
int even_no = 0;


int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2 == 0 && i%2 == 0)
        {
            even_no++;
            printf("%d ",arr[i]);
        }
        
        
        /* code */
    }
    if(even_no==0)
    {
        printf("None");
    }

    
    
}