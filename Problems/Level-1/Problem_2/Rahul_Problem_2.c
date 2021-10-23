#include<stdio.h>
int main () 
{
int x, g = 0;
scanf ("%d", &x);
int a[x];
for (int i = 0; i < x; i++)
    {scanf ("%d", &a[i]);} 
for (int i = 0; i < x; i++)
    {
if ((i % 2 == 0) && (a[i] % 2 == 0))
	{printf ("%d ", a[i]);
g++;
}
}
if (g == 0)
    {printf ("None\n");}
return 0;
}