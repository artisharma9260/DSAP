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
    void preorder(Node* root,vector<int>& arr){
        if(root == nullptr) return;
        arr.push_back(root->data);
        preorder(root->left,arr);
        preorder(root->right,arr);
    }
    vector<int>preorder(Node* root){
        vector<int>arr;
        preorder(root,arr);
        return arr;
    }
    void inorder(Node* root,vector<int>& arr){
        if(root == nullptr) return;
        inorder(root->left,arr);
        arr.push_back(root->data);
        inorder(root->right,arr);
    }
    vector<int>inorder(Node* root){
        vector<int>arr;
        inorder(root,arr);
        return arr;
    }
    void postorder(Node* root,vector<int>& arr){
        if(root == nullptr) return;
        postorder(root->left,arr);
        postorder(root->right,arr);
        arr.push_back(root->data);
    }
    vector<int>postorder(Node* root){
        vector<int>arr;
        postorder(root,arr);
        return arr;
    }
};
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    Solution sol;
    vector<int>result = sol.preorder(root);
    cout<<"Preorder Traversal ";
    for(int val : result){
        cout<<val<<" ";
    }
    
    cout<<endl;
    cout<<"Inorder Traversal: ";
    vector<int>result2 = sol.inorder(root);
    for(int val : result2){
        cout<<val<<" ";
    }

    cout<<endl;
    cout<<"Postorder Traversal: ";
    vector<int>result3 = sol.postorder(root);
    for(int val : result3){
        cout<<val<<" ";
    }
    
    return 0;
}