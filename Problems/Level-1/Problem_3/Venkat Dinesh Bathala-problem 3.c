/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
int main()
{
 int n;       
 int a;
 int b;
 int i;
 scanf("%d",&n);  
 scanf("%d",&a);
 scanf("%d",&b);
 int array[n-1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
 float result, sum1, sum2, s1=0;
 float s2=0;
    for(i=0;i<a;i++)
    {
        s1=s1+array[i];
    }
    for(i=0;i<b;i++)
    {
        s2=s2+array[n-1-i];
    }
sum1 = s1/a;
sum2 = s2/b;
result = sum1-sum2;
printf("%0.1f\n",result);
return 0;
}