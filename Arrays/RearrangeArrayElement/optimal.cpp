#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> RearrangeArray(vector<int>&arr){
        int n = arr.size();
        int pos = 0;
        int neg = 1;
        vector<int> res(n);
        for(int i = 0; i < n; i++){
            if(arr[i] > 0){
                res[pos] = arr[i];
                pos += 2;

            }
            else{
                res[neg] = arr[i];
                neg += 2;
            }
        }
        return res;
    }
};
int main(){
    vector<int>arr = {3,1,-2,-5,2,-4};
    Solution obj;
    vector<int>res = obj.RearrangeArray(arr);
    for(int i = 0; i < res.size(); i++){
        cout<<res[i]<<" ";
    }
    return 0;
}