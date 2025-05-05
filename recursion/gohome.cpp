#include<iostream>
using namespace std;
void rec(int src,int det){
    //base case
    cout<<src<<endl;
    
    if(src==det){
        cout<<"Pahuch gaya"<<endl;
        return;

    }
    //processing
    src++;

    //rr
    rec(src,det);



}
int main(){
    int det=10;
    int src=1;

    rec(src,det);
}