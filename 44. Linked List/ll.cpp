#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Deleting"<<value<<endl;
    }
};

//Insertion

void InsertAtHead(Node* &head, int d){
    //new node creation
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void InsertAtPosition(int position, int d, Node* &head, Node* &tail){
    if(position==1){
        InsertAtHead(head, d);
        return;
    }
    Node* temp = new Node(d);
    Node* curNode = head;
    int i = 1;
    while(i<position-1){
        curNode = curNode->next;
        i++;
    }
    if(curNode->next==NULL){
        InsertAtTail(tail, d);
        return;
    }
    temp->next = curNode->next;
    curNode->next = temp;
}

void print(Node* head){
    Node* temp = head;
    while(temp->next!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<temp->data<<endl;
}

//Deletion

void deleteNodeUsingPosition(Node* &head, int position){
    if(position==1){
        Node* temp = head;
        head = head->next;
        temp->next= NULL;
        delete(temp);
    }else{
        Node* curNode = head;
    Node* prev = NULL;
    int i = 1;
    while(i<position){
        prev = curNode;
        curNode = curNode->next;
        i++;
    }
    prev->next = curNode->next;
    curNode->next = NULL;
    delete(curNode);
    }
}

int main(){

    Node* node1 = new Node(10); //creating node
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    Node* head= node1; 
    Node* tail = node1;
    InsertAtTail(tail, 70);
    InsertAtTail(tail, 825);
    InsertAtTail(tail, 45);
    InsertAtPosition(4, 600, head, tail);
    deleteNodeUsingPosition(head, 3);
    // InsertAtHead(head, 13);
    // InsertAtHead(head, 18);
    // InsertAtHead(head, 189);
    // InsertAtHead(head, 11);
    // InsertAtHead(head, 122);
    print(head);
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;
    return 0;
}