#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool canweplace(vector<int>& stalls,int mid,int k){
        int cntcows = 1;
        int last = stalls[0];
        for(int i = 1; i < stalls.size(); i++){
            if(stalls[i] - last >= mid){
                cntcows++;
                last = stalls[i];
            }
            if(cntcows >= k) return true;
        }
        return false;
    }
    int AggressiveCows(vector<int>& stalls,int k){
        int n = stalls.size();
        sort(stalls.begin(),stalls.end());
        int low = 1;
        int high = stalls[n-1] - stalls[0];
        while(low <= high){
            int mid = (low + high)/2;
            if(canweplace(stalls,mid,k) == true){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
            
        }
        return high;
    }
};
int main() {
    vector<int> stalls = {1, 2, 8, 4, 9};
    int cows = 3;
    Solution obj;
    cout << obj.AggressiveCows(stalls, cows) << endl;
    return 0;
}