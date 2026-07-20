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
        next = nullptr;
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
int countlength(Node* slow,Node* fast){
    fast = fast->next;
    int count = 1;
    while(slow != fast){
        count++;
        fast = fast->next;
    }
    return count;
}
int LengthOfLinkedList(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL || fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            return countlength(slow,fast);
        }
    }
    
    return -1;
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