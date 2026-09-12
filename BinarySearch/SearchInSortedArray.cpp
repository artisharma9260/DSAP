#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool SearchInSortedArrayII(vector<int>& nums,int target){
        int n = nums.size();
        int low = 0;
        int high = n-1;
        while(low <= high){
            int mid = (low+high) / 2;
            if(nums[mid] == target) return true;
            if(nums[low] == nums[mid] && nums[mid] == nums[high]){
                low++;
                high--;
                continue;
            }
            if(nums[low] <= nums[mid]){
                if(nums[low] <= target && target <= nums[mid]){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }
            else{
                if(nums[mid] <= target && target <= nums[high]){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
        }
        return false;
    }
};
int main() {
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;

    Solution obj;
    bool result = obj.SearchInSortedArrayII(nums, target);
    if(result) cout<<"Target is present in the array"<<endl;
    else cout<<"Target is not present"<<endl;

    cout << result << endl;

    return 0;
}