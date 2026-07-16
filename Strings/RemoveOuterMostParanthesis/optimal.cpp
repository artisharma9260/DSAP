#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    string RemoveParanthesis(string s){
        string res ="";
        int count = 0;
        for(char ch : s){
            if(ch == '('){
                if(count > 0) res = res+ch;
                count++;
            }
            else if(ch == ')'){
                count--;
                if(count > 0) res = res+ ch;
            }
        }
        return s;
    }
};
int main(){
    Solution obj;
    cout << obj.RemoveParanthesis("(()())(())");
    return 0;
}