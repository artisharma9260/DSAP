#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int NoOfSubstring(string &s){
        vector<int>freq(3,-1);
        int cnt = 0;
        for(int i = 0; i < s.length();i++){
            freq[s[i]-'a'] = i;
            if(freq[0] != -1 && freq[1] != -1 && freq[2] != -1){
                cnt = cnt + (1+min({freq[0],freq[1],freq[2]}));
            }
        }
        return cnt;
    }
};
int main() {
    Solution sol;
    string s = "abcabc";
    cout << sol.NoOfSubstring(s) << endl;
    return 0;
}