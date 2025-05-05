#include<iostream>
#include<list>
using namespace std;
int main(){

    //direct access is not possible here
    list<int> l;
    l.push_back(2);
    l.push_front(1);
    l.push_front(0);
    l.push_back(3);
    for(int i: l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());//will erase first element only
        for(int i: l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Size: "<<l.size();   cout<<endl;
    list<int> m(l);
            for(int i: m){
        cout<<i<<" ";
    }   cout<<endl;
    list<int> n(7,7);
                for(int i: n){
        cout<<i<<" ";
    }   cout<<endl;



    return 0;
}