#include <bits/stdc++.h>

using namespace std;

#define mod 1000000007
#define val 1000000001
#define debug(x) cout<< #x <<"="<<x<<endl
#define in(x) cin>>x
#define all(x) x.begin(),x.end()
#define PI 3.1415926535897932384626

long long int power();long long int powermod();

bool vowel(char c)
{
    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        return true;
    }
    return false;
}

void solution2()
{
    int n;
    string s;
    cin>>n>>s;
    string v="";
    int sum=65;
    for(int i=0;i<s.length();i++)
    {
        if(vowel(s[i]))
        {
            v+=s[i];
            sum+=s[i];
        }
        if(v.length()==5)
        {
            break;
        }
    }
    int x=0;
    for(int i=0;i<n;i++)
    {
        string c="";
        c+="A";
        c+=v;
        int csum=0;
        for(int i=x;i<s.length();i++)
        {
            if(!(vowel(s[i])))
            {
                c+=s[i];
                x=i+1;
                csum+=s[i];
                break;
            }
        }
        cout<<c<<sum+csum<<"\n";
    }

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
        solution2();
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
