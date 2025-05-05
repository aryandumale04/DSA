#include<iostream>
using namespace std;
void p(int k){
    if(k==0){
     return;

    }
    else{
        cout<<k<<endl;
        p(k-1);
    }
}
int main(){
    int n;
    cin>>n;
    p(n);
    return 0;
}