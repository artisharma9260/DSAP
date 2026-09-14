#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int sumByDay(vector<int>&arr,int div){
        int sum = 0;
        int n = arr.size();
        for(int i = 0; i < n; i++){
            sum += ceil((double)(arr[i]) / (double)(div));
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums,int days){
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        while(low <= high){
            int mid = (low+high) / 2;
            if(sumByDay(nums,mid) <= days){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};
int main(){
    vector<int>nums = {1,2,5,9};
    Solution obj;
    cout<<obj.smallestDivisor(nums,6);
    return 0;
}