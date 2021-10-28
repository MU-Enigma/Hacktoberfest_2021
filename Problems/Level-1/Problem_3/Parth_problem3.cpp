#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int k, j;
    cin >> k >> j;
    int arr[n];

    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }

    float meanOfK = 0;
    for (int i=0;i<k;i++) {
        meanOfK = meanOfK + arr[i];
    }

    float finalK = meanOfK/k;

    float meanOfJ = 0;
    for(int i = (n - 1); i > (n - j - 1); i--)
    {
        meanOfJ = meanOfJ + arr[i];
    }

    float finalJ = (meanOfJ) / j;
    
    cout << finalK - finalJ << endl;
}