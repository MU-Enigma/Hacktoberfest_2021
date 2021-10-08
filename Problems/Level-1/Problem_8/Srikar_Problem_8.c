#include<stdio.h> 
#include<math.h>
int reversal(int n){ 
    int buff=n; 
    int c =0; 
    int rev=0;
    while(buff>=1){ 
        buff=buff/10; 
        c++;
    } 
    for(int i =c ; i>=1; i--){  
        int temp = n%10;
        rev=rev+(int)pow(10,i-1)*temp;  
        //printf("%d\n", rev);
        n=n/10;  
    }

     return rev;
}
int main(){ 
    int n; 
    scanf("%d" , &n); 

    int arr[n];
    for(int i=0;i<n;i++){ 
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){ 

          int rev=reversal(arr[i]);
          
        if(rev==arr[i]){   
            printf("True\n");
        }
    
        else{ 
            printf("False\n");
        }

    }
  

    
    
}