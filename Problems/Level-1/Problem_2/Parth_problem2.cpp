#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    bool b = false;

    for (int i = 0;i<n;i++) {
        cin >> arr[i];
    }

    for (int i=0;i<n;i++) {
        if (i %2 == 0 && arr[i] % 2 == 0) {
            cout << arr[i] << " ";
            b = true;
        }
    }

    if (!b) {
        cout << "None";
    }
}