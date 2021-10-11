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

const int N = 2e5 + 5, M = 2e5 + 5, mx = 1e9;

void solve(){
    int b,r,x;
    cin >> b >> r >> x;

    if(b >= r){
        cout << "-1" << endl;
        return;
    }

    int k = ceil(float(x-r)/(r-b));

    int time = k*(b+r);
    time += x-(r-b)*k;
    cout << time << endl;
}

int main(){
    BOOST
    TCSOLVE();
}
