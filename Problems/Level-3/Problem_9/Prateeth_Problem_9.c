#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void unsigned_decimal_to_binary_n1(int n1){
    
    unsigned long long int bin[32];
    long long int i = 0;
    unsigned long long int bin_int[32];
    
       while (n1 > 0) {
 
        bin[i] = n1 % 2;
        n1 = n1 / 2;
        i++;
    }

     i = 0;
    
        for(int j=31; j>=0; j--){

         bin_int[i] = bin[j];
         i++;   
        }
    
        int dec=0;

        for(i=0; i<32; i=i+8){
            int a=7;
            for(int k=0; k<8; k++){
            
            dec = dec + (pow(2,a) * bin_int[i+k]);
            a--;
        }
    printf("%c", dec);
    dec=0;
    }
    
    
}

int main(){
    
    int n;
    scanf("%d",&n);
    
    unsigned int arr[1000];

    for(int i=0; i<n; i++){
        scanf("%u", &arr[i]);
    }
    
    for(int i=0; i<n; i++){
    unsigned_decimal_to_binary_n1(arr[i]);

    }
}