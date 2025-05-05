// void insertAtBottom(stack<int> &stack,int num){
//     //base case 
//     if(stack.empty()){
//         stack.push(num);
//         return ;
//     }
//     int n=stack.top();
//     stack.pop();
//     //recusrive call
//     insertAtBottom(stack,num);
//     stack.push(n);
    
// }

// void reverseStack(stack<int> &stack) {
//     // Write your code here

//     //base case
//     if(stack.empty){
//         return ;
//     }
//     int num= stack.top();
//     stack.pop();

//     //use recusrsion
//     reverseStack(stack);
//     insertAtBottom(stack,num);
// }