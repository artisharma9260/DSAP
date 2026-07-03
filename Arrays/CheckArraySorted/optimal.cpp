#include<bits/stdc++.h>
using namespace std;
bool isSorted(vector<int> &arr){
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] < arr[i-1]) return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;     
    vector<int>arr(n);
    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }
    bool ans = isSorted(arr);
    if(ans){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }
    return 0;
}