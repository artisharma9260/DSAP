#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minMoves(vector<int>& nums) {
        const int n = nums.size();
        int sum = *max_element(nums.begin(),nums.end()) * n;
        for(int i = 0; i < n; ++i) sum -= nums[i];
        return sum;
    }
};
int main(){
    return 0;
}