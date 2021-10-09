#include <iostream>

using namespace std;

int main()
{
    int n,j,k;
    float sumk,sumj,meank,meanj;
    cin >> n >> k >> j;
    int arr[n];
    for(int i = 0;i < n;i++)
    {
        cin >> arr[i];
        if(i < k)
            sumk += arr[i];
        if(i >= n - j)
            sumj += arr[i];
    }
    meank = sumk/k;
    meanj = sumj/j;
    cout << meank - meanj << endl;
    

    return 0;
}

