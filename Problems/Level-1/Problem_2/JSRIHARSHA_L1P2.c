#include<stdio.h>
#include<stdlib.h>
int main()
{
    int print=0;
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i=i+2)
    {
        if(arr[i]%2==0)
        {
            printf("%d ",arr[i]);
            print++;

        }
        else
        {
            continue;
        }
    }
    if(print==0)
    {
        printf("None");
    }
}