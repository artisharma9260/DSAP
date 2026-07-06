#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int majorityElement(vector<int> & arr){
        int n = arr.size();
        unordered_map<int,int>mpp;
        for(int i = 0; i < n; i++){
            mpp[arr[i]]++;
        }
        for(auto& pair : mpp){
            if(pair.second > n/2){
                return pair.first;
            }
        } 
        return -1;
    }
};
int main(){
    vector<int> arr = {2,2,1,1,1,2,2};
    Solution obj;
    int ans = obj.majorityElement(arr);
    cout<<"The majority element is: "<<ans<<endl;
    return 0;
}
