#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node* prev;
    Node(int data1,Node* next1 ,Node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};
Node* convert2Dll(vector<int>& arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
Node* deleteHead(Node* head){
    if(head == NULL || head->next == NULL ) return NULL;
    Node* prev1 = head;
    head = head->next;
    head->prev = nullptr;
    prev1->next = nullptr;
    delete prev1;
    return head;

}
Node* deleteTail(Node* head){
    if(head == NULL || head->next == NULL) return NULL;
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* newTail = temp->prev;
    newTail->next = nullptr;
    temp->prev = nullptr;
    delete temp;
    return head;
}
Node* deleteKthElement(Node* head,int k){
    if(head == NULL) return NULL;
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == k) break;
        temp = temp->next;
    }
    Node* back = temp->prev;
    Node* front = temp->next;
    if(back == NULL && front == NULL) return NULL;
    else if(back == NULL){
        return deleteHead(head);
    }
    else if(front == NULL){
        return deleteTail(head);
    }
    back->next = front;
    front->prev = back;
    temp->prev = nullptr;
    temp->next = nullptr;
    delete temp;
    return head;

}
void deleteNode(Node* temp){
    Node* back = temp->prev;
    Node* front = temp->next;
    if(front == NULL){
        back->next = nullptr;
        temp->prev = nullptr;
        delete temp;
    }
    back->next = front;
    front->prev = back;
    temp->next = temp->prev = nullptr;
    delete temp;
}
int main(){
    vector<int>arr={1,2,3,4,5};
    Node* head = convert2Dll(arr);
    while(head != NULL){
        cout<<head->data;
        head = head->next;
    }
    return 0;
}