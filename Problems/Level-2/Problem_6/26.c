#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    for(int i=0;i<x;i++){
    int n,a[100],b[100],c[100];
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
         if(a[j]>a[j+1]){
             int temp = a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
         }   
        }
    }
    int j=0;
    for(int i=0;i<n;i++){
            if(a[i]%2==0){
                b[j]=a[i];
                j++;
        }
    }
    int k=0;
    for(int i=0;i<n;i++){
            if(a[i]%2==1){
                c[k]=a[i];
                k++;
        }
    }
    
    for(int i=0;i<n/2;i++){
        printf(" %d", c[i]);
        printf(" %d", b[i]);
    }printf("\n");
    }
}