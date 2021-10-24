#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool Checking_Palindrom(string s, string rev){
    
    if(s==rev){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    
    int t;
    cin>>t;
    
    for(int i=0; i<t; i++){
        
        string s;
        getline(cin,s);    //Inputitng the string//
        
        while(s.length()==0){
            getline(cin,s);        //Avoiding blank lines from input//
        }

        transform(s.begin(),s.end(),s.begin(),::tolower);    //making all the leeters to lower case//
        s.erase(remove(s.begin(),s.end(),' '),s.end());       //removing white spaces between words//
        string rev = string(s.rbegin(),s.rend());               //taking the reverse of the string//
        
        cout<<Checking_Palindrom(s,rev)<<endl;    
    }
}