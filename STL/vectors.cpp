#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(7);
    v.push_back(9);
    v.push_back(8);
    cout<<"Size of vector is : "<<v.size();//the number of elements present in vector
    cout<<endl<<"The capacity of vector is : "<<v.capacity();//memory allocated for the vector/elements(the number of elements it can accomodate)
    cout<<endl<<"The element at index 5 is : "<<v.at(5)<<endl;
    for (int i:v){
        cout<<i<<" ";


    }
    cout<<endl;
    cout<<v.front();
    cout<<endl<<v.back();
    cout<<endl<<"Accessing first element using iterator and .begin-"<<endl;
    vector<int>::iterator itei=v.begin();
    cout<<endl<<*itei;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<endl;    
    for (int i:v){
        cout<<i<<" ";


    }
    vector<int> last(v);
    cout<<endl<<"Printing vector Last ";
    cout<<endl;
    for (int i:last){
        cout<<i<<" ";


    }
    cout<<endl;   //size,value to intialise to all elements
    vector<int> b(5,69);
    for (int i:b){
        cout<<i<<" ";


    }





    return 0;
}