#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> LeaderInAnArray(vector<int>& arr){
        vector<int>res;
        int n = arr.size();
        for(int i = 0; i < n; i++){
            bool leader = true;
            for(int j = i + 1; j < n; j++){
                if(arr[j] >= arr[i]){
                    leader = false;
                    break;
                }
            }
            if(leader){
                res.push_back(arr[i]);
            }
            
        }
        return res;
    }

};
int main(){
    return 0;
}