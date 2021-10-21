#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    vector<int> odd, even, arr;
    vector<vector<int>> all;

    for (int i = 0; i < n; i++)
    {
        int m, e, o, val, e_c = 0, o_c = 0;
        cin >> m;
        for(int i = 0; i < m; i++)
        {
            cin >> val;
            if(val %2 == 0){
                even.push_back(val);
            }
            else{
                odd.push_back(val);
            }
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());

        e = even.size();
        o = odd.size();
        for (int i = 0; i < e+o; i++)
        {
            if(i%2 == 0){
                arr.push_back(odd[o_c]); 
                o_c++;
            }
            else{
                arr.push_back(even[e_c]); 
                e_c++;
            }
        }
    
        all.push_back(arr);        
        arr.clear();
        even.clear();
        odd.clear();
    }
    
    for (int i = 0; i < n; i++)
    {
        int a = all[i].size();
        for(int j = 0; j < a; j++)
        {
            cout << all[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}