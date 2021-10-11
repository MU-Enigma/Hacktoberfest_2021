#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        string str;
        cin >> str;

        for(int i = str.length()-1 ; i >= 0; i--)
        {
            str[i] = isupper(str[i])?tolower(str[i]):toupper(str[i]);
            cout << str[i];
        }
        cout << "\n";
    }
    return 0;
}