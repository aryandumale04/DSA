#include<iostream>
using namespace std;
void dummy(int n){//copy ban rahi  hai n ki dummy fun me jo og n se alag hai
    n++;
    cout<<"n is "<<n<<endl;
}//dummy ne copy create karli same n nahi gaya thus pass by value me changes nhi ho sakte
int main(){
    int n;
    cin>>n;
    dummy(n);
    cout<<"number n is "<<n<<endl;
    return 0;
}