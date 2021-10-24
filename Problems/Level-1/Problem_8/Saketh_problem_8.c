#include<stdio.h>
int reverse (int x)
{
  int a = 0, m;
  while (x > 0)
    {
      m = x % 10;
      a = a * 10 + m;
      x = x / 10;
    }
  return a;
}
int main ()
{
  int n;
  scanf ("%d", &n);

  int arr[n];
  for (int j = 0; j < n; j++)
    {
      scanf ("%d", &arr[j]);
    }

  for (int j = 0; j < n; j++)
    {
      int palin = reverse (arr[j]);
      if (palin != arr[j])
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