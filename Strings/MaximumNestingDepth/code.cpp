#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int MaximumDepth(string s){
        int res;
        int curr = 0;
        for(char ch : s){
            if(ch == '('){
                curr++;
                if(curr > res) res= curr;
            }
            if(ch == ')') curr--;
        }
        return res;
    }
};
int main(){
    Solution sol;
    string s = "(1+(2*3)+((8)/4))+1";
    int result = sol.MaximumDepth(s);
    cout << "Max Depth: " << result << endl;
    return 0;
}