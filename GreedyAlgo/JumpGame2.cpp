#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0;
        int left = 0, right = 0;

        while (right < nums.size() - 1) {
            int farthest = 0;

            for (int i = left; i <= right; i++) {
                farthest = max(farthest, i + nums[i]);
            }

            left = right + 1;
            right = farthest;
            jumps++;
        }

        return jumps;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 3, 1, 1, 4};

    cout << "Minimum jumps required: "
         << sol.jump(nums) << endl;

    return 0;
}