#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
vector<vector<int>> SetMatrixZero(vector<vector<int>>& arr){
    int n = arr.size();
    int m = arr[0].size();
    vector<int> row(n,0);
    vector<int> col(m,0);
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr[0].size(); j++){
            if(arr[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(row[i] == 1 || col[j] == 1){
                arr[i][j] = 0;
            }
        }
    }
    return arr;
}
};
int main(){
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    Solution obj;
    obj.SetMatrixZero(matrix);
    for (auto row : matrix) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
