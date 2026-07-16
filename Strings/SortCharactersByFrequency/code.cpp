#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    string SortByFrequency(string s){
        vector<int>freq(128,0);
        for(char ch : s){
            freq[ch]++;
        }
        auto cmp = [&](char a,char b){
            if(freq[a] == freq[b]) return a < b;
            return freq[a] > freq[b];
        };
        sort(s.begin(),s.end(),cmp);
    }
};
int main(){
    return 0;
}