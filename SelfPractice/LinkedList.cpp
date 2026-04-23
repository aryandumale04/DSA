#include<iostream>
using namespace std; 

struct Node  {

    int data;
    Node* next;

    Node (int data) {
        this -> data = data;
        this -> next = NULL;
    }


};


void insertAtHead(Node * &head,  int value) {
    Node * newNode = new Node(value);
    newNode -> next = head;
    head = newNode;
}

void insertInMiddle (Node * &head, int value, int data) {
    Node *temp =  head;
    while (temp -> data != value) {
        temp = temp -> next;
    }

    Node * newNode = new Node(data);
    newNode -> next = temp -> next;
    temp->next = newNode;
}

void insertAtTail (Node * &head, int data) {

    Node  *temp = head;
    while (temp-> next != NULL) {
        temp = temp-> next;
    }

    Node * newNode =  new Node(data);
    temp->next = newNode;

}

void printLL (Node * &head) {
    Node *temp = head;
    while(temp  != NULL) {
       
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout <<endl;
}

void deleteAtHead (Node * &head) {
    if (head == NULL) {
        cout << "LL is empty" << endl;
        return;
    } else {
        //doesnt matter even if only one node is present 
        Node *delNode = head;
        head = head -> next;
        delete delNode;
    }

}

void deleteInMiddle (Node * &head, int delValue) {
    Node *temp = head;
    while (temp -> next -> data != delValue) {
        temp = temp->next;
    }

    Node * delNode = temp->next;
    temp->next = temp->next->next;
    delNode -> next = NULL;
    delete delNode;
}

void deleteAtTail (Node *&head) {
    Node *temp =  head;
    while (temp->next->next != NULL) {
        temp= temp->next;
    }
    Node *delNode = temp->next;
    temp->next = NULL;
    delete delNode;
}
int main () {

    Node * head = new Node(3);
    printLL(head);
    insertAtHead(head, 4);
    printLL(head);
    insertAtTail(head, 7);
    printLL(head);
    insertInMiddle(head, 3, 6);
    printLL(head);

    insertAtHead(head, 44);
    printLL(head);
    insertAtTail(head, 77);
    printLL(head);
    insertInMiddle(head, 44, 68);
    printLL(head);

    deleteAtHead(head);
    printLL(head);
    deleteAtTail(head);
    printLL(head);
    deleteInMiddle(head, 77);
    printLL(head);




    
    // inserting nodes in LL

    // Inserting at head 

}