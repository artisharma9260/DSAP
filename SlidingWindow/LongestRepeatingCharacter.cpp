#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int LongestRepeatingCharacter(string& s,int k){
        int left = 0;
        int right = 0;
        int maxLen = 0;
        int maxFreq = 0;
        vector<int>freq(26,0);
        while(right < s.size()){
            freq[s[right] - 'A']++;
            maxFreq = max(maxFreq,freq[s[right]- 'A']);
            if((right - left + 1) - maxFreq > k){
                freq[s[left]-'A']--;
                left++;
            }
            if((right - left +1) - maxFreq <= k){
                maxLen = max(maxLen , right - left+1);
            }
            right++;

        }
        return maxLen;
    }
};
int main() {
    Solution sol;
    string s = "AABABBA";
    int k = 1;
    // Output: 4
    cout << sol.LongestRepeatingCharacter(s, k) << endl; 
    return 0;
}