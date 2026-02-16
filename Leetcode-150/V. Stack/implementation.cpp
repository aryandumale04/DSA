#include<iostream>
using namespace std;

// implementing stack
class Stack {
 public:
    //properties
    int *arr; // for dynamic sized array based stack
    int top;
    int size;


    //behaviour
    Stack(int size) {
        this -> size = size;
        top = -1;
        arr = new int [size]; // array created dynamically
    }

    void push(int element) {
        // first we need to check is there any space left in the stack
        if (top < size - 1) {
            top++;
            arr[top] = element;
        } else {
            cout <<"Stack is full,cannot push!" <<endl;
        }
    }

    void pop() {
        // check is the stack empty?
        if (top == -1) {
            cout <<"Stack is empty,nothing to pop!" <<endl;
        } else {
            top --;
        }
    }

    int peek() {
        // check whether any element exist or not
        if (isEmpty()) {
            cout<<"Stack is empty!"<<endl;
            return -1;
        } 
        else return arr[top];

    }
     
    bool isEmpty() {
        if (top == -1) return true;
        else return false;
    }

};

int main () {

    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(44);
    st.push(17);
    st.push(67);
    st.push(91);
    cout << st.peek() <<endl;
    st.pop();
    cout << st.peek() <<endl;
    st.pop();
    cout << st.peek() <<endl;
    st.pop();
    cout << st.peek() <<endl;
    

    if(st.isEmpty()) {
        cout <<"Stack is Empty!" <<endl;
    } else {
        cout <<"Stack is not empty!" <<endl; 
    }

    return 0;
}