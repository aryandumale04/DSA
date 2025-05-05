#include<iostream>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
        Node(int h)
        {
            this->data=h;
            this->next=NULL;            

        }
        ~Node()
        {
            int value=this->data;
            //to free memory
            if(this->next!=NULL)
            {
                delete next;
                this->next=NULL;
                
            }
            cout<<"Memory is free for node with data"<<value<<endl;
        }
};
void insertathead(Node* &head,int h)

{
    
    Node*temp=new Node(h);
    temp->next=head;
    head=temp; 
}
void insertattail(Node* &tail,int d)
{
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}
void insertatposition(Node* &tail,Node* &head,int position,int d)
{       //insert at start
        if (position==1)
        {
            insertathead(head,d);
            return;
        
        }
    //insert in middle
    Node* temp= head;
    int cnt=1;
    while (cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    //insert at last position
    if(temp->next==NULL)
    {
        insertattail(tail,d);
        return;
    }
    //creating midnode
    Node *midnode=new Node(d);
    midnode->next=temp->next;
    temp->next=midnode;
    
}
void deletenode(Node* &head,int position)
{
    //for deletiion of start node
    if(position==1)
    {
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        temp->next=NULL;
        delete temp;


            }
    else{
        Node *curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<position)
        {   prev=curr;
            curr=curr->next;
            cnt++;
        }

        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        
    }
}
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
        
    }
    cout<<endl;
}
int main()
{   //creating a new node
     Node *head=NULL;
    Node *obj= new Node(10);
    //head pointing to our new node
    head=obj;
    Node* tail=obj;
    print(head);
    insertattail(tail ,12);
    // cout<<obj->data;
    print(head); 
    insertattail(tail,15);
    print(head);
    insertatposition(tail,head, 4, 22);
    print(head);
    cout<<head->data<<" "<<tail->data;
    deletenode(head,4);
    print(head);
     cout<<head->data<<" "<<tail->data;
    return 0;
}
