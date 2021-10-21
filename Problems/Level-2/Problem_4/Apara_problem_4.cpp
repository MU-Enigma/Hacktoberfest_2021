#include <bits/stdc++.h>
using namespace std;
 
int minimumDiff(int a[], int n)
{
    int sum = 0;
 
    for(int i = 0; i < n; i++)
        sum += a[i];
 
    int subsum = 0;
 
    int min_dif = INT_MAX;
 
    for(int i = 0; i < n - 1; i++)
    {
        subsum += a[i];
 
        int dif = abs((sum - subsum) - subsum);
 
        if (dif < min_dif)
            min_dif = dif;
    }
 
    return min_dif;
}
 
int main()
{
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
 
    cout << minimumDiff(a, n) << endl;
 
    return 0;
}