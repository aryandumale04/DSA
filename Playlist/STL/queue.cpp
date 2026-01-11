#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("aryan");
     q.push("kaju");
      q.push("manzar");
       q.push("maam");
    cout<<q.front();//first element of queue
     cout<<endl<<q.back();//last element of queue
     q.pop();//pops the first element 
     cout<<endl<<q.front();
     cout<<endl<<q.size();
     
     



    return 0;

}