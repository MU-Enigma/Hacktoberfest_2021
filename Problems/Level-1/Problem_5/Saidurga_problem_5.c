#include<stdio.h>

void primenum(int k,int arr[]){
    int sum=0;
    for(int i=0;i<k;i++){
       int count=0;
        for(int j=1;j<arr[i];j++)
        {
            if (arr[i]%j==0)
            {
                count++;
            }
        }
        if(count==1)
        sum=sum+arr[i];
    }
    printf("%d",sum);

}

int main()
{
    int k;
    scanf("%d",&k);
    int arr[k];
    for(int i=0;i<k;i++)
    {
        scanf("%d",&arr[i]);
    }
    primenum(k,arr);
}


