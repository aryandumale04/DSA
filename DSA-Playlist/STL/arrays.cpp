#include<iostream>
#include<array>
using namespace std;
int main(){
    array <int,5> a={1,2,3,4,5};
    cout<<"Size of Array is "<<a.size();
    cout<<endl<<"Element at index 2 is "<<a.at(2)<<endl;
    int i=0;
    cout<<a[i]<<endl;
    cout<<a.empty();
    cout<<endl<<a.front();
    cout<<endl<<a.back();
    return 0;
}