#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, b, r, x;
    cin >> n;
    vector<int> vect;
    for(int i = 0; i < n; ++i)
    {
        cin >> b >> r >> x;
        if(b >= r)
        {
            vect.push_back(-1);
            continue;
        }
        int forcount = r, backcount = b, time = 0, position = 0;
        bool step = true;
        while(position != x)
        {
            ++time;
            if(step == true)
            {
                ++position;
                --forcount;
                if(forcount == 0)
                {
                    forcount = r;
                    step = false;
                }
            }
            else if(step == false)
            {
                --position;
                --backcount;
                if(backcount == 0)
                {
                    backcount = b;
                    step = true;
                }
            }
        }
        vect.push_back(time);
    }
    for(auto x: vect)
    {
        cout << x << '\n';
    }
}