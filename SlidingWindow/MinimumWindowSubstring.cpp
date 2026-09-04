#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    string minWindow(string s,string t){
        int n = s.size();
        int m = t.size();
        if(m == 0 || n < m) return "";
        int l = 0,r = 0;
        int minlen = INT_MAX;
        int sidex = -1;
        int cnt = 0;
        vector<int>hash(256,0);
        for(char c : t) hash[c]++;
        while(r < n){
            if(hash[s[r]] > 0) cnt++;
            hash[s[r]]--;
            r++;
            while(cnt == m){
                if(r-l < minlen){
                    minlen = r - l;
                    sidex = l;
                }
                hash[s[l]]++;
                if(hash[s[l]] > 0) cnt--;
                l++;
            }
        }
        return sidex == -1 ? "":s.substr(sidex,minlen);
    }
};
int main(){
    return 0;
}