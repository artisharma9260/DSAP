#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int atMostK(vector<int>& nums,int k){
        unordered_map<int,int>freq;
        int left = 0,right = 0,count = 0;
        while(right < nums.size()){
            freq[nums[right]]++;
            if(freq.size() > k){
                freq[nums[left]]--;
                if(freq[nums[left]] == 0) freq.erase(nums[left]);
                left++;
            }
            count = count + (right-left+1);
            right++;
        }
        return count;
    }
    int SubArrayswithK(vector<int>&nums,int K){
        return atMostK(nums,K) - atMostK(nums,K-1);
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 1, 2, 3};
    int k = 2;
    cout << sol.SubArrayswithK(nums,k) << endl;
    return 0;
}