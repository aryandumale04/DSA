#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int d)
    {
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
    ~Node()
    {
        int value=this->data;
        if(next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"Memory free for node with data"<<value;
    }
};
//traversing
void print(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}
//length of LL
int getlength(Node* head)
{
    int len=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        len++;

    }
    return len;

}
void insertathead(Node* & tail ,Node* &head,int d)
{   if(head==NULL)
{
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
}
else
{


        Node* temp=new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
}
}
void insertattail(Node* &tail,Node* & head,int d)
{   cout<<" tail "<<tail->data<<endl;
    if(tail==NULL)
    {
        Node* temp=new Node(d);
        tail=temp;
        head=temp;
    }

else{
    Node*temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}}
void insertatposition(Node* &tail,Node* &head,int position,int d)
{
      //insert at start
        if (position==1)
        {
            insertathead(tail,head,d);
            return;
        
        } 
    //for in between
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
        insertattail(tail,head,d);
        return;
    }
    //creating midnode
    Node *midnode=new Node(d);
    midnode->next=temp->next;
    temp->next->prev=midnode;
    temp->next=midnode;
    midnode->prev=temp;
    
}

void deletenode(Node* &head,int position)
{
    //for deletiion of start node
    if(position==1)
    {
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
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

        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        
    }
}
int main()
{

    Node*head=NULL;
    Node*tail=NULL;
    print(head); 
    // cout<<getlength(head)<<endl;
    insertathead(tail,head,11);
    print(head);
    cout<<"HEAD: "<<head->data<<endl;
    cout<<"TAIL: "<<tail->data<<endl;
     insertathead(tail,head,13);
    print(head);
    cout<<"HEAD: "<<head->data<<endl;
    cout<<"TAIL: "<<tail->data<<endl;
     insertathead(tail,head,8);
    print(head);
    cout<<"HEAD: "<<head->data<<endl;
    cout<<"TAIL: "<<tail->data<<endl;
    insertattail(tail,head,25);
    print(head);
    cout<<"HEAD: "<<head->data<<endl;
    cout<<"TAIL: "<<tail->data<<endl;
    insertatposition(tail,head,2,100);
    print(head);
    cout<<"HEAD: "<<head->data<<endl;
    cout<<"TAIL: "<<tail->data<<endl;
     insertatposition(tail,head,1,101 );
    print(head);
    cout<<"HEAD: "<<head->data<<endl;
    cout<<"TAIL: "<<tail->data<<endl;

    insertatposition(tail,head,7,102);
    print(head);
     cout<<"HEAD: "<<head->data<<endl;
    cout<<"TAIL: "<<tail->data<<endl;
    
    deletenode(head,7);
    print(head);
    cout<<"HEAD: "<<head->data<<endl;
    cout<<"TAIL: "<<tail->data<<endl;
    
    return 0;
}