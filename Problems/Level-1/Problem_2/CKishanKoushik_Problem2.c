/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main()
{
int n;
int count=0;
scanf("%d",&n);
int a[n];
for(int i=0; i<n; i++){

    scanf("%d",&a[i]);
}
for(int i=0; i<n; i++){

   if((a[i]%2==0)&&(i%2==0)){
                printf("%d ",a[i]);
                count++;
            }
}
if(count==0){

    printf("None");
}
}