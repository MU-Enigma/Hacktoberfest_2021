#include<stdio.h>
#include<string.h>

int main() 
{
    int n, count=0, i, j;
    int asciisum[100];
    char string[100], names[100][100];
    
    scanf("%d",&n);
    scanf("%s",string);
    
    for (i=0; i<n; i++)
    {
        names[i][0] = 'A';
        asciisum[i] = 'A';
    }

    for (i=0; i<strlen(string); i++)
    {
        if (string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='O' || string[i]=='U' || string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u')
        {
            count++;
            
            for (j=0; j<5; j++)
            {
                asciisum[j] += string[i];
                names[j][count] = string[i];
            }
        }
        
        if (count==5)
        {
            break;
        }
    }

    count=0;

    for (i=0; i<strlen(string); i++)
    {
        if (string[i]!='A' && string[i]!='E' && string[i]!='I' && string[i]!='O' && string[i]!='U' && string[i]!='a' && string[i]!='e' && string[i]!='i' && string[i]!='o' && string[i]!='u')
        {
            asciisum[count] += string[i];
            names[count][6] = string[i];
            count++;
        }
        
        if (count==n)
        {
            break;
        }
    }
   
    for (i=0; i<n; i++)
    {
        for (j=9; asciisum[i]>0; j--)
        {
            names[i][j] = asciisum[i]%10;
            asciisum[i] /= 10;
        }
    }

    for (i=0; i<n; i++)
    {
        for(j=0; j<7; j++)
        {
            printf("%c",names[i][j]);
        }

        for (j=7; j<10; j++)
        {
            printf("%d",names[i][j]);
        }

        printf("\n");
    }
}