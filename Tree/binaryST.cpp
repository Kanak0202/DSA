#include<bits/stdc++.h>

using namespace std;

class node {
    public:
    int data;
    node* right;
    node* left;
    node(int val) {
        data = val;
        right = NULL;
        left = NULL;
    }
};

string inorder(node* &root) {
    if(root == NULL) {
        return "";
    }
    return inorder(root->left) + to_string(root->data) + " " + inorder(root->right);
}

string preorder(node* &root) {
    if(root == NULL) {
        return "";
    }
    return to_string(root->data) + " " + preorder(root->left) + preorder(root->right);
}

string postorder(node* &root) {
    if(root == NULL) {
        return "";
    }
    return postorder(root->left) + postorder(root->right) + to_string(root->data) + " ";
}

void insert(node* &root, int val) {
    node* n = new node(val);
    if(root == NULL) {
        root = n;
        return;
    }
    if(val < root->data) {
        if(root->left == NULL) {
            root->left = n;
        } else {
            delete n;
            insert(root->left, val);
        }
    } else if(val > root->data) {
        if(root->right == NULL) {
            root->right = n;
        } else {
            delete n;
            insert(root->right, val);
        }
    }
}

int successor(node* &root) {
    if(root->left->left == NULL) {
        node* t = root->left;
        int val = t->data;
        root->left = root->left->right;
        delete t;
        return val; 
    }

    return successor(root->left);
}



node* Predecessor(node* root, int value) {
    node* current = root;
    node* pred = NULL;

    while (current != NULL) {
        if (value < current->data) {
            current = current->left;
        } else if (value > current->data) {
            pred = current;
            current = current->right;
        } else {
            if (current->left != NULL) {
                pred = current->left;
                while (pred->right != NULL) {
                    pred = pred->right;
                }
            }
            break;
        }
    }

    return pred;
}



void deleteNode(node* &root, int val) {
    if(root == NULL) {
        return;
    }
    if(root->data == val) {
        
        if(root->left == NULL and root->right == NULL) {
            node* t = root;
            root = NULL;
            delete t;
        } else if(root->left != NULL and root->right == NULL) {
            node* t = root;
            root = root->left;
            delete t;
        } else if(root->left == NULL and root->right != NULL) {
            node* t = root;
            root = root->right;
            delete t;
        } else {
            if(root->right->left == NULL and root->right->right == NULL) {
                node* t = root->right;
                root->data = t->data;
                root->right = NULL;
                delete t;
            } else {
                root->data = successor(root->right);
            }
        }
    }
    if(root->left != NULL and root->left->data == val) {
        if(root->left->left == NULL and root->left->right == NULL) {
            node* t = root->left;
            root->left = NULL;
            delete t;
        } else if(root->left->left == NULL and root->left->right != NULL) {
            node* t = root->left;
            root->left = root->left->right;
            delete t;
        } else if(root->left->left != NULL and root->left->right == NULL) {
            node* t = root->left;
            root->left = root->left->left;
            delete t;
        } else {
            if(root->left->right->left == NULL and root->left->right->right == NULL) {
                node* t = root->left->right;
                root->left->data = t->data;
                root->left->right = NULL;
                delete t;
            } else {
                root->left->data = successor(root->left->right);
            }
        }
    } else if(root->right != NULL and root->right->data == val) {
        if(root->right->left == NULL and root->right->right == NULL) {
            node* t = root->right;
            root->right = NULL;
            delete t;
        }  else if(root->right->left == NULL and root->right->right != NULL) {
            node* t = root->right;
            root->right = root->right->right;
            delete t;
        } else if(root->right->left != NULL and root->right->right == NULL) {
            node* t = root->right;
            root->right = root->right->left;
            delete t;
        } else {
            if(root->right->right->left == NULL and root->right->right->right == NULL) {
                node* t = root->right->right;
                root->right->data = t->data;
                root->right->right = NULL;
                delete t;
            } else {
                root->right->data = successor(root->right->right);
            }
        } 
    } else if(val < root->data) {
        deleteNode(root->left, val);
    } else if(val > root->data) {
        deleteNode(root->right, val);
    }
}

bool search(node* root, int key) {
    if(root == NULL) {
        return 0;
    }

    if(root->data == key) {
        return 1;
    }

    return search(root->left, key) || search(root->right, key);
}

void display(node* &root) {
    if(root == NULL) {
        return;
    }
    display(root->left);
    cout << root->data << " ";
    display(root->right);
}


void calculateLevelSum(node* root) {
    if (root == nullptr) {
        return;
    }

    queue<node*> q;
    q.push(root);
    int mxsum = 0;
    int l = 0, ans = 0;
    while (!q.empty()) {
        int levelSum = 0;
        int levelSize = q.size();
        

        for (int i = 0; i < levelSize; i++) {
            node* current = q.front();
            q.pop();
            levelSum += current->data;

            if (current->left != nullptr) {
                q.push(current->left);
            }
            if (current->right != nullptr) {
                q.push(current->right);
            }
        }
        l++;
        if(mxsum < levelSum) {
            mxsum = levelSum;
            ans = l;
        }
    }

    cout << ans-1 << endl;
}


node* findSuccessor(node* root, int value) {
    node* current = root;
    node* succ = NULL;

    while (current != NULL) {
        if (value < current->data) {
            succ = current;
            current = current->left;
        } else if (value > current->data) {
            current = current->right;
        } else {
            if (current->right != NULL) {
                succ = current->right;
                while (succ->left != NULL) {
                    succ = succ->left;
                }
            }
            break;
        }
    }

    return succ;
}

void levelOrderTraversal(node* root) {
    if (root == NULL) {
        return;
    }

    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        node* current = q.front();
        q.pop();

        cout << current->data << " ";

        if (current->left != NULL) {
            q.push(current->left);
        }

        if (current->right != NULL) {
            q.push(current->right);
        }
    }
}


int main() {
    int n;
    cin >> n;
    node* root = NULL;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        insert(root, x);
    }
    int x1, x2, x3; cin >> x1 >> x2 >> x3;
    if(search(root, x1)) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    
    deleteNode(root, x2);
    
    cout << findSuccessor(root, x3)->data << '\n';

    cout << Predecessor(root, x3)->data << '\n';

    cout << inorder(root) << '\n';

    cout << preorder(root) << '\n';

    cout << postorder(root) << '\n';

    levelOrderTraversal(root);
    cout << '\n';
    calculateLevelSum(root);



    return 0;
}