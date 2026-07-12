#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> MergedArray(vector<int>& arr1,vector<int>& arr2,int n,int m){
        int left = n-1;
        int right = 0;
        while(left >= 0 && right < m){
            if(arr1[left] > arr2[right]) {
                swap(arr1[left],arr2[right]);
                left--;
                right++;
            }
            else break;
        }
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        vector<int>ans;
        for(int x : arr1){
            ans.push_back(x);
        }
        for(int x : arr2){
            ans.push_back(x);

        }
        return ans;
    }
};
int main(){
    vector<int> arr1 = {1,3,5,7};
    vector<int> arr2 = {0,2,6,8,9};

    Solution sol;
    vector<int> ans = sol.MergedArray(arr1, arr2, arr1.size(), arr2.size());

    for(int x : ans){
        cout << x << " ";
    }

    return 0;
}