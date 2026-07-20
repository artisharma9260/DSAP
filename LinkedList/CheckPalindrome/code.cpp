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
Node* reverseLinkedList(Node* head){
    if(head == NULL || head->next == NULL) return head;
    Node* curr = head;
    Node* back = NULL;
    while(curr != NULL){
        Node* temp = curr->next;
        curr->next = back;
        back = curr;
        curr = temp;
    }
}
bool isPalindrome(Node* head){
    if(head == NULL || head->next == NULL) return true;
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL || fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* newHead = reverseLinkedList(slow->next);
    Node* first = head;
    Node* second = newHead;
    while(second != NULL){
        if(first->data != second->data){
            reverseLinkedList(newHead);
            return false;
        }
        first = first->next;
        second = second->next;
    }
    return true;

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