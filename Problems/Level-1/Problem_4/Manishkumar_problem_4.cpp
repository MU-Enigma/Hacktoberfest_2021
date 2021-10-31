#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int day,hour,minute;
    day = N/86400;
    N = N%86400;
    hour = N/3600;   
    N = N%3600;
    minute = N/60; 
    N = N%60;
    cout << day << " " << "day," << hour
         << " " << "hr," << minute << " "
         << "min," << N << " "
         << "sec"  << endl;
}
