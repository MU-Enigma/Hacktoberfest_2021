#include<stdio.h>
#include<string.h>
int main ()
{
    char str[10000];
    fgets(str,sizeof(str),stdin);


    for(int i=0;i<strlen(str);i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
           continue;
        }
        printf("%c",str[i]);
    }

    return 0;
}