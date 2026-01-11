#include<iostream>
#include<map>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int d){
        this->data=d;
        this->next=NULL;


    }
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;

        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }

};

void insertNode(Node*&tail,int ele,int d){//head ki need nahi hoti circular ll me so use only TAIL


        //mostly insert at position cannot be done as we cannot determine the starting 
        // point (head and tail in a circular ll so )so instead we will insert  by value






    //list is empty
    if(tail==NULL){

        Node*temp=new Node(d);
        tail=temp;
        temp->next=temp;
        
    }
    else{
        // Node *temp=tail;//nahi kar sakte kyuki har baar tail ke baad hi nahi dalna hai
        // while(temp->data!=d){
        //     temp=temp->next;

        // }
        // Node*newNode=new Node(d);
        // temp->next=newNode;
       
        Node *curr=tail;

        while(curr->data!=ele){
            curr=curr->next;
        }

        Node * newNode=new Node(d);
        newNode->next=curr->next;
        curr->next=newNode;


        

    }


}
void prinntLL(Node* tail){
    
    if(tail==NULL){
        cout<<"The list is empty !!"<<endl;
        return;
    }
    Node *temp=tail;
    
        do{
        cout<<tail->data<<" ";
        tail=tail->next;

        }while(tail!=temp);
        cout<<endl;

  


    
    
}
void deletenode(Node *&tail,int ele){
    if(tail==NULL){
        //LIST IS EMPTY
        cout<<"The list is empty !!";

    }
    else{
        //LIST IS NON EMPTY 
        //assuming the element is in list
        Node *prev=tail;
        Node *curr=prev->next;
        while(curr->data!=ele){
            prev=curr;
            curr=curr->next;
        }
        if(tail==curr){
            //singlle node ll

            tail=prev;
            return;
        }
        if(curr==prev) {//2 node ll
            tail=prev;
            return;


        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        
    }
}
bool isCircular(Node* head){
    if(head==NULL){//empty list
        return true;
    }
    Node *temp=head->next;
    while(temp!=NULL && temp!=head ){
        temp=temp->next;
    }
    if(temp==NULL){
        return false;
    }
    if(temp==head){
        return true;
    }
}


int main(){
    Node *tail=NULL;
    insertNode(tail,5,3);
    prinntLL(tail);
    insertNode(tail,3,5);
    prinntLL(tail);
    // insertNode(tail,5,7);
    // prinntLL(tail);
    // insertNode(tail,7,9);
    // prinntLL(tail);
    // insertNode(tail,5,6);
    // prinntLL(tail);
    // deletenode(tail,3);
    // prinntLL(tail);
    bool a = isCircular(tail);
    cout<<a;
    return 0;
}