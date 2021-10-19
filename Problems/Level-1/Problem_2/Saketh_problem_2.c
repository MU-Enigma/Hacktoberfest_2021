#include<stdio.h>
int main () 
{
int n, k= 0;
scanf ("%d", &n);
int a[n];
for (int j = 0; j< n; j++)
    {scanf ("%d", &a[j]);} 
for (int j= 0; j< n; j++)
    {
if ((j%2 == 0) && (a[j] % 2 == 0))
	{printf ("%d ", a[j]);
k++;
}
}
if (k== 0)
    {printf ("None\n");}
return 0;
}