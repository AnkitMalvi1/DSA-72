// CodeStudio: Reverse List in K-Groups

#include<iostream>
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
};

int lengthOfLL(Node* &head){
    Node* temp = head;
    int length=0;
    while(temp){
        length++;
        temp= temp->next;
    }
    return length;
}

Node* kReverse(Node* head,int k){
    int length = lengthOfLL(head); 
    // base case
    if(head==NULL||k>length)
        return head;

    // step1: reverse first k nodes
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;

    while(curr!=NULL && count<k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // step2: Recursion call
    if(next!=NULL)
        head->next = kReverse(next,k);

    // step3: return head of reversed ll
    return prev;
}