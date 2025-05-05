#include<iostream>
#include<map>
using namespace std;int main(){

    map<int,string> m;
    m[1]="aryan";
    m[2]="kaju";
    m[3]="manzar";
    m[4]="maam";
    m.insert({69,"badmoshi"});
    for(auto i:m){

        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl<<"finding bakchodi ->"<<m.count(69)<<endl;
    m.erase(69);
     for(auto i:m){

        cout<<i.first<<" "<<i.second<<endl;
    }
    auto y=m.find(3);
    for(auto z=y;z!=m.end();z++){
        cout<<(*z).first<<" "<<(*z).second<<endl;
    }
    return 0;
}