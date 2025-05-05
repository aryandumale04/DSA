#include<iostream>
using namespace std;
int print(int i){
    if(i==1){
        return 0; 
    }
    else if(i==2){
        return 1;

    }
    else{
        return print(i-1)+print(i-2);
    }
}
int main(){
    int ans=print(1);
    cout<<ans;

    return 0;
}