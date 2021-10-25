#include <stdio.h>
#include<string.h>

int main()
{
    int T;
    scanf("%d", &T);
    for(int p = 0; p < T; p++)
    {
        int len;
        char instring[1000];
        scanf("%s", instring);
        len = strlen(instring);
        for(int i = 0; i < len; i++)
        {
            if( instring[i] <= 'Z' && instring[i] >= 'A')
            {
                instring[i] = instring[i] + 32;
            }

            else if(instring[i] >= 'a' && instring[i] <= 'z')
            {
                instring[i] = instring[i] - 32;
            }
        }
        for(int i = len-1; i >= 0; i--)
        {
            printf("%c", instring[i]);
        }
        printf("\n");
    }
}