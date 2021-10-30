#include <bits/stdc++.h>

using namespace std;

#define mod 1000000007
#define val 1000000001
#define debug(x) cout<< #x <<"="<<x<<endl
#define in(x) cin>>x
#define all(x) x.begin(),x.end()
#define PI 3.1415926535897932384626

vector<char> prime();vector<int> faster_prime();

long long int power();long long int powermod();

void solution()
{
    int n;

    cin>>n;
    n--;
    cout<<5*(n/5*(n/5+1)/2)+7*(n/7*(n/7+1)/2)-35*(n/35*(n/35+1)/2)<<"\n";

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
        solution();
    }
    return 0;
}

vector<char> prime(int n)                                              //O(nloglogn)
{
    vector<char> c(n+1,'1');
    c.at(0)='0';
    c.at(1)='0';
    for(int i=2;i*i<=n;i++)
    {
        if(c[i]=='1')
        {
            for(int j=i*i;j<=n;j+=i)
            {
                c.at(j)='0';
            }
        }
    }
    return c;
}

vector<int> faster_prime(int n)                                         //O(n)
{
    vector<int> factor(n+1,0);
    vector<int> prime;
    for(int i=2;i<n;i++)
    {
        if(factor[i]==0)
        {
            factor.at(i)=i;
            prime.push_back(i);
        }
        for(int j=0;j<prime.size() && prime[j]<=i && i*prime[j]<=n;j++)
        {
            factor.at(i*prime[j])=prime[j];
        }
    }
    return prime;
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
