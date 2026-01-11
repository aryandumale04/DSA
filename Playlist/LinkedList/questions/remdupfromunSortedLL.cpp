// Node *removeDuplicates(Node* head){


//     if(head==NULL){
//         return NULL;
//     }
//     else{//non empty list
//      Node *curr=head;
//      Node *prev=NULL;
//      map<int,bool> visited;
//      while(curr!=NULL){
//         if(visited[curr->data]!=true){
//             visited[curr->data]=true;
//             prev=curr;
//             curr=curr->next;
//         }
//         else{
//             Node* temp=curr;
//             prev->next=curr->next;
//             curr=curr->next;
//             delete temp;;
//         }
//      }
//      return head;


//     }
// }