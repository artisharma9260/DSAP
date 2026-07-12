#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int MaxProduct(vector<int>& nums){
        int res = nums[0];
        int maxProd = nums[0];
        int minProd = nums[0];
        for(int i = 1; i < nums.size(); i++){
            int curr = nums[i];
            if(curr < 0) swap(minProd,maxProd);
            maxProd= max(curr,maxProd * curr);
            minProd = min(curr,minProd * curr);
            res = max(res,maxProd);
        }
        return res;
    }
};
int main(){
    vector<int>nums = {2,3,-2,4};
    Solution sol;
    cout<<sol.MaxProduct(nums);
    return 0;
}