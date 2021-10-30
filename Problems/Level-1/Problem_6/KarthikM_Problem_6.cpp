#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a > b ? b : a)

typedef long long LL;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define ALL(x) x.begin(),x.end()
#define PB push_back
#define MP make_pair
#define SZ(x) x.size()
#define SET(a , b) memset(a , b , sizeof(a))
#define REP(i, n) for(int i = 0 ; i < n ; i++)
#define FOR(i, a, b) for(int i = a ; i <= b ; i++)
#define FORD(i, a, b) for(int i = a ; i >= b ; i--)
#define BOOST ios_base::sync_with_stdio(0);
#define TCSOLVE() int tests; cin >> tests; REP(i, tests) solve();

const int N = 2e5 + 5, M = 2e5 + 5, mx = 1e9, LN = 20, mod = 1e9 + 7;
// vector<vector<int>> a;

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main()
{

    //---------------------
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //---------------------
    
    int t;  cin>>t;
    while(t--)
    {
        string s;   scanf("\n");    getline(cin,s);
        REP(i,s.size())
        {
            if(s[i] == 'a'||s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u'||s[i] == 'A'||s[i] == 'E'||s[i] == 'I'||s[i] == 'O'||s[i] == 'U')
                continue;
            cout<<s[i];
        }
        cout<<endl;
    }
}