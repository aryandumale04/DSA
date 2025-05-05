

// bool isValidParenthesis(string s)
// {
//     // Write your code here.

//     stack<char>stalk;
//     for(int i=0;i<s.length();i++){
//         char ch=s[i];
//         //if opening then push in stack
//         if(ch=='(' || ch=='{' || ch=='['){
//             stalk.push(ch);
//         }
//         //if closing bracket then check stack top and pop
//         else{
//             if(!stalk.empty()){
//                 char top =stalk.top();
//                 if((ch==')' && top=='(')|| (ch=='}' && top
//                 =='{') ||
//                  (ch==']' && top=='[')){
//                     stalk.pop();
//                 }
//                 else{
//                     return false;
//                 }


//             }

//             else{
//                 return false;
//             }
//         }
//     }
//     if(stalk.empty()){
//         return true;
//     }
//     else{
//         return false;
//     }
// }