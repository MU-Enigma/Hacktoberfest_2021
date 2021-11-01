#include <iostream>

using namespace std;
int main()
{
    int n, d, h, m, s;
    cin >> n;
    d = n/86400;
    h = (n-d*86400)/3600;
    m = (n - d*86400 - h*3600)/60;
    s = n - d*86400 - h*3600 - m*60;
    cout << d << " day, " << h << " hr, " << m << " min, " << s << " sec" << '\n';
}