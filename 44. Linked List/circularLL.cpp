#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
    }

    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete(next);
            next = NULL;
        }
    }
};

void insertNode(Node* &tail, int element, int data){
    if(tail==NULL){
        Node* temp = new Node(data);
        tail = temp;
        tail->next = temp;
    }else{
        Node* curr = tail;
        while(curr->data!=element){
            curr = curr->next;
        }
        Node* temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node* tail){
    Node* temp = tail;
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail!=temp);
}

int main(){
    Node* tail = NULL;
    insertNode(tail, 8, 10);
    insertNode(tail, 10, 6);
    insertNode(tail, 10, 5);
    print(tail);
    return 0;
}