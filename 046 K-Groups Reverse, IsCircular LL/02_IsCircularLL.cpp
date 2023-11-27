#include<iostream>
#include<map>
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

void insertAtHead(Node* &head,int d){
    // new node create
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int d){
    // new node create
    Node*temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void print(Node* &head){
    if(head==NULL){
        cout<<"List is Empty"<<endl;
        return;
    }
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertAtPosition(Node* &tail,Node* &head,int position,int d){
    // insert at start
    if(position==1){
        insertAtHead(head,d);
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
        insertAtTail(tail,d);
        return;
    }

    // creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

bool isCircularList(Node* head){
    // empty list
    if(head==NULL)
        return true;

    Node* temp =  head->next;
    while(temp!=NULL && temp!=head)
        temp = temp->next;

    if(temp==head)
        return true;

    return false;           
}

int main(){
    // created a new node
    Node* node1 = new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    // head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtTail(tail,12);
    print(head);

    insertAtTail(tail,15);
    print(head);

    insertAtPosition(tail,head,4,22);
    print(head);

    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;

    if(isCircularList(head))
        cout<<"LL is Circular."<<endl;
    else
        cout<<"LL isn't Circular."<<endl;    

    return 0;
}

// 10
// 0
// 10 
// 10 12 
// 10 12 15 
// 10 12 15 22 
// Head: 10
// Tail: 22
// LL isn't Circular.