#include<stdio.h>

int main()
{
 int n,k,j;       
 int i;

 scanf("%d",&n);  
 scanf("%d %d",&k,&j);
 int a[n-1];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

 float result, p1, p2, s1=0;
 float s2=0;

    for(i=0;i<k;i++)
    {
        s1=s1+a[i];
    }

    for(i=0;i<j;i++)
    {
        s2=s2+a[n-1-i];
    }

p1 = s1/k;
p2 = s2/j;

result = p1-p2;

printf("%0.1f\n",result);

return 0;
}