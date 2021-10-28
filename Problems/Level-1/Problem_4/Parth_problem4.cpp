#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, seconds, minutes, hours, days;
    cin >> n;

    days = n / 86400;
    n = n % 86400;

    hours = n / 3600;
    n = n % 3600;

    minutes = n / 60;
    n = n % 60;

    cout << days << " day, " << hours << "hr, " << minutes << "min, " << n << "sec" << endl;
}