#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        char word[20];
        scanf("%s", word);
        int len=strlen(word);
        for(int i=len-1;i>=0;i--)
        {
            if((int)word[i]>=65&&(int)word[i]<=90)
            {
                printf("%c",word[i]+32);
            }
            else
            {
                printf("%c",word[i]-32);
            }
        }
        printf("\n");
    }
}