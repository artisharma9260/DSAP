#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int NthRoot(int n,int m){
        int low = 1;
        int high = m;
        while(low <= high){
            int mid = (low+high) / 2;
            long long ans = 1;
            for(int i = 1; i <= n; i++){
                ans = ans*mid;
                if(ans > m) break;
            }
            if(ans == m) return mid;
            if(ans < m) return low = mid+1;
            else high = mid-1;
        }
        return -1;
    }
};
int main() {
    Solution obj;
    int result = obj.NthRoot(3, 27);
    cout<<result;
    return 0;
}