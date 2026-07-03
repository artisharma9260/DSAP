#include<bits/stdc++.h>
using namespace std;
int secondLargest(vector<int> &arr){
    int largest = arr[0];
    for(int i = 0; i < arr.size();i++){
        if(arr[i]> largest){
            largest = arr[i];
        }
    }
    int secondL = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != largest && arr[i] > secondL){
            secondL = arr[i];
        }
    }
    return secondL;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int sLargest = secondLargest(arr);
    cout<<"Second Largest Element is "<<sLargest;
    return 0;
}