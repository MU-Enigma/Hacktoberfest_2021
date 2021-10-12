#include<stdio.h>
#include<string.h>

int check(char arr[], int i)
{
    if (arr[i]!=arr[i+1])
        return i+1;
        
    for (int j=i; j<strlen(arr); j++)
    {
        if (arr[i]!=arr[j])
            return j;
    }
}

void main()
{
	char arr[100][100],ch;
	int i,j,flag=0,n,size;
	
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
	    scanf("%d",&size);
	    scanf("%s",arr[i]);
	}
	
	for(int k=0; k<n; k++)
	{
        flag=0;
	for (i=0; i<strlen(arr[k]); i++)
	{
	    ch = arr[k][i];
	    i = check(arr[k],i);
	    
	    for (j=i; j<strlen(arr[k]); j++)
	    {
	        if (arr[k][j]==ch)
	        {
	            flag = 1;
	            printf("NO\n");
	            break;
	        }
	    }
	    
	    if (flag==1)
	        break;
	}
	if (flag==0)
	    printf("YES\n");
	}
}