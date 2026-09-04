#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int numSubarraysWithSum(vector<int>& nums,int goal){
        return atMost(nums,goal) - atMost(nums,goal-1);
    }
private:
    int atMost(vector<int>& nums,int k){
        if(k < 0) return 0;
        int left = 0;
        int right = 0;
        int count = 0;
        int sum = 0;
        while(right < nums.size()){
            sum += nums[right];
            while(sum > k){
                sum = sum - nums[left];
                left++;
            }
            count += (right - left+1);
            right++;
            
        }
        return count;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1, 0, 1, 0, 1};
    int goal = 2;
    cout << sol.numSubarraysWithSum(nums, goal) << endl; 
    return 0;
}