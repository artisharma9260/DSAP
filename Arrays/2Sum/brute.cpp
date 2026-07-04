#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int TwoSum(vector<int>&arr,int target){
        for(int i = 0; i < arr.size(); i++){
            for(int j = i + 1; j < arr.size(); j++){
                if(arr[i]+arr[j] == target){
                    return 1;
                }
            }
        }
        return -1;
    }
};
int main(){
    int n,target;
    cin>>n>>target;
    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    Solution obj;
    int ans = obj.TwoSum(arr,target);
    if(ans == 1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}