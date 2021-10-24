#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int n;
	int i=0,j=0,k=0;
	scanf("%d",&n);
	int arr[n];
	for(i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
		j++;
	}
	for(i = 0 ; i < j ; i+=2)
	{
		k = arr[i]-arr[i+1];
		if(i < j-2)
		{
			if(k==0)
			{
				printf("%d %d\n",arr[i],arr[i+1]);
			}
			else
			{
				printf("%d %d\n",arr[i],arr[i+1]);
				printf("%d %d",i,abs(k));
				break;
			}
		}
		else
		{
			k = abs(arr[i]-arr[i-1]);
			printf("%d %d",i,k);
		}	
	}
	return 0;
}