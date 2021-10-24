#include<stdio.h>
#include<math.h>
#include<stdbool.h>


//implemented big number power from geeksforgeeks
int multiply(int x, int res[], int res_size) 
{
 
// Initialize carry
    int carry = 0;
 
// One by one multiply n with
// individual digits of res[]
    for (int i = 0; i < res_size; i++) 
    {
        int prod = res[i] * x + carry;
 
    // Store last digit of
    // 'prod' in res[]
        res[i] = prod % 10;
 
    // Put rest in carry
        carry = prod / 10;
    }
 
// Put carry in res and
// increase result size
    while (carry) 
    {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}
 
// This function finds
// power of a number x
bool powercheck(int x, int n, int index)
{
    bool b=false;
    int res[10000];
    int res_size = 0;
    int temp = x;
 
// Initialize result
    while (temp != 0) 
    {
        res[res_size++] = temp % 10;
        temp = temp / 10;
    }
 
// Multiply x n times
// (x^n = x*x*x....n times)
    for (int i = 2; i <= n; i++)
    {
        res_size = multiply(x, res, res_size);
    }
    
    if(res[index-1]==9 && res[index-2]==3 && res[index-9]==8 && res[index-10]==6)
    {
        for (int i = index-1; i >= index-10; i--)
        {
            printf("%d",res[i]);
            b=true;
        }
    }
        return b;  
}
 
int main() 
{

    int base = 123456789;
    int index=5;

    
    for(int r=1;r<1000;r++)
    {
        if(powercheck(base, r,index*r))
        {
            return 0;
        }
        
    }
    return 0;
}