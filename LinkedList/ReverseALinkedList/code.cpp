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
Node* ReverseALinkedList(Node* head){
    if(head == NULL || head->next == NULL) return head;
    Node* temp = head;
    Node* back = NULL;
    while(temp != NULL){
        Node* front = temp->next;
        temp->next = back;
        back = temp;
        temp = front;


    }
    return back;
}
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