#include<bits/stdc++.h>
using namespace std;
class Solution{
private:
    bool linearSearch(vector<int>& num,int a){
        for(int i = 0; i < num.size(); i++){
            if(num[i] == a) return true;
            
        }
        return false;
    }
public:
    int longestConsecutive(vector<int>&arr){
        int longest = 1;
        int n = arr.size();
        for(int i = 0; i < n ; i++){
            int x = arr[i];
            int cnt = 1;
            while(linearSearch(arr,x+1) == true){
                x += 1;
                cnt += 1;
            }
            longest = max(longest,cnt);
        }
        return longest;
    }
};
int main() {
    vector<int> a = {100, 4, 200, 1, 3, 2};

    Solution solution;
    int ans = solution.longestConsecutive(a);
    cout << "The longest consecutive sequence is " << ans << "\n"; 
    return 0;
}