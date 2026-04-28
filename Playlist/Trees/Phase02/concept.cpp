#include<bits/stdc++.h>
using namespace std; 

class node {
public:
    int data;
    node* left = NULL;
    node* right = NULL;

    node (int n) {
        this -> data = n;
        this -> left = NULL;
        this ->  right = NULL;
    }

};

node* buildTree (node* root) {
    cout<< "Enter the data : " <<endl;
    int data;
    cin >> data;
   

    if (data  == -1) {
        return NULL;
    }
    root =  new node(data);

    // left child 
    cout << "Enter the data for inserting in left of " << data << " : "<<endl;
    root -> left = buildTree(root -> left);


    // right child
    cout << "Enter the data for inserting in right of " << data << " : "<<endl;
    root -> right = buildTree(root -> right);

    return root;

}

void levelOrderTraversal (node* root) {
    // also called as breadth-first-search

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            // purana level complete traverse ho chuka hai
            cout << endl;
            if (!q.empty()) { // queue still has some child nodes
                q.push(NULL);
            }
        } else {
        cout << temp -> data << " ";
        if (temp -> left) {
            q.push(temp -> left);
        }

        if (temp -> right) {
            q.push(temp -> right);
        }
        }


    }

}

void inOrderTraversal(node* root) {
    // base case
    if (root == NULL) return;
    
    inOrderTraversal(root -> left);
    cout << root -> data << " ";
    inOrderTraversal(root -> right);
}

void preOrderTraversal(node* root) {
    // base case 
    if (root == NULL) return;
    
    cout << root -> data << " ";
    preOrderTraversal(root -> left);
    preOrderTraversal(root -> right);
}

void postOrderTraversal(node* root) {
    // base case 
    if (root  == NULL) return;

    postOrderTraversal(root -> left);
    postOrderTraversal(root -> right);
    cout << root -> data << " ";
}

void buildFromLevelOrder(node* &root) {
    queue<node*> q;
    cout << "Enter the data for root : " << endl;
    int data;
    cin >> data;
    if (data == -1) {
        root = NULL;
        return;
    }

    root = new node(data);
    q.push(root);
    
    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout << "Enter the data for left child of " << temp -> data << " : " << endl;
        int leftData;
        cin >> leftData;
        if (leftData != -1) {
            temp -> left = new node(leftData);
            q.push(temp -> left);
        }

        

        cout << "Enter the data for right child of " << temp -> data << " : " << endl;
        int rightData;
        cin >> rightData;
        if (rightData != -1) {
            temp -> right = new node(rightData);
            q.push(temp -> right);
        }
    }
}

int main () {
    // creating a tree
    node* root = NULL;
    // root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    //levelOrderTraversal
    // cout << "Printing the level order traversal of the tree : " <<endl;
    // levelOrderTraversal(root);
    // cout <<endl;

    // cout << "Printing the inOrder traversal of the tree : " <<endl;
    // inOrderTraversal(root);
    // cout <<endl;

    // cout << "Printing the preOrder traversal of the tree : " <<endl;
    // preOrderTraversal(root);
    // cout <<endl;

    // cout << "Printing the postOrder traversal of the tree : " <<endl;
    // postOrderTraversal(root);
    // cout <<endl;

    buildFromLevelOrder(root);
    levelOrderTraversal(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1
    return 0;
}