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

vector < int > a,v,b;
int n,sum1 = 0,sum2 = 0,x,y;

void split_even(){
    sum1 = 0;
    sum2 = 0;
    a.clear();
    b.clear();
    FOR(i,0,n/2-1){
        a.PB(v[i]);
        sum1 += v[i];
    }
    FOR(i,n/2,n-1){
        b.PB(v[i]);
        sum2 += v[i];
    }
}

void split_odd(){
    sum1 = 0;
    sum2 = 0;
    a.clear();
    b.clear();
    FOR(i,0,n/2-1){
        a.PB(v[i]);
        sum1 += v[i];
    }
    FOR(i,n/2,n-2){
        b.PB(v[i]);
        sum2 += v[i];
    }
}

void check_scales(){
    if(sum1 == sum2){
        cout << y << " " << x << endl;
        return;
    }else if(sum1 > sum2){
        v = b;
        n = v.size();
        //cout << n << endl;
        if(n == 1){
            cout << y << " " << x << endl;
            return;
        }
        if(v.size()%2 == 0){
            split_even();
        }else{
            split_odd();
        }
        cout << sum1 << " " << sum2 << endl;
        check_scales();
    }else if(sum1 < sum2){
        v = a;
        n = v.size();
        //cout << n << endl;
        if(n == 1){
            cout << y << " " << x << endl;
            return;
        }
        if(v.size()%2 == 0){
            split_even();
        }else{
            split_odd();
        }
        cout << sum1 << " " << sum2 << endl;
        check_scales();
    }
}

int main(){
    cin >> n;

    FOR(i,0,n-1){
        int a;
        cin >> a;
        v.PB(a);
    }
    y = min_element(ALL(v))-v.begin();
    if(y > 1){
        x = v[y-1]-v[y];
    }else{
        x = v[y+1]-v[y];
    }
    //split once even or odd
    if(n%2 != 0){
        split_odd();
        cout << sum1 << " " << sum2 << endl;
        check_scales();
    }else{
        split_even();
        cout << sum1 << " " << sum2 << endl;
        check_scales();
    }
}
