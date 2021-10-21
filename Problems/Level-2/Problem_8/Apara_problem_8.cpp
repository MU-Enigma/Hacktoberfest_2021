#include <bits/stdc++.h>
using namespace std;
  
int main()
{
  string s;
  cin>>s;
  
  int f=0, c=0, d=0;
  
  for(int i=0;i<s.size();i++)
  {
      if(s[0]!='1' || s[s.size()-1]!='0')
      {
          f=1;
          break;
      }
      
      if(s[i]=='1')
      {
          c++;
      }
      else
      {
          d++;
      }
      
      if((s[i]=='0' && s[i+1]=='1') || (s[i]=='0' && i==s.size()-1))
      {
          if(c!=d)
          {
              f=1;
              break;
          }
          else
          {
              c=0;
              d=0;
          }
      }
  }
   if(f==0)
  cout<<"True"<<endl;
  else
  cout<<"False"<<endl;
  
}