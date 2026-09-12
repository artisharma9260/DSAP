#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int floor(vector<int>& nums,int target){
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int ans = n;
        while(low <= high){
            int mid = (low+high) / 2;
            if(nums[mid] <= target){
                ans = nums[mid];
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return ans;
    }
    int ceil(vector<int>& nums,int target){
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int ans = n;
        while(low <= high){
            int mid = (low+high) / 2;
            if(nums[mid] >= target){
                ans = nums[mid];
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};
int main(){
    vector<int>arr= { 3,4,4,7,8,10};
    int target = 5;
    Solution sol;
    int x = sol.floor(arr,target);
    int y = sol.ceil(arr,target);
    cout<<x<<" "<<y;
    return 0;
}
