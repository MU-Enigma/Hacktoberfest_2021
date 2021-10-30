#include<iostream>
using namespace std;
int main(){
    int n,a,b;
    cin>>n;
    cin>>a;
    cin>>b;
    int array[n];
    float sum = 0;
    float sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i =0;i<a;i++){
        sum = sum + array[i];
    }
    for(int i = n-1;i>n-1-b;i--){
        sum2 = sum2 + array[i];
    }
    float count = (sum/(float)a)-(sum2/(float)b);
    cout<<count;
}