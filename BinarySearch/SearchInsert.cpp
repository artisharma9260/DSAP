#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int SearchInsert(vector<int>& nums,int target){
        int n = nums.size();
        int ans = n;
        int low = 0;
        int high = n-1;
        while(low <= high){
            int mid = (low+high)/2;
            if(nums[mid] >= target ){
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
    vector<int>arr = {1,2,4,7};
    int x = 6;
    Solution obj;
    int ans = obj.SearchInsert(arr,6);
    cout<<ans;
    return 0;
}