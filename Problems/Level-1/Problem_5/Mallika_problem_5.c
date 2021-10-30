#include<stdio.h>
int primesum(int *a, int n)
{    
    int sum=0;
    int count=0;
    for(int i=0; i<n; i++)
    {
        count=0;
        for(int j=1; j<a[i]; j++)
        {
            if(a[i]%j==0)
            {
                count++;
            }
        }

        if(count==1){
            sum=sum+a[i];

        }
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);

    }
    printf("%d", primesum(arr, n));
}

