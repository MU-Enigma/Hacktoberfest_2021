#include <bits/stdc++.h>

using namespace std;

#define mod 1000000007
#define val 1000000001
#define debug(x) cout<< #x <<"="<<x<<endl
#define in(x) cin>>x
#define all(x) x.begin(),x.end()
#define PI 3.1415926535897932384626

long long int power();long long int powermod();

void solution1()
{
    int d;
    string s;
    cin>>d;
    cin>>s;
    bool b=false;
    bool b2=false;
    for(int i=0;i<d-1;i++)
    {
        b=false;
        bool b1=false;
        for(int j=i+1;j<d;j++)
        {
            if(s[i]!=s[j])
            {
                b=true;
            }else if(b)
            {
                b2=true;
                cout<<"NO\n";
                b1=true;
                break;
            }
        }
        if(b1)
        {
            break;
        }
    }
    if(!b2)
    {
        cout<<"YES\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=1;
    cin>>t;

    while(t--)
    {
        solution1();
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
