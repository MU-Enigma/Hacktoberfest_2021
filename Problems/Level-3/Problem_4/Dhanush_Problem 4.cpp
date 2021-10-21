#include <bits/stdc++.h>

using namespace std;

#define mod 1000000007
#define val 1000000001
#define debug(x) cout<< #x <<"="<<x<<endl
#define in(x) cin>>x
#define all(x) x.begin(),x.end()
#define PI 3.1415926535897932384626

long long int power();long long int powermod();

int recur(vector<int> ar,int x1,int x2)
{
    //debug(x1);
    //debug(x2);
    if(x2==1)
    {
        return x1;
    }

    int sum1=0,sum2=0;
    for(int i=x1;i<x1+x2/2;i++)
    {
        sum1+=ar[i];
    }
    for(int i=x1+x2/2;i<x1+x2/2+x2/2;i++)
    {
        sum2+=ar[i];
    }
    /*if((x2-x1)%2)
    {
        sum2-=ar[x1+x2-1];
    }*/
    cout<<sum1<<" "<<sum2<<"\n";
    if(sum1==sum2)
    {
        return x1+2*(x2/2);
    }
    if(sum1<sum2)
    {
        return recur(ar,x1,x2/2);
    }
    if(sum2<sum1)
    {
        return recur(ar,x1+x2/2,x2/2);
    }
}

void solution6()
{
    int n;
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int z=recur(ar,0,n);
    cout<<z<<" "<<abs(ar[z]-(z>0?ar[0]:ar[1]));

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
        solution6();
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
