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

VI v;
int main(){
    int n;
    cin >> n;

    FOR(i,0,n-1){
        int a;
        cin >> a;
        if(a < 0){
            cout << "error" << endl;
            cout << "(price can't be negative)";
            return 0;
        }
        v.PB(a);
    }

    vector < int > v2(ALL(v));
    sort(ALL(v2));
    reverse(ALL(v2));
    if(v == v2){
        cout << "0 0 0" << endl;
        cout << "(no transaction is done in this case)";
    }else{
        int a = min_element(ALL(v))-v.begin();
        int b = max_element(ALL(v))-v.begin();

        if(a < b){
            cout << *min_element(ALL(v)) << " " << *max_element(ALL(v)) << " " << *max_element(ALL(v))-*min_element(ALL(v)) << endl;
        }else{
            while(a > b){
                v.erase(v.begin()+a);
                a = min_element(ALL(v))-v.begin();
                b = max_element(ALL(v))-v.begin();
            }
        }
    }
}
