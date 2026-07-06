#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int maxProfit(vector<int>& prices){
        int mini = prices[0];
        int profit = 0;
        for(int i = 1; i < prices.size(); i++){
            int cost = prices[i] - mini;
            profit = max(profit,cost);
            mini = min(mini,prices[i]);
        }
        return profit;
    }
};
int main(){
    vector<int>arr = {7,1,5,3,6,4};
    Solution obj;
    int ans = obj.maxProfit(arr);
    cout<<"The maximum profit is: "<<ans<<endl;
}