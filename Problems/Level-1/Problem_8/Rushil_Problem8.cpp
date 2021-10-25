#include <iostream>

using namespace std;

int palindrome(int x)
{
    int sum = 0, temp = 0;
    int num = 0;
    num = x;
    while (x > 0)
    {
        temp = x % 10;
        sum = (sum * 10) + temp;
        x = x / 10;
    }

    if (sum == num)
    {
        return 1;
    }
    else
    {
        return -1;
    }
    // return 0;
}
int main()
{
    int n;
    long int x = 0;
    // cout << "Enter the number of test cases: ";
    cin >> n;
    int temp = 0;
    for (int i = 1; i <= n; i++)
    {
        // cout << "Enter the number to check if its a paliinfrome or not: ";
        cin >> x;
        temp = palindrome(x);
        if (temp == 1)
        {
            cout << "True" << endl;
        }
        else
        {
            cout << "False" << endl;
            ;
        }
    }
}