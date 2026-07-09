#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> SpiralMatrix(vector<vector<int>> & arr){
        vector<int>ans;
        int n = arr.size()-1;
        int m = arr[0].size()-1;
        int top = 0;
        int left = 0;
        int right = m;
        int bottom = n;
        while(left <= right && top <= bottom){
            for(int i = left; i <= right; i++){
                ans.push_back(arr[top][i]);
            }
            top++;
            for(int i = top; i <= bottom; i++){
                ans.push_back(arr[i][right]);
            }
            right--;
            if(top <= bottom){
                for(int i = right; i >= left; i--){
                    ans.push_back(arr[bottom][i]);
                }
                bottom--;
            }
            if(left <= right){
                for(int i = bottom; i >= top; i--){
                    ans.push_back(arr[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};
int main(){
    return 0;
}