#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int n, i, arr[64], r, count, num;
    cin>>n;
    string output;
    for(count = 0; count < n; ++count)
    {
        i = 0;
        cin >> num;
        while(num!=0)
        {
            r = num%2;
            arr[i++] = r;
            num /= 2;
        }
        arr[i] = 0;
        char c;
        for(int j=i-1;j>=0;j=j-8)
        {
            c = 0;
            for(int k = 7; k > -1; --k)
            {
                c += arr[j-6+k]*pow(2, k);
            }
            output.push_back(c);
        }
    }
    cout << output << '\n';
}