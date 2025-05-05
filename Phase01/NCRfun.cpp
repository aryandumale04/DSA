#include<iostream>
using namespace std;
int factorial(int n){
    int ans=1;
    for(int i =1;i<=n;i++){
        ans=ans*i;
    }
    return ans;

}
int NCR(int n,int r){
    int ans=(factorial (n))/((factorial(r))*(factorial(n-r)));
    return ans;


}
int main(){

    int n,r;
    cout<<"Enter n and r "<<endl;
    cin>>n>>r;
    int fact=NCR(n,r);
    cout<<fact;
    return 0;
}