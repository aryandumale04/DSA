#include<iostream>
using namespace std;

int main () {

    // int x = 10;
    // int *ptr = &x;
    // // cout << ptr<<endl;
    // // cout << *ptr<<endl;

    // int arr[] = {10,20,30,40,50};

    // int *ptr2 = arr;
    // for (int i = 0; i < 5; i++) {
    //     cout << *ptr2 << " ";
    //     ptr2++;
    // }

    int x = 10;
    int *ptr = &x;
    cout << "Value of pointer : " << *ptr << endl;
    cout << "Value of X : "<<x << endl;
    *ptr = 20;
    cout << "Value of pointer : " << *ptr << endl;
    cout << "Value of X : "<<x << endl;

 


    return 0;
}