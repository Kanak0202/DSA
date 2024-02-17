#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};

void InsertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void InsertAtPosition(int position, Node* &head, int data, Node* tail){
    Node* curNode = head;
    if(position==1){
        InsertAtHead(head, data);
        return;
    }else{
        Node* temp = new Node(data);
    int i = 1;
    while(i<position-1){
        curNode = curNode->next;
        i++;
    }
    if(curNode->next==NULL){
        insertAtTail(tail, data);
        return;
    }
    curNode->next->prev = temp;
    temp->next = curNode->next;
    curNode->next = temp;
    temp->prev = head;
    }
}

void deleteANode(int position, Node* head){
    Node* curNode = head;
    if(position==1){
        "";
    }else{
        int i = 1;
        while(i<position-1){
            curNode = curNode->next;
            i++;
        }
        curNode->next->prev = NULL;
        curNode->next->prev = curNode;
        curNode->next = curNode->next->next;
    }
}

void print(Node* head){
    Node* temp = head;
    while(temp->next!=NULL){
        cout<<temp->data<<"<->";
        temp = temp->next;
    }     
    cout<<temp->data;
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    InsertAtHead(head, 15);
    InsertAtHead(head, 100 );
    insertAtTail(tail, 50 );
    insertAtTail(tail, 70 );
    InsertAtPosition(6, head, 5000, tail);
    deleteANode(5, head);
    print(head);
    return 0;
}