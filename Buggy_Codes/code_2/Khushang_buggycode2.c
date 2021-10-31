//
//  main.c
//  hack buggy 2
//
//  Created by Khushang Zaveri on 31/10/21.
//

#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=t;i>=0;i--)
    {
        int n,d,y;
        scanf("%d",&n);
        scanf("%d",&d);
        scanf("%d",&y);
        if((d%y==0)||((n+1-d)%y==0&&(n+1-d)>0))
             printf("YES\n");
        else{
        printf("NO\n");
        }
    }
}
