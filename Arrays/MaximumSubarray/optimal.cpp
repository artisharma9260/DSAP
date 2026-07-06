#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int maxSubarray(vector<int>& nums){
        int n = nums.size();
        int sum = 0;
        int maxsum = INT_MIN;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            if(maxsum < sum){
                maxsum = sum;
            }
            if(sum < 0) sum = 0;
        }
        return maxsum;
    }
};
int main(){
    vector<int>arr= {1,-5,4,-2,3};
    Solution obj;
    int ans = obj.maxSubarray(arr);
    cout<<"The maximum subarray sum is: "<<ans<<endl;
}