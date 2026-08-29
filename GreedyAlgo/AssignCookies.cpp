#include<bits/stdc++.h>
using namespace std;
int findContentchildren(vector<int>& student,vector<int>& cookie){
    sort(student.begin(),student.end());
    sort(cookie.begin(),cookie.end());
    int left = 0;
    int right = 0;
    int n = student.size();
    int m = cookie.size();
    while(left < n && right < m){
        if(student[left] <= cookie[right]){
            left++;
        }
        right++;
    }
    return left;
}
int main() {
    vector<int> student = {1, 2, 3};
    vector<int> cookie = {1, 1};

    int result = findContentchildren(student, cookie);
    cout << "Maximum number of content students: " << result << endl;

    return 0;
}