 #include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
using namespace std;

int main()
{
    int n, hr, min;
    cin >> n;
    int res[n];
    string s, s2;

    for (int i = 0; i < n; i++)
    {
        s2 = "";
        cin >> s;
        hr = stoi(s);

        s2 += s[3];     s2 += s[4];
        min = stoi(s2);
        
        res[i] = hr*60 + min;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << 1 + res[i]/66 << endl;
    } 
    
}