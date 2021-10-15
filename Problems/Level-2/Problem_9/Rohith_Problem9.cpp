#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef vector < int > VI;
typedef vector < VI > VVI;
typedef pair < int , int > PII;

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

void solve(){
    int n,y;
    cin >> n >> y;

    vector < int > v(y,0);

    FOR(i,0,n-1){
        int x;
        cin >> x;
        if(x <= y){
            v[x-1]++;
        }
    }
    for(int i : v){
        if(i == 0){
            cout << "-1" << "\n";
            return;
        }
    }
    int k = *min_element(ALL(v));
    cout << k << endl;
}

int main(){
    BOOST
    solve();
}
