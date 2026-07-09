#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<vector<int>> RotateMatrix(vector<vector<int>> &arr){
        int n = arr.size();
        for(int i = 0; i < n - 1; i++){
            for(int j = i+1; j < n; j++){
                swap(arr[i][j],arr[j][i]);
            }
        }
        for(int i = 0; i < n; i++){
            reverse(arr[i].begin(),arr[i].end());
        }
        return arr;
    }
};
int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    Solution obj;
    obj.RotateMatrix(matrix);

    for (auto row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}