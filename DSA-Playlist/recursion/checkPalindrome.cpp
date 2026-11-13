#include<iostream>
using namespace std;



//using two pointer approach
// bool check(string a,int i,int j){
//     if(i>=j){
//         return true;
//     }
//     if(a[i]!=a[j]){
//         return false;
//     }
//     else{
//         check(a,i+1,j-1);
//     }
// }
// int main(){

//     string name;
//     cout<<"Enter the string : ";
//     cin>>name;
//     bool ans=check(name,0,name.length()-1);
//     if(ans){
//         cout<<"The string is a palindrome";

//     }
//     else{
//         cout<<"The string is not a palindrome";
//     }




//     return 0;
// }

bool checkpalindrome(string str,int i,int n){
    //base case 
    if(i>=(n-i-1)){


        return true;
    }
    else{
        if(str[i]!=str[n-i-1]){
            return false;
        }
        else{
           return  checkpalindrome(str,i+1,(n-i-1));
        }
    }
}



//using single pointer only 
int main(){
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    // cout<<str.length();
     bool answer=checkpalindrome(str,0,str.length());
     if(answer){
        cout<<"Palindrome"<<endl;

     }
     else{
        cout<<"Not a palindrome"<<endl;
     }
   
}