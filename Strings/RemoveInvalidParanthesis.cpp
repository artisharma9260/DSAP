#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        int count = 0;

        for(char c : s) {
            if(c == '(') count++;
            else if(c == ')') {
                count--;
                if(count < 0) return false;
            }
        }

        return count == 0;
    }

    vector<string> removeInvalidParentheses(string s) {
        vector<string> ans;
        queue<string> q;
        unordered_set<string> visited;

        q.push(s);
        visited.insert(s);

        bool found = false;

        while(!q.empty()) {
            int n = q.size();

            while(n--) {
                string curr = q.front();
                q.pop();

                if(isValid(curr)) {
                    ans.push_back(curr);
                    found = true;
                }

                // If valid strings are found, don't remove more brackets
                if(found) continue;

                for(int i = 0; i < curr.size(); i++) {
                    if(curr[i] != '(' && curr[i] != ')')
                        continue;

                    string next = curr.substr(0, i) + curr.substr(i + 1);

                    if(visited.find(next) == visited.end()) {
                        visited.insert(next);
                        q.push(next);
                    }
                }
            }

            if(found) break;
        }

        return ans;
    }
};
int main(){
    return 0;
}