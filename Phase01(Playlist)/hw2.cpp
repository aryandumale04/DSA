#include<iostream>
#include<math.h>
using namespace std;
int main(){
    // for(int i=0;i<=15;i++){
    //     cout<<i<<" ";
    //     if(i&1){
    //         continue;
    //     }
    //     i++;

    // for(int i=0;i<=5;i++){
    //     for(int j=1;j<=5;j++){
    //         cout<<i<<" "<<j<<endl;
    //     }
    //     cout<<i<<" ";
    //     if(i&1){
    //         continue;
    //     }
    //     i++;

    // int product=1;
    // int sum=0;
    // int n;
    // cin>>n;
    // while(n!=0){
    //     int digit=n%10;//digit nikalne ki ninja technique
    //     product=product*digit;
    //     sum=sum+digit;
    //     n=n/10;

    // }
    // cout<<sum<<endl;
    // cout<<product<<endl;
    // cout<<"Diff= "<<product-sum<<endl;




    //HAMMMING weight
    int n;
    cin>>n;
    // int count=0;
    // while(n!=0){
    //      if(n&1){
    //     count++;
    // }
    // n=n>>1;

    // }
   
    // cout<<count;




    // decimal to binary
    int i=0;
    int ans=0;
    while(n!=0){
        int bit=n&1;
        ans=((bit*pow(10,i))+ans);
        n=n>>1;
        i++;
    }
    cout<<ans;

    }
