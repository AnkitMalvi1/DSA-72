#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            next = NULL;           
        }
        cout<<"Memory Free: "<<value<<endl;
    }
};

void insertNode(Node* &tail,int element,int d){
    // empty list
    if(tail==NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        // non-empty list
        Node* curr = tail;

        while(curr->data!=element)
            curr = curr->next;

        // element found
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node* tail){
    Node* temp = tail;

    // empty list
    if(tail==NULL){
        cout<<"List is Empty"<<endl;
        return;
    }

    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail!=temp);

    cout<<endl;
}

void deleteNode(Node* &tail,int value){
    // empty list
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    else{
        // non-empty
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data!=value){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        // 1 node linkedlist
        if(curr==prev)
            tail = NULL;
        // >=2 node linkedlist
        else if(tail==curr)
            tail = prev;

        curr->next = NULL;
        delete curr;    
    }
}

int main(){
    Node* tail = NULL;
    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,5);
    print(tail);
    insertNode(tail,5,7);
    print(tail);
    insertNode(tail,7,9);
    print(tail);
    insertNode(tail,5,6);
    print(tail);
    insertNode(tail,9,10);
    print(tail);
    insertNode(tail,3,4);
    print(tail);

    deleteNode(tail,5);
    print(tail);

    return 0;
}
// 3 
// 3 5
// 3 5 7
// 3 5 7 9
// 3 5 6 7 9
// 3 5 6 7 9 10
// 3 4 5 6 7 9 10
// Memory Free: 5
// 3 4 6 7 9 10