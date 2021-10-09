#include <bits/stdc++.h>

using namespace std;

#define mod 1000000007
#define val 1000000001
#define debug(x) cout<< #x <<"="<<x<<endl
#define in(x) cin>>x
#define all(x) x.begin(),x.end()
#define PI 3.1415926535897932384626

long long int power();long long int powermod();

void solution5()
{
    int n;
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    //int x;
    for(int i=0;i<n-1;i+=2)
    {
        /*if(ar[i]==ar[i+1] || (i>0 && ar[i]==ar[i-1]))
        {
            x=ar[i];
        }*/
        cout<<ar[i]<<" "<<ar[i+1]<<"\n";
        if(ar[i]!=ar[i+1])
        {
            /*if(i==0)
            {
                x=ar[2];
            }*/
            //int y=(ar[i]==x)?i+1:i;
            //cout<<y<<" "<<abs(ar[i]-ar[i+1]);
            int y=ar[i]<ar[i+1]?i:i+1;
            cout<<y<<" "<<abs(ar[i]-ar[i+1]);
            return;
        }
    }
    cout<<n-1<<" "<<abs(ar[n-1]-ar[0])<<"\n";
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
        solution5();
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
