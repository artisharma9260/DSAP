#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int atMostKDistict(string s,int k){
        int left = 0,res = 0;
        unordered_map<char,int> freq;
        for(int right = 0; right < s.size){
            freq[s[right]]++;
            while(freq.size() > k){
                freq[s[left]--;
            if(freq[s[left]] == 0) freq.erase(s[left]);
            left++;
            }
            res += (right - left + 1);

        }
        return res;
    }

}