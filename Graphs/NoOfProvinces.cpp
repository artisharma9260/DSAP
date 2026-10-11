#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void dfs(int city,vector<vector<int>>& isconnected,vector<int>& visited){
        visited[city] = 1;
        int n = isconnected.size();
        for(int nextCity = 0; nextCity < n; nextCity++){
            if(isconnected[city][nextCity] == 1 && visited[nextCity] == 0){
                dfs(nextCity,isconnected,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int>visited(n,0);
        int provinces = 0;
        for(int city = 0; city < n; city++){
            if(visited[city] == 0){
                provinces++;
                dfs(city,isConnected,visited);
            }
        }
        return provinces;
    }
};
int main(){
    return 0;
}