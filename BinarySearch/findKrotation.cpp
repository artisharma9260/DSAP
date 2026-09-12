#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int findKRotation(vector<int>& arr){
        int low = 0;
        int high = arr.size()-1;
        int ans = INT_MAX;
        int index = -1;
        while(low <= high){
            int mid = (low+high)/2;
            if(arr[low] <= arr[mid]){
                if(arr[low] < ans){
                    ans = arr[low];
                    index = low;
                }
                low = mid+1;
                
            }
            else{
                if(arr[mid] < ans){
                    ans = arr[mid];
                    index = mid;
                }
                high = mid-1;
            }
        }
        return index;
    }
};
int main() {
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;

    Solution obj;
    int result = obj.findKRotation(nums);

    cout << result << endl;

    return 0;
}