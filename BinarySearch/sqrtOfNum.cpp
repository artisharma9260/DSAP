#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int sqrtofNum(int n){
        int low = 1;
        int high = n;
        int res = 0;
        while(low <= high){
            int mid = (low+high) / 2;
            if(mid * mid <= n){
                res = mid;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return res;
    }
};
int main() {
    Solution s;
    cout << s.sqrtofNum(8) << endl;
    return 0;
}
