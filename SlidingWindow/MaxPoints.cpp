#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int MaxPoints(vector<int>& cardPoints,int k){
        int maxSum = 0;
        int n = cardPoints.size();
        int leftSum = 0;
        int rightSum = 0;
        for(int i = 0; i < k; i++){
            leftSum = leftSum + cardPoints[i];
        }
        maxSum = leftSum;
        int j = n - 1;
        for(int i = k-1; i >= 0; i--){
            leftSum = leftSum - cardPoints[i];
            rightSum = rightSum + cardPoints[j];
            j--;
            maxSum = max(maxSum,leftSum + rightSum);
        }
        return maxSum;
    }
};
int main() {
    vector<int> cards = {1, 2, 3, 4, 5, 6, 1};
    int k = 3;
    Solution sol;

    cout << sol.MaxPoints(cards, k) << endl;

    return 0;
}