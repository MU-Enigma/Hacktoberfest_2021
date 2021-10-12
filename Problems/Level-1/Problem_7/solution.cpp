#include <bits/stdc++.h>

using namespace std;

string removeDuplicatesFromString(string str)
{

    int counter = 0;

    int i = 0;
    int size = str.size();

    int x;

    int length = 0;

    while (i < size) {
        x = str[i] - 97;

        if ((counter & (1 << x)) == 0) {

            str[length] = 'a' + x;

            counter = counter | (1 << x);

            length++;
        }
        i++;
    }

    return str.substr(0, length);
}

int main()
{
    string str = "hhhhhheelloo oppeennsoooouuurccee";
    cout << removeDuplicatesFromString(str);
    return 0;
}
