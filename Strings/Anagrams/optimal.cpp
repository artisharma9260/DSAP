#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool checkAnagrams(string str1,string str2){
        if(str1.length() != str2.length()) return false;
        int freq[26] = {0};
        for(int i = 0; i < str1.length(); i++){
            freq[str1[i] - 'A']++;
        }
        for(int j = 0; j < str2.length(); j++){
            freq[str2[j] - 'A']--;
        }
        for(int i = 0; i < 26; i++){
            if(freq[i] != 0) return false;
        }
        return true;
    }
};
int main(){
    string s = "listen";
    string b = "silent";
    Solution obj;
    bool isvalid = obj.checkAnagrams(s,b);
    if(isvalid){
        cout<<"is a valid anagrams";
    }
    else{
        cout<<"Not a valid anagrams";
    }
    return 0;
}
