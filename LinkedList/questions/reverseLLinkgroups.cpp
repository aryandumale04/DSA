// /**
//  * Definition for singly-linked list.
//  * class Node {
//  * public:
//  *     int data;
//  *     Node *next;
//  *     Node() : data(0), next(nullptr) {}
//  *     Node(int x) : data(x), next(nullptr) {}
//  *     Node(int x, Node *next) : data(x), next(next) {}
//  * };
//  */

// int getLength(Node *head,int k){
//     int c=0;
//     while(head!=NULL){
//         head=head->next;
//         c++;
//     }
//     return c;
// }
// Node* kReverse(Node* head, int k) {
//     // Write your code here.

//     //base case
//     if(head==NULL){
//         return NULL;

//     }
// //step 1 rev first k nodes
//     Node *next=NULL;
//     Node *curr=head;
//     Node *prev=NULL;
//     int count=0;
//     while(count<k && curr!=NULL){
//         next=curr->next;
//         curr->next=prev;
//         prev =curr;
//         curr=next;
//         count ++;


//     }
//     //step2:recursive call
//     if(next!=NULL){
//         if(getLength(next,k)>=k){
//             head->next=kReverse(next,k);

//         }
//         else{
//             head->next=next;

//         }
        
        

//     }

//     return prev;
// }