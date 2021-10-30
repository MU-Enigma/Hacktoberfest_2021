#include <iostream>

using namespace std;


int main(){
    int n = 0;
    int k,j;
    double arr[1000];
    cin >> n;
    cin >> k >> j;
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }

    double mean_k,mean_j;
    double sum_k = 0;
    double sum_j = 0;
    for(int i =0;i<k;i++){
        sum_k = sum_k + arr[i];
    }
    for(int i = n-j;i<n;i++){
        sum_j = sum_j + arr[i];
    }

    mean_k = sum_k / k;
    mean_j = sum_j / j;

    double mean = 0;
    mean = mean_k - mean_j;
    cout << mean;


}