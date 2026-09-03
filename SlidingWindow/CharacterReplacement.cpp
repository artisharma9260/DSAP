#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int characterReplacement(string s,int k){
        vector<int> freq(26,0);
        int left = 0,right = 0;
        int maxCount = 0;
        int maxLength = 0;
        while(right < s.size()){
            freq[s[right] - 'A']++;
            maxFreq = max(maxFreq,freq[s[right]]);
            while((right - left + 1) - maxFreq > k){
                freq[s[left]]--;
                left++;
            }
            maxLen = max(maxLen,right - left+1);
        }
        return maxLen;
    }
};
int main() {
    Solution sol;
    string s = "AABABBA";
    int k = 1;
    cout << sol.characterReplacement(s, k) << endl;
    return 0;
}