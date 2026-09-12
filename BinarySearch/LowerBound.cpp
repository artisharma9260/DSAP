#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int lowerBound(vector<int>& nums,int target){
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int ans = n;
        while(low <= high){
            int mid = (low+high)/2;
            if(nums[mid] >= target){
                ans = mid;
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
    vector<int>arr = {3,5,8,15,19};
    int x = 9;
    Solution obj;
    int ans = obj.lowerBound(arr,x);
    cout<<ans;
    return 0;
}