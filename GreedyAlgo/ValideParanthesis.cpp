#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool isValid(string &s,int i,int open){
        if(open < 0) return false;
        if(i == s.length()) return open == 0;
        if(s[i] == '(') return isValid(s,i+1,open + 1);
        else if(s[i] == ')') return isValid(s,i+1,open-1);
        else{
            return isValid(s,i+1,open) || isValid(s,i+1,open + 1) ||
            isValid(s,i+1,open - 1);
        }
    }
};
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    Solution sol;
    if(sol.isValid(s,0,0)){
        cout<<"Valid parenthesis string\n";
    }else{
        cout<<"Invalid paranthesis string\n";
    }
    return 0;
}