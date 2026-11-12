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
int main
(){
    node *root=NULL;
    //creating a tree
    root=buildTree(root);


   LevelOrderTraversal(root);

  
    


    return 0;

}