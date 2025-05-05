#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_front(10);
    d.push_front(7);
    d.push_back(8);
    for(int i:d){
        cout<<i<<" ";
    }
    
    d.pop_back();
    d.pop_back();
    d.pop_front();
    cout<<endl;
        for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl<<d.at(1);
    cout<<endl<<d.empty();
    cout<<endl;
    d.erase(d.begin(),d.begin()+1);
            for(int i:d){
        cout<<i<<" ";
    }

    return 0;
}