#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int val, s;
        cin >> val;
        val--;

        s = 5*((val/5)*(val/5 + 1) /2) + 7*((val/7)*(val/7 + 1) /2) - 35*((val/35)*(val/35 + 1) /2);

        cout << s << endl;
    }
    return 0;
}