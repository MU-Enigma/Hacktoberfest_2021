#include<stdio.h>

int main()
{
    int n =0;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int flag =0;
    for(int j=0;j<n;j++)
    {
        if((arr[j]%2==0)&&(j%2==0))
        {
            printf("%d ",arr[j]);
            flag =1;
        }
    }
    if(flag==0)
    {
        printf("none");
    }
}
