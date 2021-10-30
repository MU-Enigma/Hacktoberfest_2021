#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);

    for(int i=0;i < N;i++)
    {
        int input,temp,remainder;
        int sum = 0;

        scanf("%d",&input);

        temp = input;
        while(input>0){
            remainder = input%10;
            sum = (sum*10)+remainder;
            input=input/10;
        }
        if(temp==sum)
            printf("True\n");
    
        else
            printf("False\n");
    }
    return 0;
}