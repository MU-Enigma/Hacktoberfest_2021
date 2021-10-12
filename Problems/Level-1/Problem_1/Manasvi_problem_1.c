#include<stdio.h>
#include<ctype.h>
#include<string.h>

void main()
{
	int i, n;
	char arr[100][100], revarr[100][100];
	scanf("%d",&n);
	for (i=0; i<n; i++)
	{
		scanf("%s",arr[i]);
	}

	for (int j=0; j<n; j++)
	{
		for (i=0; i<strlen(arr[j]); i++)
	    {
		    if (islower(arr[j][i]))
		    {
			    revarr[j][strlen(arr[j])-i-1] = toupper(arr[j][i]);
		    }

		    if (isupper(arr[j][i]))
		    {
			    revarr[j][strlen(arr[j])-i-1] = tolower(arr[j][i]);
		    }
	    }
		printf("%s",revarr[j]);
		if (j<n-1)
		{
			printf("\n");
		}
	}