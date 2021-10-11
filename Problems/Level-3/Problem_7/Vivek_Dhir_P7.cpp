#include<bits/stdc++.h>
using namespace std;
#define VIVEK_DHIR ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

void solve()
{
    int n; string s;
    cin>>n>>s;
    map<char, bool> mp;
    for(int i=0; i<n; i++){
        if(s[i]==s[i+1] && (i+1)!=n)
            continue;
        if(mp.find(s[i]) == mp.end())
            mp[s[i]] = true;
        else{
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}

int main()
{
    VIVEK_DHIR
    int t;
    cin>> t;
    while(t--)
    {
        solve();
    }
}