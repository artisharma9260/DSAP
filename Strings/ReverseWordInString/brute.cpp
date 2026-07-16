#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    string ReverseString(string s){
        reverse(s.begin(),s.end());
        int n = s.length();
        string res="";
        for(int i = 0; i < n; i++){
            string word ="";
            while(s[i] != ' ' && i < n){
                word = word + s[i];
                i++;
            }
            reverse(word.begin(),word.end());
            if(word.length() > 0){
                res += " "+word;
            }
        }
        return res.substr(1);
    }
};
int main(){
    string s = "Hello world";
    Solution sol;
    cout<<sol.ReverseString(s);
    return 0;
}