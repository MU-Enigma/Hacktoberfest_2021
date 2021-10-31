#include <stdio.h>

int main()
{
    int ar[10000];
    for(int  i = 9 ; i >= 0 ; i--)
        ar[9-i] = i;

    int carry = 0;
    int index = 8;
    int z = 0;
    for( z = 2 ; z <= 1000 ; z++)
    {

        for(int i = 0 ; i <= index; i++)
            {
                int prod = ar[i] * 123456789 + carry;
                carry = prod / 10;
                ar[i] = prod%10;
            }

            while(carry>0)
            {
                    ar[++index] = carry%10;
                    carry/=10;
            }

        if(ar[5*z-1] == 9 && ar[5*z - 2] == 3 && ar[5*z - 9] == 8 && ar[5*z- 10] == 6)
        {
            for(int i = (5*z - 1); i>=(5*z-10) ; i--)
            {
                printf("%d" , ar[i]);
            }
            break;
        }
    }

    return 0;
   
}