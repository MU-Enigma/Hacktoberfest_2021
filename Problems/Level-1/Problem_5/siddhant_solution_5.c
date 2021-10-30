#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void call(int *arr,int n)
{
    int sum=0;
    for(int i=0; i<n;i++)
    {
        int c=0;
        for (int j=1;j<arr[i];j++)
        {
            if (arr[i]%j==0)
            c+=1;
            
        }
        if (c==1){
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}

int main()
{
    int element;
    scanf("%d", &element);
    int arr[element];
    for(int i=0; i<element; i++)
    {
        scanf("%d", &arr[i]);
    }
    call(arr,element);
}