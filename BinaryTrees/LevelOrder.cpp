#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
class Solution{
public:
    vector<vector<int>>levelorder(Node* root){
        vector<vector<int>>ans;
        if(root == NULL) return ans;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int>level;
            for(int i = 0; i < size; i++){
                Node* node = q.front();
                q.pop();
                if(node->left != NULL) q.push(node->left);
                if(node->right != NULL) q.push(node->right);
                level.push_back(node->data);
                
            }
            ans.push_back(level);
        }
        return ans;
    }
    
    
};
void printVector(const vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    Solution sol;
    vector<vector<int>>result = sol.levelorder(root);
    
    cout << "Level Order Traversal of Tree: "<< endl;
    for (const vector<int>& level : result) {
        printVector(level);
    }
    
    
    return 0;
}