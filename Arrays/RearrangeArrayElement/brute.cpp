#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> RearrangeArray(vector<int>& arr){
        int n = arr.size();
        vector<int>pos;
        vector<int>neg;
        for(int i = 0; i < n; i++){
            if(arr[i] >= 0) pos.push_back(arr[i]);
            else neg.push_back(arr[i]);
        }
        for(int i = 0; i < pos.size(); i++){
            arr[i*2] = pos[i];
            arr[i*2 + 1] = neg[i];
        }
        return arr;
    }
};
int main(){
    vector<int>arr = {3,1,-2,-5,2,-4};
    Solution obj;
    vector<int>res = obj.RearrangeArray(arr);
    for(int i = 0; i < res.size(); i++){
        cout<<res[i]<<" ";
    }
    return 0;
}