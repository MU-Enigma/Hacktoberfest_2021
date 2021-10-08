#include<stdio.h> 

int primeo(int arr[],int n){ 
    int sum=0;
    int c=0;
    for(int i=0;i<n;i++){ 
        for(int j=0;j<=arr[i];j++){ 
            if(arr[i]%j==0){ 
                c++;
            }

        }

        if(c==2){ 
            sum = sum + arr[i];
        }

        c=0;
    }

    return sum;
}

int main(){ 
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){ 
        scanf("%d",&arr[i]);
    }

    printf("%d",primeo(arr,n));

    
}