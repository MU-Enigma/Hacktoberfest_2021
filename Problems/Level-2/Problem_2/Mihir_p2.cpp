#include<bits/stdc++.h>
using namespace std;

//LEVEL 2

/*
Given a Number N, find out sum of all multiples of 5 and 7 before that number (Number not included)

Input Format
First Line contains T, the number of test cases.
First Line of each test case contains the value of N.

Sample Input
4
10
46
35
100

Sample Output
12
337
175
1580
*/


int main()
{
    int n;
    cin>>n;
    int arr[n];
    int final=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        final=0;
        for(int i=1;i<arr[j];i++){
            if(i%5==0 || i%7==0){
                final=final+i;
            }
        }
        cout<<final<<endl;
    }

}