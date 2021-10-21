#include<stdio.h>

int main(){
    int n;
    char ch[50];
    scanf("%d",&n);
    scanf("%s", ch);//%[^\n]
    for(int i=n-1; i>=0; i--)
    {
        if(ch[i]>=65 && ch[i]<=91)
        printf("%c", (char)(ch[i]+32));
        else
        printf("%c", (char)(ch[i]-32));
    }
}