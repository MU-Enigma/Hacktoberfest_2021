//  Given an array of N elements, find the mean of elements of first K elements and subtract it with the mean of Last J elements.
#include<iostream>
using namespace std;
int sumF(int arr[],int k){
    int sum=0;
    for (int i = 0; i < k; i++)
    {
        sum+=arr[i];
    }
    return sum;
}

int sumL(int arr[],int j,int n){
    int sum=0;
    for (int i = n-1; i > n-1-j ; i--)
    {
        sum+=arr[i];
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    int arr[n];
    int k,j;
    cout<<"enter the nos of K element ";
    cin>>k;
    cout<<"enter the nos. of J element ";
    cin>>j;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int firstSum=sumF(arr, k);
    int lastSum=sumL(arr, j, n);
    float result= ((float)firstSum/k)-((float)lastSum/j);
    cout<<result <<endl;
    return 0;
}
