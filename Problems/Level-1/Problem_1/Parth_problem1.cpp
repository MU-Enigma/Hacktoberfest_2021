#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string arr[n];

    for (int i=0;i<n;i++) {
        cin >> arr[i];
        for (int j=0;j<arr[i].length();j++) {
            arr[i][j] = isupper(arr[i][j])?tolower(arr[i][j]):toupper(arr[i][j]);
        }
        reverse(arr[i].begin(), arr[i].end());
    }


    for (int i=0;i<n;i++) {
        cout << arr[i] << endl;
    }
}