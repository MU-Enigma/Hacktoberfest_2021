#include<stdio.h>
int ispalindrome(int n){
int i, m,j, sum=0;
m=n;
if(n>10){
while(n!=0)
{
j=n%10;
sum=sum*10+j;
n=n/10;
}
}
if(sum==m){
return 1;
}
else{
    return 0;
}
}
int main(){
    int n;
    scanf("%d",&n);
    int array_testcases[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array_testcases[i]);
      }
      for(int i=0;i<n;i++){
          int num= ispalindrome(array_testcases[i]);
          if(num == 1){
              printf("True\n");
          }
          else
          printf("False\n");
      }
      return 0;
}