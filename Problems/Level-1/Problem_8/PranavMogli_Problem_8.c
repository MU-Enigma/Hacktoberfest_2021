#include<stdio.h>
int main(){
    int num = 0;
    scanf("%d", &num);

    for(int i=0;i < num;i++)
    {
        int n,r,temp;
        int sum = 0;

        scanf("%d",&n);

        temp = n;
        while(n>0){
            r = n%10;
            sum = (sum*10)+r;
            n=n/10;
        }
        if(temp==sum)
            printf("True\n");
    
        else
            printf("False\n");
    }
    return 0;
}