#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> LeftRotateByOne(vector<int> &arr){
        int n = arr.size();
        int temp = arr[0];
        for(int i = 0; i < n-1; i++){
            arr[i] = arr[i+1];
        }
        arr[n-1] = temp;
        return arr;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    Solution obj;
    vector<int> ans = obj.LeftRotateByOne(arr);
    for(int  i = 0; i < n ; i ++){
        cout<<ans[i]<<" ";
    }
    return 0;
}