// //APPROACH 01 T.C=O(N),S.C=O(N)
// // class Solution {
// //     private:
// //     void insertAtTail(Node *&head,Node *&tail,int d){
// //         Node *newNode=new Node(d);
        
// //         if(head==NULL){
// //             head=newNode;
// //             tail=newNode;
// //             return;
// //         }
// //         else{
// //             tail->next=newNode;
// //             tail=newNode;
// //         }
        
// //     }
// //   public:
// //     Node *cloneLinkedList(Node *head) {
// //         // Write your code here
        
// //         //step1: Create a Clone LinkedList
// //         Node *cloneHead=NULL;
// //         Node *cloneTail=NULL;
// //         Node *temp=head;
// //         while(temp!=NULL){
// //             insertAtTail(cloneHead,cloneTail,temp->data);
// //             temp=temp->next;
// //         }
// //         //step2:create a map
// //         unordered_map<Node*,Node*> oldToNew;
// //         Node *originalNode=head;
// //         Node *cloneNode=cloneHead;
// //         while(originalNode!=NULL && cloneNode!=NULL){
            
// //             oldToNew[originalNode]=cloneNode;
// //             originalNode=originalNode->next;
// //             cloneNode=cloneNode->next;
            
// //         }
// //         //step3:
// //         originalNode=head;
// //         cloneNode=cloneHead;
// //         while(originalNode!=NULL){
// //             cloneNode->random=oldToNew[originalNode->random];
// //             originalNode=originalNode->next;
// //             cloneNode=cloneNode->next;
            
// //         }
// //         return cloneHead;
        
// //     }
// // };



// //APROACH 02 T.C=0(N),SPACE.COMPLEXITY=O(1)
// //{ Driver Code Starts
// #include <bits/stdc++.h>

// #include <iostream>
// #include <map>
// #include <sstream>
// #include <vector>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
//     Node* random;

//     Node(int x) {
//         data = x;
//         next = NULL;
//         random = NULL;
//     }
// };

// void print(Node* root) {
//     map<Node*, int> link;
//     Node* temp = root;
//     for (int i = 0; temp != NULL; i++) {
//         link[temp] = i;
//         temp = temp->next;
//     }
//     temp = root;
//     cout << "[";
//     while (temp->next != NULL) {
//         if (!temp->random) {
//             cout << "[" << temp->data << ", "
//                  << "NULL"
//                  << "], ";
//         } else
//             cout << "[" << temp->data << ", " << link[temp->random] + 1 << "], ";
//         temp = temp->next;
//     }
//     if (!temp->random) {
//         cout << "[" << temp->data << ", "
//              << "NULL"
//              << "]]\n";
//     } else
//         cout << "[" << temp->data << ", " << link[temp->random] + 1 << "]]\n";
// }

// bool validation(Node* res, map<Node*, int>& orgAddress) {
//     Node* temp = res;
//     for (int i = 0; temp != NULL; i++) {
//         if (orgAddress.find(temp) != orgAddress.end()) {
//             return false;
//         }
//         if (orgAddress.find(temp->random) != orgAddress.end()) {
//             return false;
//         }
//         temp = temp->next;
//     }
//     return true;
// }

// Node* buildLinkedList(vector<pair<int, int>>& v, map<Node*, int>& orgAddress) {
//     vector<Node*> address(v.size());
//     Node* head = new Node(v[0].first);
//     address[0] = head;
//     Node* temp = head;
//     orgAddress[head] = 0;
//     for (int i = 1; i < v.size(); i++) {
//         Node* newNode = new Node(v[i].first);
//         orgAddress[newNode] = i;
//         address[i] = newNode;
//         temp->next = newNode;
//         temp = temp->next;
//     }
//     temp = head;
//     for (int i = 0; i < v.size(); i++) {
//         if (v[i].second != -1) {
//             temp->random = address[v[i].second - 1];
//         }
//         temp = temp->next;
//     }

//     return head;
// }

// bool validateInput(map<Node*, int>& orgAddress, Node* head, vector<pair<int, int>>& v) {
//     vector<Node*> address(v.size());
//     Node* temp = head;
//     for (int i = 0; i < v.size(); i++) {
//         if (orgAddress.find(temp) == orgAddress.end() || orgAddress[temp] != i) {
//             return false;
//         }
//         address[i] = temp;
//         temp = temp->next;
//     }
//     if (temp != NULL) {
//         return false;
//     }
//     temp = head;
//     for (int i = 0; i < v.size(); i++) {
//         int value = v[i].first;
//         int randomIndex = v[i].second;

//         if (randomIndex == -1) {
//             if (temp->random != NULL) {
//                 return false;
//             }
//         } else {
//             Node* tempNode = address[randomIndex - 1];
//             if (temp->random != tempNode) {
//                 return false;
//             }
//         }
//         temp = temp->next;
//     }
//     return true;
// }


// // } Driver Code Ends
// /* Link list Node
// struct Node {
//     int data;
//     Node *next;
//     Node *random;

//     Node(int x) {
//         data = x;
//         next = NULL;
//         random = NULL;
//     }
// };*/

// class Solution {
//     private:
//         void insertAtTail(Node *&cloneHead,Node *&cloneTail, int d){
//             Node *newNode = new Node(d);
//             if(cloneHead==NULL){
//                 cloneHead=newNode;
//                 cloneTail=newNode;
//                 return ;
        
//             }
//             else{
//                 cloneTail->next=newNode;
//                 cloneTail=newNode;
        
//             }
//         }

//   public:
//     Node *cloneLinkedList(Node *head) {
//         // Write your code here
        
//         //STEP01 CREATE A CLONE LIST
//         Node* cloneHead=NULL;
//         Node *cloneTail=NULL;
        
//         Node *temp=head;
//         while(temp!=NULL){
//             insertAtTail(cloneHead,cloneTail,temp->data);
//             temp=temp->next;
//         }
        
//         //STEP02 ADD CLONE NODES BETWEEN ORIGINAL NODES
//         Node *originalNode=head;
//         Node *cloneNode=cloneHead;
        
        
//         while(originalNode!=NULL && cloneNode!=NULL){
//             Node *next=originalNode->next;
//             originalNode->next=cloneNode;
//             originalNode=next;
//             next=cloneNode->next;
            
//             cloneNode->next=originalNode;
//             cloneNode=next;
            
//         }
        
//         //STEP03 SET RANDOM POINTER
//         Node *curr=head;
//         while(curr!=NULL){
//             if(curr->next!=NULL){
//                 curr->next->random=curr->random ? curr->random->next :curr->random;

                
//             }
            
//             curr=curr->next->next;
//         }
//         //step04REVERT STEP 2
        
//         originalNode=head;
//         cloneNode=cloneHead;
//         while(originalNode!=NULL && cloneNode !=NULL){
//             originalNode->next=cloneNode->next;
//             originalNode=originalNode->next;
            
//             if(originalNode!=NULL){
//                 cloneNode->next=originalNode->next;
                
                
//             }
//             cloneNode=cloneNode->next;
            

//         }
        
//         //step5RETURN HEAD
//         return cloneHead;
//     }
// };

// //{ Driver Code Starts.

// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         int n;
//         cin >> n;
//         vector<pair<int, int>> v(n); // node data, random node number
//         for (int i = 0; i < n; i++) {
//             int x;
//             string y;
//             cin >> x >> y;
//             if (y == "NULL" || y == "N" || y == "null" || y == "n" || y == "Null") {
//                 v[i] = {x, -1};
//             } else {
//                 v[i] = {x, stoi(y)};
//             }
//         }
//         map<Node*, int> orgAddress;
//         Node* head = buildLinkedList(v, orgAddress);

//         Solution ob;
//         Node* res = ob.cloneLinkedList(head);
//         // check if input modified.
//         if (validateInput(orgAddress, head, v)) {
//             if (validation(res, orgAddress)) {
//                 print(res);
//             } else {
//                 cout << "Pointing to the original list\n";
//             }
//         } else {
//             cout << "Input list modified\n";
//         }
//         cout << "~\n";
//     }
//     return 0;
// }
// // } Driver Code Ends
