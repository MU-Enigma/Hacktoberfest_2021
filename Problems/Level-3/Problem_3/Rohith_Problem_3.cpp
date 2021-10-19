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

int main(){
    int n;
    cin >> n;

    int arr[n];
    FOR(i,0,n-1){
        cin >> arr[i];
    }

    if(n%2 == 0){
        FOR(i,0,n-2){
            if(arr[i] == arr[i+1]){
                cout << arr[i] << " " << arr[i+1] << endl;
                i++;
            }else{
                cout << arr[i] << " " << arr[i+1] << endl;
                if(arr[i] > arr[i+1]){
                    cout << i+1 << " " << arr[i]-arr[i+1] << endl;
                }else{
                    cout << i << " " << arr[i+1]-arr[i] << endl;
                }
                return 0;
            }
        }
    }else{
        FOR(i,0,n-1){
            if(i == n-1){
                if(arr[i] > arr[i-1]){
                    cout << i-1 << " " << arr[i]-arr[i-1] << endl;
                }else{
                    cout << i << " " << arr[i-1]-arr[i] << endl;
                }
                return 0;
            }
            if(arr[i] == arr[i+1]){
                cout << arr[i] << " " << arr[i+1] << endl;
                i++;
            }else{
                cout << arr[i] << " " << arr[i+1] << endl;
                if(arr[i] > arr[i+1]){
                    cout << i+1 << " " << arr[i]-arr[i+1] << endl;
                }else{
                    cout << i << " " << arr[i+1]-arr[i] << endl;
                }
                return 0;
            }
        }
    }
}
