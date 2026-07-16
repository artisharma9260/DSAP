#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();
        for(int i = 0; i < m; i++){
            for(int j = 0; j < m; j++){
            swap(matrix[i][j],matrix[j][i]);
            }
        }
        return matrix;
    }
};
int main(){
    return 0;
}