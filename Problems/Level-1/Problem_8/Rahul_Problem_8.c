#include<stdio.h>

int rev (int x)
{
  int a = 0, rem;
  while (x > 0)
    {
      rem = x % 10;
      a = a * 10 + rem;
      x = x / 10;
    }
  return a;
}

int
main ()
{
  int n;
  scanf ("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++)
    {
      scanf ("%d", &arr[i]);
    }

  for (int i = 0; i < n; i++)
    {
      int pallin = rev (arr[i]);
      if (pallin != arr[i])
	{
	  printf ("False\n");
	}
      else
	{
	  printf ("True\n");
	}
    }
  return 0;
}