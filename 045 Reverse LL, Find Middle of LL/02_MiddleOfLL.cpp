// CodeStudio: Middle of Linked List

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
};

// I - Approach
int getLength(Node* head){
    int len = 0;
    while(head!=NULL){
        len++;
        head = head->next;
    }
    return len;
}

Node *findMiddle(Node *head){
    int len = getLength(head);
    int ans = (len)/2;
    Node* temp = head;
    int cnt = 0;
    while(cnt<ans){
        temp = temp->next;
        cnt++;
    }
    return temp;
}

// II - Approach
Node* getMiddle(Node* head){
    if(head==NULL || head->next==NULL)
        return head;

    // 2 nodes - 
    if(head->next->next==NULL)
        return head->next;

    Node* slow = head;
    Node* fast = head->next;

    while(fast!=NULL){
        fast = fast->next;
        if(fast!=NULL)
            fast = fast->next;

        slow = slow->next;    
    }
}

Node *findMiddle(Node *head){
    return getMiddle(head);
}