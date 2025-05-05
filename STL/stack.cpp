#include<iostream>
#include<stack>//LIFO
using namespace std;
int main(){
    stack <string> s;
    s.push("aryan");
    s.push("kaju");
    s.push("manzar");
    s.push("maam");

    cout<<endl;
    cout<<s.top();
    s.pop();
    cout<<endl<<s.top();
    cout<<endl<<s.size();
    cout<<endl<<s.empty();

    return 0;
}