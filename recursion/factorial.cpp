#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    int smallerprob=fact(n-1);
    
    return n*smallerprob;


}
int main(){

    int n;
    cin>>n;
    int ans=fact(n);
    cout<<ans<<endl;


    return 0;
}