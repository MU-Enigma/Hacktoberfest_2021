#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 0,R,B,X; 
    // cout << "Enter the number of test cases: ";
    cin >> n;

    for(int i =1;i <=n;i++){
        // cout << "Enter the test case- " << ": ";
        cin >> R >> B >> X;
        int dis = 0,time = 0;
        int temp = 0;
        while(dis < X){
            dis = dis + B;
            //  cout << "the dis is "<< dis << endl;
            if(B == R){
                cout << -1 << endl;
                break;
            }
             if(dis > X){
                // break;
                temp = dis - X;
                cout << time + B - temp << endl;
                break;
            }
            else if(dis == X){
                cout << time + B << endl;
                break;
            }
            
            dis = dis - R;
            // cout << "the dis is "<< dis << endl;
            time = time + B;

            time = time + R;
               
            
        }
    }
}