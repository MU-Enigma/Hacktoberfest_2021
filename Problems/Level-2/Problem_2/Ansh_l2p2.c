#include <stdio.h>
#include <stdlib.h>

int main()
{

  int t, N, sum;

  printf("Enter the number of test cases: ");
  scanf("%d", &t);

  for(int n=0; n<t; n++)
  {
    printf("Enter the number: ");
    scanf("%d", &N);

      sum = 0;
      for(int n=5; n<N; n++)
      {
        if(n%5 == 0)
        {
          sum += n;
        }
      }
      for(int n=7; n<N; n++)
      {
        if(n%7 == 0)
        {
          sum += n;
        }
      }
      for(int n=35; n<N; n++)
      {
        if(n%35 == 0)
        {
            sum -= n;
        }
      }

    printf("sum of all the 5 & 7 multiples till the number %d is %d\n",N,sum);
    }

}