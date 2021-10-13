#include<stdio.h>
#include<string.h>
int main ()
{
    char str[1000];

    scanf ("%s",str);
    int n = strlen(str);
    char A;

    for(int i=n-1; i>=0;i--)
    {
        if(str[i]>='A' &&str[i] <= 'Z')
        {
            printf("%c",str[i] + 32);
        }
        else
        {
            printf("%c",str[i]-32);
        }
    }

    return 0;
}