#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> TwoSum(vector<int>& arr,int target){
        map<int,int>mpp;
        int n = arr.size();
        for(int i = 0; i< n ; i++){
            int num = arr[i];
            int moreneeded = target - num;
            if(mpp.find(moreneeded) != mpp.end()) return {mpp[moreneeded],1};
            mpp[num] = i;
        }
        return {-1,-1};
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
    vector<int>res = obj.TwoSum(arr,10);
    for(int i = 0; i < res.size(); i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}