#include<stdio.h>
int isPrime(int n)
{
    int cnt = 0;

    for(int i = 2;i<n/2;i++)
    {
        if(n%i == 0)
        {
            cnt++;
        }

    }

    if(cnt > 0)
    {
         return 0;
    }
    
    else return 1;

}
int main ()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int sum = 0;

    for(int i=0;i<n;i++)
    {
        if(isPrime(arr[i]) == 1)
        {
            sum = sum + arr[i];
        }
    }

    printf("%d\n",sum);
    return 0;
}