#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];
    int t = a[0] ^ a[1];

    if(t==0)
        t = a[0];
    else{
        t = t^a[2];
        if(a[0]!=t) t = a[0];
        else t = a[1];
    }
    int unq = t, ind;
    for(int i=0; i<n; i++){
        if(unq != a[i]){
            unq = a[i];
            ind = i;
            break;
        }
    }
    if(n<=2 || unq == t || unq>t){
        cout<<"Wrong Input";
        return 0;
    }
    for(int i=1; i<n; i+=2)
        cout<< a[i-1]<<" "<<a[i]<<"\n";
    cout<<ind<<" "<<t-unq;
}