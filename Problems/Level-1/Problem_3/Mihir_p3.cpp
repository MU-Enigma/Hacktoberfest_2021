#include<bits/stdc++.h>
using namespace std;

//LEVEL 1

/*Given an array of N elements, find the mean of elements of first K elements and subtract it with the mean of Last J elements. Output the answer.

Input Format
First Line contains the number N, number of elements in the array.
Second Line contains the Numbers K and J respectively.
Third Line contains the array of N elements.

Sample Input 1
10
4 2
4 5 3 10 34 54 10 4 -6 -60

Sample Output 1
38.5

Explanation
(4+5+3+10) / 4 - [ (-6) +(-60) ]/2
=> 22/4 - (-33)
=> 5.5 + 33 = 38.5

Sample Input 2
5
4 4
1 2 3 4 5

Sample Ouput 2
-1

Explanation
(1+2+3+4)/4 - (2+3+4+5)/4 => 10/4 - 14/4 = -1
*/

int main()
{
    int n,k,j;
    cin>>n>>k>>j;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    float front=0;
    float back=0;

    for(int i=0;i<k;i++){
        front+=arr[i];
    }
    int hack=0;
    while(hack<j){
        back+=arr[n-1];
        n--;
        hack++;
    }
    float final= (front/k) - (back/j);
    cout<<final<<endl;
}