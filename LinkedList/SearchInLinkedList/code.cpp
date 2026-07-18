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
    bool checkNum(Node* head,int val){
        Node* temp = head;
        while(temp != NULL){
            if(temp->data == val) return true;
            temp = temp->next;
        }
        return false;
    }

};