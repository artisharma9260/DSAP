#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int LastOcurrence(int key,vector<int>& nums){
        int res1 = -1;
        int low = 0;
        int high = nums.size()-1;
        while(low <= high){
            int mid = (low+high) / 2;
            if(nums[mid] == key){
                res1 = mid;
                low = mid+1;
            }
            else if(nums[mid] < key){
                low = mid+1;
            }
            else{
                high = mid - 1;
            }
        }
        return res1;
    }
    int firstOcurrence(int key,vector<int>& nums){
        int res2 = 0;
        int low = 0;
        int res= 0;
        int high = nums.size()-1;
            while(low <= high){
                int mid = (low+high) / 2;
                if(nums[mid] == key){
                    res2 = mid;
                    high = low-1;
                }
                else if(nums[mid] < key){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
        return res2;
    }
    int countOcurrence(vector<int>& nums, int key) {
        int ans1 = firstOcurrence(key, nums);
        if (ans1 == -1) return 0; // If element is not present
        int ans2 = LastOcurrence(key, nums);
        return (ans2 - ans1 + 1);
    }
};
int main(){
    vector<int>arr = {3,4,13,13,20,40};
    Solution obj;
    int fres = obj.firstOcurrence(4,arr);
    int lres = obj.LastOcurrence(4,arr);
    cout<<fres<<" "<<lres;
    cout<<obj.countOcurrence(arr,4);
    return 0;
}