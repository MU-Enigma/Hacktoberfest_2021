#include<stdio.h>
#include<string.h>
int main ()
{
    char str[1000];

    int k;
    scanf("%d", &k);
    //char A;
for(int i=0;i<k;i++)
{
    scanf ("%s",str);
    int n = strlen(str);
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
    printf("\n");
}
    return 0;
}