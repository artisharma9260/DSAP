#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int binarySearch(vector<int>& nums,int target){
        int low = 0;
        int n = nums.size();
        int high = n-1;
        while(low <= high){
            int mid = (low+high) / 2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return -1;
    }
};
int main(){
    vector<int>arr = {3,4,6,7,9,12,16,17};
    int target = 6;
    Solution obj;
    int ind = obj.binarySearch(arr,target);
    if(ind == -1) cout<<"The target is not present."<<endl;
    else cout<<"The target is at index: "<<ind<<endl;
    return 0;
}