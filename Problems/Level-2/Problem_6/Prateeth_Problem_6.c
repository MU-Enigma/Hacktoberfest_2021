#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int t;
    scanf("%d",&t);
    
    for(int i=0; i<t; i++){
        
        int n;
        scanf("%d",&n);
        
        int arr[n];
        
        for(int j=0; j<n; j++){
            scanf("%d",&arr[j]);    
        }
        
        int even[n];
        int odd[n];
        
        int k=0;
        int l=0;

        for(int j=0; j<n; j++){
            
            if(arr[j]%2==0){
                even[k]=arr[j];
                k++;
            }
            else if(arr[j]%2!=0){
                odd[l]=arr[j];
                l++;
            }
        }
        
        for(int x=0; x<k-1; x++){
            for(int y=x+1; y<k; y++){
                if(even[x]>even[y]){
                    int temp=even[x];
                    even[x]=even[y];
                    even[y]=temp;
                }
            }
        }
        
        for(int x=0; x<l-1; x++){
            for(int y=x+1; y<l; y++){
                if(odd[x]>odd[y]){
                    int temp=odd[x];
                    odd[x]=odd[y];
                    odd[y]=temp;
                }
            }
        }

        k=0;
        l=0;
        
        for(int a=0; a<n; a++){
            if(a%2==0){
                printf("%d ",odd[l]);
                l++;
            }
            else if(a%2!=0){
                printf("%d ",even[k]);
                k++;
            }
        }
        printf("\n");
    }
}
