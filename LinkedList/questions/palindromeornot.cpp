//
//APPROACH 01 CREATING AN ARRAY
 //{ Driver Code Starts
// #include <algorithm>
// #include <bits/stdc++.h>
// #include <cmath>
// #include <cstdio>
// #include <ios>
// #include <iostream>
// #include <random>
// #include <sstream>
// #include <string>
// #include <vector>

// using namespace std;

// struct Node {
//     int data;
//     struct Node *next;

//     Node(int x) {
//         data = x;
//         next = NULL;
//     }
// };


// // } Driver Code Ends
// /*
// struct Node {
//   int data;
//   struct Node *next;
//   Node(int x) {
//     data = x;
//     next = NULL;
//   }
// };
// */

// class Solution {
//     private:
//         bool checkPalindrome(vector<int> arr){
//             int n=arr.size();
//             int s=0;
//             int e=n-1;
//             while(s<e){
//                 if(arr[s]!=arr[e]){
//                     return 0;
//                 }
//                 s++;
//                 e--;
//             }
//             return 1;
//         }
//       public:
//     // Function to check whether the list is palindrome.
//     bool isPalindrome(Node *head) {
//         // Your code here
        
        
//         //creating an array
//         vector<int> arr ;
//         Node *temp=head;
//         while(temp!=NULL){
//             arr.push_back(temp->data);
//             temp=temp->next;
//         }
//         //using two pointer approach
//         return checkPalindrome(arr);
        
//     }
// };


//APPROACH 2
