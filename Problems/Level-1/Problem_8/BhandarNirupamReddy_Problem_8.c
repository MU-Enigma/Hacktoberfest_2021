#include<stdio.h>
#include<string.h>
int check(char *S, char *reversed_S)
{
    int count = 0;
    int len = strlen(S);

    for(int b=0;b < len;b++)
    {
        if(S[b] == reversed_S[b])
        {
            count++;
        }
    }

    if(count == len)
        return 1;
        
    else
        return 0;
}
//--------------------------------------------------------------------------------------------
int main()
{
    int N;
    scanf("%d", &N);

    for(int i=0;i < N;i++)
    {
        char str[100];
        scanf("%s", str);
        int len = strlen(str);
        
        char rev_str[100];

        for(int a=0;a < len;a++)
        {
            rev_str[a] = str[len-1-a];
        }

        int check_result;
        check_result = check(str, rev_str);

        if(check_result == 1)
            printf("True\n");
        else
            printf("False\n");
    }
    
}