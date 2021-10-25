#include <bits/stdc++.h>
// #define MAX_SIZE

using namespace std;

int check(int arr[], int n, int m)
{
    int count = 0;
    int i = 0;
    int temp = m;
    // for(int i =0;i<n;i++){
    int count_temp = 0;
    int brr[1000];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        j = i;
        while (m == arr[j] && m >= 1)
        {
            brr[count_temp++] = m;
            // cout << m << " ";
            j++;
            m--;
        }
        m = temp;
    }
    // cout << "the m times occurance is: "<< count;
    count = 0;
    for (int i = 0; i < count_temp; i++)
    {
        // cout << brr[i] << " ";
        count++;
    }
    cout << endl;
    // cout << //"The desired m value if: "<< count/m;
    cout << count / m;
}

int main()
{
    int n = 0, m = 0;
    int arr[9999];

    // cout << "enter the number of pseudo numbers: ";
    cin >> n >> m;

    // cout << "enter the number of birthday bombs a person gets: ";
    // cin>> m;

    for (int i = 0; i < n; i++)
    {
        cin >> *(arr + i);
    }

    check(arr, n, m);
}