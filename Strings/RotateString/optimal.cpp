#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool isRotation(string s,string goal){
        int n = s.length();
        int m = goal.length();
        if(n != m) return false;
        string doubles = s + s;
        return doubles.find(goal) != string::npos;
    }

};
int main(){
    string s = "abcde";
    string goal = "cdeab";
    Solution obj;
    bool isTrue = obj.isRotation(s,goal);
    if(isTrue){
        cout<<"Is a valid Rotation";
    }
    else{
        cout<<"Not a rotation";
    }
    return 0;
}