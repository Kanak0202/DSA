#include<iostream>
#include<queue>
using namespace std;

class node{
    //instance variables
    public:
    int data;
    node* left;
    node* right;
    //constructor
    node (int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

//function
node* buildTree(node* root){
    // cout<<"Enter the data for node: ";
    int data;
    cin>>data;
    root = new node(data); //Constructor will be called & new node will be created

    if(data==-1){
        return NULL;
    }

    //Going towards left
    // cout<<"Enter data to insert in left of "<<data<<": "<<endl;
    root->left = buildTree(root->left);
    // cout<<"Enter data to insert in right of "<<data<<": "<<endl;
    root->right= buildTree(root->right);
    return root;
}

//Level Order Traversal OR Breadth First Search(BFS)
void levelOrderTraversal(node* root){
    queue<node*> q ; //Queue of type node*
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
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

void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

//PreOrder
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

//PostOrder
void postorder(node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}

void buildFromLevelOrder(node* &root){
    queue<node*> q;
    cout<<"Enter data for root: "<<endl;
    int data;
    cin>>data;  
    root = new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout<<"Enter left node for "<<temp->data<<" :"<<endl;
        int leftData;
        cin>>leftData;
        if(leftData!=-1){
            temp->left= new node(leftData);
            q.push(temp->left);
        }
        cout<<"Enter right node for "<<temp->data<<" :"<<endl;
        int rightData;
        cin>>rightData;
        if(rightData!=-1){
            temp->right= new node(rightData);
            q.push(temp->right);
        }
    }
}
int main(){
    node* root = NULL;
    //creating root
    // root = buildTree(root);
    // levelOrderTraversal(root);
    
    // cout<<"Inorder Traversal is: ";
    // inorder(root);
    // cout<<"Preorder Traversal is: ";
    // preorder(root);
    // cout<<"Postorder Traversal is: ";
    // postorder(root);
    buildFromLevelOrder(root);
    levelOrderTraversal(root);
    return 0;
}