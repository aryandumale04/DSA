// // // #include<iostream>
// // // using namespace std;
// // // int main(){






// // //APPROACH ONE - TC:O(N),S.C:O(1);

// // // LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
// // // {
// // //     // Write your code here

// // //     if(head==NULL || head->next==NULL){
// // //         return head;
// // //     }
// // //     LinkedListNode<int> *prev = NULL;
// // //     LinkedListNode<int> *curr = head;
// // //     LinkedListNode<int> *forward = NULL;

// // //     while(curr!=NULL){
// // //         forward=curr->next;
// // //         curr->next=prev;
// // //         prev=curr;
// // //         curr=forward;

// // //     }
    
// // //     return prev;


// // // }




// // //APPROACH 2  T.C=O(N) S.C=O(N)
// // void revLL(LinkedListNode<int> *&head,LinkedListNode<int> *curr,LinkedListNode<int> *prev)
// // {   //base case
// //     if(curr==NULL){
// //         head=prev;
// //         return ;
// //     }
// //     LinkedListNode<int> *forward=curr->next;
// //     revLL(head,forward,curr);
    
// //     curr->next=prev;



// // }
// // LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
// // {
// //     // Write your code here

// //     LinkedListNode<int> *prev=NULL;
// //     LinkedListNode<int> *curr=head;
// //     revLL(head,curr,prev);
// //     return head;





// //APPROACH 3 T.C=O(N) S.C=O(N) 
// LinkedListNode<int> *rEVERll(LinkedListNode<int> *&head){
//     //base case
//     if(head==NULL || head->next==NULL){
//         return head;

//     }

//     LinkedListNode<int> *chotahead=rEVERll(head->next);
//     head->next->next=head;
//     head->next=NULL;
//     return chotahead;

// }
// LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
// {
//     return rEVERll(head);
// }

// // //     return 0;
// // // }