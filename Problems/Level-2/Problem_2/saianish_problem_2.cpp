#include <bits/stdc++.h>

using namespace std;

void solution(int b,int f,int x)
{
    if(b==f)
    {
        cout<<"-1"<<"\n";
    }
    else
    {
        int c=0;
        int disp=0;
        while(c>=0)
        {
            if(x-disp>f)
            {
                disp=disp+(f-b);
                c=c+1;
            }
            else
                break;
        }
        int time=(b+f)*c+(x-disp);
        cout<<time<<"\n";
    }
}

int main()
{
    int n; 
    cin >>n;
    int b[n],r[n],x[n];
    for(int i=0;i<n;i++)
        cin >>b[i]>>r[i]>>x[i];
    for(int i=0;i<n;i++)
        solution(b[i],r[i],x[i]);
}