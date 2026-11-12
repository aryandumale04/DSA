#include<iostream>
#include<stack>
using namespace std;
//implementing a STACK
//using array and linkedlist
class Stack{


    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this->size=size;
        arr= new int [size];
        top=-1;
    }
    
    void push(int ele){
        if((size-top)>1){
            top++;
            arr[top]=ele;
            return ;

        }
        else{

            cout<<"Stack is Full"<<endl;
            return ;

        }
    }
    void pop(){
        if(top>=0){
            top--;

        }
        else{
            cout<<"Stack is empty !!"<<endl;
        }

    }

    int peek(){
        if(top>=0){
            return arr[top];

        }
        else{
            cout<<"Stack is empty"<<endl;
            return 0;
        }

    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }

    }






};
int main(){
// //creatrion
//     stack<int> s;

// //push
//     s.push(2);
//     s.push(3);
// //pop

//     s.pop();
//     if(s.empty()){
//         cout<<"Empty\n";
//     }
//     else{
//         cout<<"Not empty\n";
//     }
 

//     cout<<"Printing top element : "<<s.top()<<endl;
//     cout<<"Size of  stack is "<<s.size()<<endl;




    Stack st(5);
    st.push(43);
    st.push(44);
    st.push(43);
    st.push(44);
    st.push(43);
    st.push(44);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    // st.pop();
    // cout<<st.peek()<<endl;
    if(st.isEmpty()){
        cout<<"Stack is empty";
    }
    else{
        cout<<"Stack is not empty";
    }


    return 0;
}