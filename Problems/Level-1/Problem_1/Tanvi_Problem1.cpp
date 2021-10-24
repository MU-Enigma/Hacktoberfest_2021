#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        string input;
        cin>>input;
        reverse(input.begin(),input.end());
        for(int i=0;i<input.length();i++){
            input[i] = isupper(input[i])?tolower(input[i]):toupper(input[i]);
        }
        cout<<input<<'\n';
    }
}