#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
    }
};
class Solution{
public:
    Node* linkedList(vector<int> &arr){
        Node* head = new Node(arr[0]);
        Node* prev = head;
        for(int i = 1; i < arr.size(); i++){
            Node* temp = new Node(arr[i]);
            prev->next = temp;
            prev = prev->next;
        }
        return head;
    }
};
bool detectCycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL || fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) return true;
    }
    return false;
}
int main(){
    vector<int>arr = {1,2,3,4};
    Solution obj;
    Node* curr = obj.linkedList(arr);
    while(curr != nullptr){
        cout<<curr->data;
        curr = curr->next;
    }

    return 0;

}