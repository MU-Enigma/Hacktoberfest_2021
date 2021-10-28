#include<stdio.h>

int main()
{
    int n;
    //printf("Enter a number: ");
    scanf("%d",&n);
    int arr[n];
    int rand=0;
    //printf("Enter %d numbers in the array: ",n);
    for(int i=0; i<=n; i++)
    {
        scanf("%d ",&arr[i]);
    }
    for (int i=0;i<=n;i=i+2)
    {
        if (arr[i]%2==0)
        {
        printf("%d ",arr[i]);
        rand++;
        }
    }
    if (rand==0)
        printf("none");
}