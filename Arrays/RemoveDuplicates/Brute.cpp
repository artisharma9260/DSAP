#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int removeDuplicates(vector<int>& arr){
        unordered_set<int>s;
        for(int i = 0; i < arr.size(); i++){
            s.insert(arr[i]);
        }
        int index = 0;
        for(int x : s){
            arr[index++] = x;
        }
        arr.resize(s.size());
        return s.size();
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
    int ans = obj.removeDuplicates(arr);
    cout<<ans;
    for(int i = 0; i < arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
