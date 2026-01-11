#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node*prev;
    Node*next;
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
    ~Node(){
        int value= this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory freed for data : "<<value<<endl;
    }

};



//traversing a LL
void printLL(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}


//length of LL
int getLLlength(Node *head){
    Node *temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;

    }
    return len;

}

//INSEERTING 
//1. AT HEAD
void insertAtHead(Node*&head,Node *&tail,int d){
    if(head==NULL){
        Node *temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
            Node *newNode=new Node(d);
            newNode->next=head;
            head->prev=newNode;
            head=newNode;

    }



}

//2. AT TAIL
void insertAtTail(Node *&tail,Node*&head,int d){
    if(head==NULL){
        Node *temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
            Node *newNode=new Node(d);
            tail->next=newNode;
            newNode->prev=tail;
            tail=newNode;

    }



}

//3/AT ANY POSITION
void insertAtPosition(Node *&head,Node*&tail,int position,int d){
    if(position==1){
        insertAtHead(head,tail,d);
        return ;  /// agar return nhi hoga toh niche wala sab execute 
    }
    else{

            Node *temp=head;
            int count=1;
            while(count<position-1){
            temp=temp->next;
            count++;
            }//inserting at last position
            if(temp->next==NULL){
                insertAtTail(tail,head,d);

            }
            else{
                    Node *newNode=new Node(d);
                    newNode->next=temp->next;
                    newNode->prev=temp;
                    temp->next->prev=newNode;

                    temp->next=newNode;
                    

            }



    }
}


//deletion of  a node 
void deleteAtPosition(int position ,Node *&head,Node *&tail){
    if(position==1){
        //deleting start node
        Node*temp =head;
        if(temp->next!=NULL){
            //ll me sirf ek node nhi hai;
                     temp->next->prev=NULL;
                     head=temp->next;
                     temp->next=NULL;
                     delete temp;


        }
        else{
            //el hi node hai ll me
            delete temp;
            head=NULL;
            tail=NULL;

        }

        

    }
    else{ 
        //deleting any middle or last or final node

        Node*curr=head;
        Node*prevs=NULL;
        int count=1;
        while(count<position && curr!=NULL){
            prevs=curr;

            curr=curr->next;
            count++;



        }
        if(curr->next==NULL){//deleting the last node
            prevs->next=NULL;
            tail=curr->prev;
            curr->prev=NULL;
            delete curr;
        }
        else{
            prevs->next=curr->next;
            curr->prev=NULL;
            curr->next->prev=prevs;
            curr->next=NULL;
            delete curr;

        }


    }

}






int main(){
    // Node *node1=new Node(10);
    Node *head=NULL;
    Node *tail=NULL;
    printLL(head);
    // cout<<"LENGTH OF LL : "<<getLLlength(head)<<endl;
    insertAtHead(head,tail,11);
    printLL(head);
    // cout<<"LENGTH OF LL : "<<getLLlength(head)<<endl;
    cout<<"HEad at : "<<head->data<<endl;
    insertAtHead(head,tail,13);
    printLL(head);
    // cout<<"LENGTH OF LL : "<<getLLlength(head)<<endl;
    cout<<"HEad at : "<<head->data<<endl;
    insertAtHead(head,tail,8);
    printLL(head);
    // cout<<"LENGTH OF LL : "<<getLLlength(head)<<endl;
    cout<<"HEad at : "<<head->data<<endl;
    insertAtTail(tail,head,25);
    printLL(head);
    insertAtPosition(head,tail,5,67);
    printLL(head);
    cout<<"HEad at : "<<head->data<<endl;
    cout<<"Tail at : "<<tail->data<<endl;
    deleteAtPosition(5,head,tail);
    printLL(head);
    cout<<"HEad at : "<<head->data<<endl;
    cout<<"Tail at : "<<tail->data<<endl;


    return 0;
}