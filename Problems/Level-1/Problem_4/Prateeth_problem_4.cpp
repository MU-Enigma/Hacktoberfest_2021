#include<iostream>

using namespace std;

void Converting(int n){

    int day=0;
    int hour=0;
    int min=0;
    int sec=0;

        if(n>=86400 || n==0){
            day=n/86400;
            n=n%86400;
            cout<<day<<" day, ";
        }
        if(n>=3600 || n==0){
            hour=n/3600;
            n=n%3600;
            cout<< hour<<" hr, ";
        }
    
        if(n>=60 || n==0){
            sec=n/60;
            n=n%60;
            cout<< sec<<" min, ";
        }
        if(n<60){
            cout<<n<<" sec";
        }
}

int main(){

    int n;
    cin>>n;
    
    Converting(n);
}