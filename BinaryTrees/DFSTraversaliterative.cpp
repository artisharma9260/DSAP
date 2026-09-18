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
    vector<int>preorderTraversal(Node* root){
        vector<int>preorder;
        if(root == NULL) return preorder;
        stack<Node*>st;
        st.push(root);
        while(!st.empty()){
            Node* root = st.top();
            st.pop();
            preorder.push_back(root->data);
            if(root->right != NULL) st.push(root->right);
            if(root->left != NULL) st.push(root->left);
        }
        return preorder;
    }
    vector<int>inorderTraversal(Node* root){
        vector<int>inorder;
        stack<Node*>st;
        Node* node = root;
        while(true){
            if(node != NULL){
                st.push(node);
                node = node->left;
            }
            else{
                if(st.empty() == true) break;
                node = st.top();
                st.pop();
                inorder.push_back(node->data);
                node = node->right;
            }
        }
        return inorder;
    }
    vector<int>postorderTraversal(Node* root){
        vector<int>postorder;
        if(root == NULL) return postorder;
        stack<Node*>st1,st2;
        st1.push(root);
        while(!st1.empty()){
            root = st1.top();
            st1.pop();
            st2.push(root);
            if(root->left != NULL) st1.push(root->left);
            if(root->right != NULL) st1.push(root->right);
        }
        while(!st2.empty()){
            postorder.push_back(st2.top()->data);
            st2.pop();
        }
        return postorder;
    }
};
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    Solution sol;
    vector<int>result = sol.preorderTraversal(root);
    cout<<"Preorder Traversal ";
    for(int val : result){
        cout<<val<<" ";
    }
    
    cout<<endl;
    cout<<"Inorder Traversal: ";
    vector<int>result2 = sol.inorderTraversal(root);
    for(int val : result2){
        cout<<val<<" ";
    }

    cout<<endl;
    cout<<"Postorder Traversal: ";
    vector<int>result3 = sol.postorderTraversal(root);
    for(int val : result3){
        cout<<val<<" ";
    }
    
    return 0;
}