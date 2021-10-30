//
//  main.c
//  lp
//
//  Created by Khushang Zaveri on 31/10/21.
//

#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int b[N];
    int i=0;
    int flag=0;
    while(i<N)
    {
        scanf("%d", &b[i]);
        i++;
    }
    int a=0;
    while(a<N)
    {
        if((b[a]%2==0)&&(a%2==0))
        {
            printf("%d ", b[a]);
            flag+=1;
        }
        a++;
    }
    if(flag==0)
    {
        printf("None");
    }
}
