#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int findDays(vector<int>&weights,int cap){
        int day = 1;
        int load = 0;
        int n = weights.size();
        for(int i = 0; i < n; i++){
            if(load+weights[i] > cap){
                day++;
                load = weights[i];
            }
            else{
                load = load+weights[i];
            }
        }
        return day;
    }
    int leastWeight(vector<int>&weights,int days){
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);
        while(low <= high){
            int mid = (low+high)/2;
            int numberOfDays = findDays(weights,mid);
            if(numberOfDays <= days){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};
int main() {
    vector<int> weights = {5,4,5,2,3,4,5,6};
    int d = 5;
    Solution sol;
    cout << sol.leastWeight(weights, d) << "\n";

    return 0;
}