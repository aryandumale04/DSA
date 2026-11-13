#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int d)
        {
            this->data=d;
            this->next=NULL;
        }
        ~Node()
        {
            int value=this->data;
            if(this->next!=NULL)
            {
                delete next;
                this->next=NULL;
            }
            cout<<"Memory is free for node with data"<<value<<endl;
        }
};
void insertnode(Node* &tail,int element,int d)
{
        //assuming that the element is present in the list
        if(tail==NULL)
        {
            Node* temp= new Node(d);
            tail=temp;
            temp->next=temp;
        }
        //nonempty list
        else
        {
            Node* curr= tail;
            while(curr->data!=element)
            {
                curr=curr->next;
            }
            //element found and current points to it
            Node* temp=new Node(d);
            temp->next=curr->next;
            curr->next=temp;
        }

}
void print(Node* tail)
{
        //for empty list
        if(tail==NULL)
        {
            cout<<"List is empty";
            return;
        }
    Node* temp =tail;

    do
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<< endl;
}
void deletenode(Node* &tail,int value)
{
    //empty list
    if(tail==NULL)
    {
        cout<<"The list is empty ,ERROR!!";
        return;
    }
    //nonempty case
    else{

        //assumin that value is present in the LL;
        Node* prev=tail;
        Node* curr=prev->next;
        while(curr->data!=value)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
           //one node LL
     if(curr==prev)
    {
        tail=NULL;   
    }
        //>=2node LL
        else if(tail==curr)
        {   //agar jisko delete karna hai tail usko hi point karta hai toh
            tail=prev;//tail kisko dere farak nahi padta since circular ll
        }
        curr->next=NULL;
        delete curr;
    }
    


}
int main()
{
        Node* tail=NULL;
        //empty me insert toh position mattter nhi karta
        insertnode(tail,5,3);
        print(tail);
        insertnode(tail,3,5);
        print(tail);
        // insertnode(tail,5,7);
        // print(tail);
        // insertnode(tail,7,9);
        // print(tail);
        // insertnode(tail,5,6);
        // print(tail);
        // insertnode(tail,9,10);
        // print(tail);
        // insertnode(tail,3,4);
        // print(tail);
        deletenode(tail,5);
        print(tail);
  
    return 0;
}