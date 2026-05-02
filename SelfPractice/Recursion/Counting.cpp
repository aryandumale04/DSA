#include<iostream>
using namespace std; 

void backWard (int n) {

    // base case 
    if (n == 0) return;

    cout << n << " ";
    backWard(n - 1);
}

void forward (int n) {

    // base case 
    if (n == 0) return;
    forward(n - 1);

    cout << n << " ";
}

int main () {
    int n; 
    cout << "Enter  a number : ";
    cin >> n;
    cout << "Backward print : " ;
    backWard(n);
    cout << endl;
    cout << "Forward print : " ;
    forward(n);


    return 0;
}