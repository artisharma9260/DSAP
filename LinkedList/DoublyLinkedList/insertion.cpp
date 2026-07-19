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
Node* insertBeforeHead(Node* head,int val){
    Node* newhead = (val,head,nullptr);
    head->prev = newhead;
    return newhead;
}
Node* insertBeforeTail(Node* head,int val){
    if(head->next == NULL) return insertBeforeHead(head,val);
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* back = temp->prev;
    Node* newNode = new Node(val,back,temp);
    back->next = newNode;
    temp->prev = newNode;
    return head;

}
Node* InsertBeforeKth(Node* head,int k,int val){
    if(k == 1) return insertBeforeHead(head,val);
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        if(cnt == k) break;
        temp = temp->next;
    }
    Node* prev = temp->prev;
    Node* newNode = new Node(val,temp,prev);
    prev->next = newNode;
    temp->prev = newNode;
    return head;

}
Node* insertBeforeNode(Node* head,int val,Node* node){
    Node* back = node->prev;
    Node* newNode = new Node(val,node,back);
    back->next = newNode;
    node->prev = newNode;
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