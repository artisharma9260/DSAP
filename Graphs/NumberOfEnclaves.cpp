#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        queue<pair<int,int>>q;
        vector<int>deltaRow = {-1,1,0,0};
        vector<int>deltaCol = {0,0,-1,1};
        for(int row = 0; row  < rows; row++){
            for(int col = 0; col < cols; col++){
                if((row == 0 || col == 0 || row == rows - 1 || col == cols - 1) && grid[row][col] == 1){
                    grid[row][col] = 0;
                    q.push({row,col});
                }
            }
        }
        while(!q.empty()){
            pair<int,int>cell = q.front();
            q.pop();
            for(int dir = 0; dir < 4; dir++){
                int nextRow = cell.first + deltaRow[dir];
                int nextCol = cell.second + deltaCol[dir];
                if(nextRow >= 0 && nextCol >= 0 && nextRow < rows && nextCol < cols){
                    if(grid[nextRow][nextCol] == 1){
                        grid[nextRow][nextCol] = 0;
                        q.push({nextRow,nextCol});
                    }
                }
            }
        }
        int enclaves = 0;
        for(int row = 0; row < rows; row++){
            for(int col = 0; col < cols; col++){
                enclaves += grid[row][col];
            }
        }
        return enclaves;
    }
};
int main(){
    return 0;
}