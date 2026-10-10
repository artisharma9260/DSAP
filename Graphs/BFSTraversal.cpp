#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> bfsOfGraph(int V,vector<int> adj[]){
        vector<int>vis(V,0);
        vis[0] = 1;
        queue<int>q;
        q.push(0);
        vector<int>bfs;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            bfs.push_back(node);

            for(auto it : adj[node]){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return bfs;
    }
};
int main(){
    int n,m;
    cin>>n>>m;
    int adj[n+1][m+1];
    for(int i = 0; i < m; i++){
        int u,v;
        cin>>u>>v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    return 0;
}