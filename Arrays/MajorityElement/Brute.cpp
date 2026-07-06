#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int majorityElement(vector<int> &arr){
        int n = arr.size();
        for(int i = 0; i < n; i++){
            int count = 0;
            for(int j = 0; j < n; j++){
                if(arr[i] == arr[j]) count++;
            }
            if(count > n /2) return arr[i];
        }
        return -1;
    }
    
};
int main(){
    vector<int>ans = {3,2,3};
    Solution obj;
    int res = obj.majorityElement(ans);
    cout<<res;
    return 0;
}