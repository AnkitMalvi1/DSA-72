// CodeStudio: Reverse Linked List

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node(){
        int value = this->data;
        // memory free
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory Free: "<<value<<endl;
    }
};

// I - Iterative Approach
Node* reverseLinkedList(Node *head){
    if(head==NULL || head->next==NULL)
        return head;

    Node* prev =  NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr!=NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }   
    return prev;
}

// II - Recursive Approach
void reverse(Node* &head,Node* curr,Node* prev){
    // base case
    if(curr==NULL){
        head = prev;
        return;
    }

    Node* forward = curr->next;
    reverse(head,forward,curr);
    curr->next = prev;
}

Node* reverseLinkedList(Node *head){
    Node* curr = head;
    Node* prev = NULL;
    reverse(head,curr,prev);
    return head;
}