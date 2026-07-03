#include<bits/stdc++.h>
using namespace std;
int secondLargest(vector<int> &arr){
    sort(arr.begin(),arr.end());
    int largest = arr[arr.size()-1];
    for(int i = arr.size()-2; i >= 0; i--){
        if(arr[i] != largest){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0; i < n; i ++){
        cin>>arr[i];
    }
    int sLargest = secondLargest(arr);
    cout<<"Second Largest Element is "<<sLargest;
    return 0;
}