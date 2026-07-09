#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> leaderInArray(vector<int>& arr){
        vector<int>leader;
        int n = arr.size();
        int max = arr[n-1];
        leader.push_back(arr[n-1]);
        for(int i = n-2; i > 0; i--){
            if(arr[i] > max){
                max = arr[i];
                leader.push_back(arr[i]);
            }
        }
        return leader;
    }
};
int main(){
    vector<int>arr = {1,2,3,4};
    Solution obj;
    vector<int>res = obj.leaderInArray(arr);
    for(int i = 0; i < res.size(); i++){
        cout<<res[i];
    }
    return 0;
}