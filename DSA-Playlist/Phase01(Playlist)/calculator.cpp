#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the first and second number : ";
    cin>>a>>b;
    char op;
    cout<<"Enter the operation you want to perform ";
    cin>>op;
    switch(op){//2*num aesa bhi aa sakta yaha  
        case '+ '://double quotes not accepted,brackets bhi chalenge case ke liye
        cout<<(a+b)<<endl;
        break;


        case '-':{
        cout<<(a-b)<<endl;
        break;}

        case '*':
        cout<<a*b<<endl;
        break;

        case '/':
        cout<<a/b<<endl;
        break;
        default:
            cout<<"Please enter a valid operation!!";

    }

   

}