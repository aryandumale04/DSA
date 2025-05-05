// bool detectCycle(Node *head){
//     if(head==NULL){
//         return false;

//     }
//     map<Node*,bool> m;
//     Node *temp=head;
//     while(temp!=NULL){
//         if(m[temp]==true){
//             return 1;
//         }
//         m[temp]=true;
//         temp=temp->next;
//     }
//     return 0;
// }
// Node* floydDetect(Node *head){



//     if(head==NULL){
//         return NULL;
//     }
//     Node* slow=head;
//     Node *fast=head;
//     while(fast != NULL && fast->next != NULL){
        
        
//         fast=fast->next;
//         if(fast->next!=NULL){
//             fast=fast->next;
//         }
//         slow=slow->next;
//         if(slow==fast){
//             return slow;
//         }

//     }
//     return NULL;

// }
// Node * getstartofloop(Node* head){
//     if(head==NULL){
//         return NULL;
//     }
//     Node *intersectionPoint=floydDetect(head);
//     Node * slow=head;
//     while(slow!=intersectionPoint){
//         slow=slow->next;
//         intersectionPoint=intersectionPoint->next;

//     }
//     return slow;

// }
// void removeLoop(Node *head){
//     if(head==NULL){
//         return;
//     }
//     Node *startOfLOOP=getstartofloop(head);
//     Node *temp=startOfLOOP;
//     while(temp->next!=startOfLOOP){
//         temp=temp->next;
//     }
//     temp->next=NULL;//works even for single node LL also

// }