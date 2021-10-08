#include <bits/stdc++.h>

using namespace std;

#define mod 1000000007
#define val 1000000001
#define debug(x) cout<< #x <<"="<<x<<endl
#define in(x) cin>>x
#define all(x) x.begin(),x.end()
#define PI 3.1415926535897932384626

long long int power();long long int powermod();

void solution()
{
    int n,y;

    cin>>n>>y;
    vector<int> ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    bool b=ar[0]==y?true:false;
    int c=0;
    for(int i=1;i<n;i++)
    {
        if(ar[i]==y)
        {
            //debug(i);
            b=true;
        }
        if(b)
        {
            if(ar[i]==1)
            {
                c++;
                b=false;
                continue;
            }
            if(ar[i-1]<=ar[i] && ar[i]!=y)
            {
                //debug(i);
                b=false;
            }
        }
    }
    if(y==1 && ar[0]==1)
    {
        c++;
    }
    cout<<c<<"\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=1;
    //cin>>t;

    while(t--)
    {
        solution();
    }
    return 0;
}

long long int power(long long int a,long long int n)
{
    long long int pow=1;
    for(long long int i=n;i>0;i>>=1)
    {
        if(i&1)
        {
            pow*=a;
        }
        a*=a;
        //a>>=1;
    }
    return pow;
}

long long int powermod(long long int a,long long int n,long long int m)
{
    long long int pow=1;
    a%=m;
    for(long long int i=n;i>0;i>>=1)
    {
        if(i&1)
        {
            pow=pow*a%m;
        }
        a=a*a%m;
    }
    return pow;
}
