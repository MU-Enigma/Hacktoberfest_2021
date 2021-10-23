#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n,price[100],flag;
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&price[i]);
		if(price[i]<0)
			flag = 1;
	}
	if(flag == 1)
	{
		printf("error\n");
		printf("(price cannot be negative)");
		return 0;
	}

	int min=price[0],min_position=0,max=price[0],max_position=0;

	for(int i = 1;i < n;i++)
    {
        if(price[i] > max)
        {
            max = price[i];
            max_position = i;
        }

        if(price[i] < min)
        {
            min = price[i];
            min_position = i;
        }
    }

    if(min_position < max_position)
    {
    	printf("%d %d %d",min,max,max-min);
    }
    else if (max_position < min_position)
    {
    	printf("0 0 0\n");
    	printf("(no transaction is done in this case)");
    }

}