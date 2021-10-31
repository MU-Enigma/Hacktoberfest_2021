#include<stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    while (n>0) 
    {
        char a[20];
        scanf("%s",a);
        int b = strlen(a);
        
        for (int i=b-1; i>=0; i--) 
        {
            if (a[i] >= 65 && a[i] <= 90)
            {
                printf("%c",a[i]+32);
            }
            else if (a[i] >= 97 && a[i] <= 122)
            {
                printf("%c",a[i]-32);
            }
            
   }
        printf("\n");
        n--;
    }
}
