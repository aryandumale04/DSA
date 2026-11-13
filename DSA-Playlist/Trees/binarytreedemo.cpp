#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node *right;

    //constructor for initialisation
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }


};
node* buildTree(node *root){
    int data;
    cout<<"Enter the data : "<<endl;
    cin>>data;
    root = new node(data);


    if(data==-1){
        return NULL;
    }
    cout<<"Enter data for inserting in left of "<<data <<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data forinserting in right of "<<data<<endl;
    root->right=buildTree(root->right);

    return root;
    


}
void LevelOrderTraversal(node * root){
    queue<node *>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node *temp=q.front();
        
        q.pop();
        if(temp==NULL){
            //ek level hogayi enter dabao
            cout<< endl;
            if(!q.empty()){
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
void inOrder(node *root){
    //LNR
    //base case
    if(root==NULL){
        return ;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);







}
void PreOrder(node *root){
    //NLR
    //base case 

    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);


}
void PostOrder(node *root){
    //LRN
    //base case 
    if(root==NULL){
        return ;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";


}

// build from level order
void * buildFromLevelOrder(node * &root){
    int data;
    cout<<"Enter a data for root : ";
    cin>>data;
    root = new node (data);  

    queue<node * >q;
    q.push(root);

    while(!q.empty()){
        node *temp=q.front();
        q.pop();

    
    cout<<"Enter the left node for - "<<temp->data<<endl;
    int leftData;
    cin>>leftData;
    if(leftData!=-1){
        temp->left=new node(leftData);
        q.push(temp->left);


    }
   
    cout<<"Enter the right node for - "<<temp->data<<endl;
    int rightData;
    cin>>rightData;
    if(rightData!=-1){
        temp->right=new node(rightData);
        q.push(temp->right);
        

    }
    

    }


}
int main
(){
    node *root=NULL;
//     //creating a tree
//     root=buildTree(root);

//    cout<<"Level wise Traversal of Tree : ";
//    LevelOrderTraversal(root);
//    cout<<endl;

//    cout<<"InOrder Traversal of Tree : ";
//    inOrder(root);
//    cout<<endl;

//    cout<<"Pre Order Traversal of Tree : ";
//    PreOrder(root);
//    cout<<endl;

//    cout<<"Post Traversal of Tree : ";
//    PostOrder(root);
//    cout<<endl;


  buildFromLevelOrder(root);
  LevelOrderTraversal(root);
    


    return 0;

}