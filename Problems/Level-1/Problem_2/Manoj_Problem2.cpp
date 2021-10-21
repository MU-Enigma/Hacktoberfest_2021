#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }

    int flag = 0;
    for (int i = 0; i < N; i++){
        if (arr[i] % 2 == 0 && i % 2 == 0){
            cout << arr[i] << " ";
            flag = 1;
        }
    }

    if (flag == 0){
        cout << "None" << endl;
    }

    return 0;
}