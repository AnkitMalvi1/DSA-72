#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    // destructor
    ~Node(){
        int value = this->data;
        // memory free
        if(next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory Free: "<<value<<endl;
    }
};

// Traversing a linked list
void print(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

// gives length of linked list
int getlength(Node* head){
    int len = 0;
    Node* temp = head;

    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node* &tail,Node* &head,int d){
    // empty list
    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &tail,Node* &head,int d){
    // empty list
    if(tail==NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node* &tail,Node* &head,int position,int d){
    // insert at start
    if(position==1){
        insertAtHead(tail,head,d);
        return ;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }

    // inserting at last position
    if(temp->next==NULL){
        insertAtTail(tail,head,d);
        return;
    }

    // creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp; 
}

void deleteNode(int position,Node* &head){
    // deleting first or start node
    if(position==1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        // deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        } 
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    print(head);
    cout<<"Length: "<<getlength(head)<<endl;

    insertAtHead(tail,head,11);
    print(head);
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;

    insertAtHead(tail,head,13);
    print(head);
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;

    insertAtHead(tail,head,8);
    print(head);
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;

    insertAtTail(tail,head,25);
    print(head);
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;

    insertAtPosition(tail,head,2,100);
    print(head);
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;

    insertAtPosition(tail,head,1,101);
    print(head);
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;

    insertAtPosition(tail,head,7,102);
    print(head);
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;

    deleteNode(7,head);
    print(head);
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;
   
    return 0;
}

// Length: 0
// 11 
// Head: 11
// Tail: 11
// 13 11 
// Head: 13
// Tail: 11
// 8 13 11
// Head: 8
// Tail: 11
// 8 13 11 25
// Head: 8
// Tail: 25
// 8 100 13 11 25
// Head: 8
// Tail: 25
// 101 8 100 13 11 25
// Head: 101
// Tail: 25
// 101 8 100 13 11 25 102
// Head: 101
// Tail: 102
// Memory Free: 102
// 101 8 100 13 11 25
// Head: 101
// Tail: 102