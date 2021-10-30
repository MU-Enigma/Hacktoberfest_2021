#include<bits/stdc++.h>
using namespace std; 

//LEVEL 1

/*
Given a number, return True if its a palindrome number, else return False.

Input Format
First line indicates T, the number of test cases.
First line of each test case represents the number.

Sample Input
3
121
1234321
42069

Sample Output
True
True
False
*/

void isPal(int n){
    int k=n;
    int sum=0;
    int temp;
    while(n>0){
        temp=n%10;
        sum=(sum*10)+temp;
        n=n/10;
    }
    if(sum==k){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
}

int main()
{
    int test;
    cin>>test;
    int arr[test];
    for(int i=0;i<test;i++){
        cin>>arr[i];
    }
    for(int i=0;i<test;i++){
        isPal(arr[i]);
    }

}