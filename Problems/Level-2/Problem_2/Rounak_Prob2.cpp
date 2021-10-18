#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >>t;
    while (t--)
    {
        int n;
        cin >> n;
        n--;

        int sum = (int)(5 *( n/5* (n/5+1) / 2 ) + 7*(n/7*(n/7+1)/2) - 35 * (n/35 * (n/35+1)/2));

        cout << sum << endl;
    } 

    return 0;
}