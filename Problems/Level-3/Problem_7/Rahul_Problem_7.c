#include <stdio.h>
#include <string.h>

int main ()
{
  
int A;
  
scanf ("%d", &A);
  
while (A > 0)
    {
      
int n;
      
scanf ("%d", &n);
      
char a[n];
      
scanf ("%s", a);
      
int g = 0;
      
for (int i = 0; i < n - 1; i++)
	{
	  
g = 0;
	  
for (int j = i + 1; j < n; j++)
	    {
	      
if (a[j] != a[i])
		{
		  
g = 1;
		
}
	      
if (a[j] == a[i] && g == 1)
		{
		  
printf ("NO\n");
		  
g = 2;
		  
break;
		
}
	    
}
	  
if (g == 2)
	    {
	      
break;
	    
}
	
}
      
if (g == 1 || g == 0)
	{
	  
printf ("YES\n");
	
}
      
A--;
    
}

}
