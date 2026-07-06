#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int majorityElement(vector<int>& nums){
        int n = nums.size();
        int cnt = 0;
        int el = 0;
        for(int i = 0; i < n; i++){
            if(count == 0){
                el = arr[i];
                cnt = 1;
            }
            else if(el == arr[i]) cnt++;
            else cnt--;

        }
    int cnt1 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == el) cnt1++;
    }
    if(cnt1 > n / 2){
        return el;
    }
    return -1;
}
};
int main(){
    vector<int> arr = {2,2,1,1,1,2,2};
    Solution sol;
    int ans = sol.majorityElement(arr);
    cout<<"The majority element is: "<<ans<<endl;
    return 0;
}