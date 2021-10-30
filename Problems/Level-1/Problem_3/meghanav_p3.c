#include<stdio.h>

int main()
{
    float ans;
    int n;
    //printf("Enter a number: ");
    scanf("%d",&n);
    int j;
    int k;
    //printf("Enter the first number of elements: ");
    scanf("%d",&j);
    //printf("Enter the second number of elements: ");
    scanf("%d",&k);
    int arr[n];
    
    for(int i=0; i<n; i++)
    {
        //printf("Enter %d numbers in the array: ",i);
        scanf("%d",&arr[i]);
    }
    float count1=0;
    float count2=0;
    float mean1;
    float mean2;
    for (int i=0;i<j;i++)
    {
        count1=count1+arr[i];
    }
    mean1=count1/j;
    for (int i=n-1;i>n-k-1;i--)
    {
        count2=count2+arr[i];
        //printf("trial %d ",arr[i]);
    }
    mean2=count2/k;
    //printf("%f ",count1/4);
    ans=mean1-mean2;
    printf("%f",ans);
}