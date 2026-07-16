#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool isAnagrams(string a,string b){
        if(a.length() != b.length()) return false;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i = 0; i < a.length(); i++){
            if(a[i] != b[i]) return false;
        }
        return true;
    }
};
int main(){
    string s = "listen";
    string b = "silent";
    Solution obj;
    bool isvalid = obj.isAnagrams(s,b);
    if(isvalid){
        cout<<"is a valid anagrams";
    }
    else{
        cout<<"Not a valid anagrams";
    }
    return 0;
}