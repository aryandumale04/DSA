#include<iostream>
using namespace std;
int p(int n,int k){
    // base case
    if(k==0){
        return 1;

    }
    int ans=n*p(n,k-1);
    return ans;
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int ans= p(n,k);
    cout<<ans;
    return 0;
}