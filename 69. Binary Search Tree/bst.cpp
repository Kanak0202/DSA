#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

};

void levelOrderTraversal(Node* root){
    queue<Node*> q ; //Queue of type Node*
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp == NULL){ //Purana level complete traverse ho chuka hai
            cout<<endl;
            if(!q.empty()){ //queue still has some child elements
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
        }
    }
}

Node* insertIntoBST(Node* root, int data){
    if(root==NULL){
        root = new Node(data);
        return root;
    }
    if(data>root->data){
        root->right = insertIntoBST(root->right, data);
    }
    else{
        root->left = insertIntoBST(root->left, data);
    }
    return root;
}

Node* minValue(Node* root){
    Node* temp = root;
    while(temp->left!=NULL){
        temp = temp->left;
    }
    return temp;
}

Node* maxValue(Node* root){
    Node* temp = root;
    while(temp->right!=NULL){
        temp = temp->right;
    }
    return temp;
}

Node* inorderSuccessor(Node* root, Node* p){
    Node* successor = NULL;
    while(root!=NULL){
        if(p->data>=root->data){
            root = root->right;
        }else{
            successor = root;
            root = root->left;
        }
    }
    return successor;
}

Node* inorderPredecessor(Node* root, Node* p){
    Node* predecessor = NULL;
    while(root!=NULL){
        if(p->data<=root->data){
            root = root->left;
        }else{
            predecessor = root;
            root = root->right;
        }
    }
    return predecessor;
}

Node* deleteFromBST(Node* root, int val){
    if(root == NULL){
        return NULL;
    }
    if(root->data == val){
        // 0 child
        if(root->left == NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        // 1 child
        //left child
        if(root->left!=NULL && root->right==NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        //right child
        if(root->right!=NULL && root->left==NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        if(root->left != NULL && root->right!=NULL){
            int mini = minValue(root->right)->data;
            root->data = mini;
            root->right = deleteFromBST(root->right, mini);
            return root;
        }
        
    }else if(root->data>val){
        root->left = deleteFromBST(root->left, val);
        return root;
    }else{
        root->right = deleteFromBST(root->right, val);
        return root;
    }
}

void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root = insertIntoBST(root, data);
        cin>>data;
    }
}

int main(){
    Node* root = NULL;
    cout<<"Enter data to create BST: "<<endl;
    takeInput(root);
    cout<<"Printing the BST: "<<endl;
    levelOrderTraversal(root);
    cout<<"Minimum value: "<<minValue(root)->data<<endl;
    cout<<"Maximum value: "<<maxValue(root)->data<<endl;
    deleteFromBST(root, 50);
    levelOrderTraversal(root);
    return 0;
}