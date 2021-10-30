#include<stdio.h>
int main(){
    int n,k,j;
    scanf("%d%d%d",&n,&k,&j);


    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

   float sumofk=0;
   float sumofj=0;
   //sum of first k num
   for(int i=0;i<k;i++){
       sumofk=sumofk+a[i];

   }
   //sum of last j elements
   for(int i=0;i<j;i++){
       sumofj=sumofj+a[n-i-1];
   }

   float m1 = sumofk/k;
   float m2 = sumofj/j;

   printf("%0.1f",m1-m2);




    
}