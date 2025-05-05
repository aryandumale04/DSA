// // /* APPROCH 1 T.C=O(N),S.C=O(1);
// // Following is the class structure of the Node class:

// // class Node
// // {
// // public:
// //     int data;
// //     Node *next;
// //     Node()
// //     {
// //         this->data = 0;
// //         next = NULL;
// //     }
// //     Node(int data)
// //     {
// //         this->data = data; 
// //         this->next = NULL;
// //     }
// //     Node(int data, Node* next)
// //     {
// //         this->data = data;
// //         this->next = next;
// //     }
// // };
// // */
// // int getLen(Node *head){
// //     int len=0;
// //     while(head!=NULL){
// //         len++;
// //         head=head->next;
// //     }
// //     return len;
// // }

// // Node *findMiddle(Node *head) {
// //     // Write your code here
// //     int length=getLen(head);
// //     int ans=(length/2)+1;
// //     Node *temp=head;
// //     int count=1;
// //     while(count<ans){
// //         temp=temp->next;
// //         count++;
// //     }
// //     return temp;

    

// // }


// //APPROACH 2 T.C O(N), S.C=O(N)
// // }
// Node* getMiddle(Node *head){
//     if(head==NULL || head->next==NULL){
//         return head;
//     }
//     //2 node  
//     if(head->next->next==NULL){
//         return head->next;
//     }


//     Node *slow=head;
//     Node *fast=head->next;
//     while(fast!=NULL){
//         fast = fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//         }
//         slow=slow->next;
//     }
//     return slow;
// }
// // Node *findMiddle(Node *head) {

//     return getMiddle(head);

// // }
