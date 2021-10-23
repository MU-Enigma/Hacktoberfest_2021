#include<stdio.h>
int reverse(int A, int n)
{
    int rem, rev = 0;
    
    while(A != 0)
    {
        rem = A%10;
        rev = rev*10 + rem;
        A = A/10;
    }
    return rev;
}
//--------------------------------------------------------------------------------------------
int main()
{
    int N;
    scanf("%d", &N);

    int arra[N], rev_arra[N];
    
    for(int i=0;i < N;i++)
        scanf("%d", &arra[i]);
    
    for(int i=0;i < N;i++)
    {
        rev_arra[i] = reverse(arra[i], N);

        if(rev_arra[i] == arra[i])
            printf("True\n");
        else
            printf("False\n");
    }
    
}
