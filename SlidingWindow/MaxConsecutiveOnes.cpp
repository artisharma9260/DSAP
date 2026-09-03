#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int MaxConsecutiveOnes(vector<int>&arr,int k){
        int left = 0;
        int right = 0;
        int maxLen = 0;
        int zero = 0;
        while(right < arr.size()){
            if(arr[right] == 0) zero++;
            if(zero > k){
                if(arr[left] == 0) zero--;
                left++;
            }
            if(zero <= k){
                maxLen = max(maxLen,right-left+1);
            }
            right++;
        }
        return maxLen;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
    int k = 2;
    cout << sol.MaxConsecutiveOnes(nums, k) << endl;
    return 0;
}