#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(2);
    s.insert(10);
    s.insert(0);
    s.insert(9);
    s.insert(8);
    s.insert(1);
    s.insert(4);
    s.insert(3);
    s.insert(7);
    s.insert(2);
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;
    set<int>::iterator itei=s.begin();
    s.erase(itei);
      for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"5 is present in set or not - "<<s.count(9)<<endl;
    set<int>::iterator it=s.find(4);
    for(auto i=it;i!=s.end();i++){//4ka iterator i var me store kiya aur usko increment kiya jabtak set end nhi hojata aur sarein iterator jo value ko point karte woh print kiye using *
        cout<<*i<<" ";
    }
    cout<<endl;

    return 0;
}