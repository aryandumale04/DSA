#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for node with data"<<value<<endl;


    }
};
//INSERTION OF A NODE


// 1. AT HEAD 
void insertAtHead(Node *&head,int data){
    //create new node
    Node *temp= new Node(data);
    //newnode ka next = head
    temp->next=head;
    //head ko first node pe set karo
    head=temp; 

}



//2. AT TAIL
void insertAtTail(Node *&tail,int data){

    Node *temp=new Node(data);
    tail->next=temp;
    tail=temp;
}


//3. INSERT IN MIDDLE(AT ANY POSITION)
void insertAtMiddle(Node*&head,Node *&tail,int positi,int data){
    //create the node
    Node *nodeToInsert=new Node(data);
    Node*temp=head;
    int count=1;

    if(positi==1){
        insertAtHead(head,data);
        return ;  /// agar return nhi hoga toh niche wala sab execute 
    }
    while(count<positi-1){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        insertAtTail(tail,data);
    }
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;

     

}


//deleting a node by position
void deleteAtPosition(int position ,Node *&head,Node *&tail){
    if(position==1){
        //deleting start node
        Node*temp =head;
        head=head->next;
        //free memory
        temp->next=NULL;
        delete temp;
        if(head==NULL){
            tail=NULL;
        }


    }
    else{
        //deleting any moiddle or last node
        Node *curr=head;
        Node *prev=NULL;
         int count =1;
         while(count<position){
            prev=curr; 
            curr=curr->next;
            count ++;
            
         }
         prev->next=curr->next;
         curr->next=NULL;

         delete curr;
         if(prev->next==NULL){
            tail=prev;
         }





    }

     


}

//traversing a head
void print(Node *&head){//as a reference bhejna compuslory nahi hai
// while(head->next!=NULL){//dikkat ye hai kki head ko aagein badana padega aur yaha pe as a reference bheja hai isleye main LL ka head change ho jayega so create a temp pointer

//     cout<<
// }

    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}


int main(){
     Node *node1=new Node(10);
    //  cout<<node1->data<<endl;
    //  cout<<node1->next<<endl;

    //head ko point karwao first node pe 
    Node *head=node1;
    Node *tail=node1;

    print(head);
    // insertAtHead(head,12);
    // insertAtHead(head,14);

    insertAtTail(tail,12);
    insertAtTail(tail,15);
    insertAtMiddle(head,tail,2,11);
    insertAtMiddle(head,tail,4,13);
    insertAtMiddle(head,tail,5,14);    
    insertAtMiddle(head,tail,1,69);
    print(head);
    deleteAtPosition(7,head,tail);
    cout<<(*head).data<<endl;
    cout<<tail->data<<endl;

    print(head);
    return 0;
}