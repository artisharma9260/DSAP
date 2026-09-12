#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int findMin(vector<int>& nums){
        int low = 0;
        int high = nums.size()-1;
        int ans = INT_MAX;
        while(low <= high){
            int mid = (low+high) / 2;
            if(nums[low] <= nums[mid]){
                ans = min(ans,nums[low]);
                low = mid+1;
            }
            else{
                high = mid-1;
                ans = min(ans,nums[mid]);
            }
        }
        return ans;
    }
};
int main() {
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;

    Solution obj;
    int result = obj.findMin(nums);

    cout << result << endl;

    return 0;
}