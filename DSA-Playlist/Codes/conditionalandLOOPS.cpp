#include<iostream>
using namespace std;
int main()
{
    // int a;
    // int b;
    // cin>>a;//jabtak input nhi denge execution aagein nhi jayega
    // if(a>0){
    //     cout<<a<<" is positive";
    // }
    // cin>>b;
    int a ;
    cout<<"Enter the first number";
    cin>>a;
    // cout<<"Enter the second number";
    // cin>>b;
    // if(a>0){
    //     cout<<"A is +ve ";
    // }
    // else{
    //     if(a<0){
    //         cout<<"A is -ve";
    //     }
    //     else{
    //         cout<<"A is negative";
    //     }
    //     // cout<<"B is greater";
    // int i=0;
    // int sum=0;
    // while(i<=a){
    //     // cout<<i<<endl;
    //     sum=sum+i;
    //     i=i+1;
    // }
    // cout<<sum;
    int i= 2;
    while(i<a){
        if(a%i==0){
            cout<<"A is not a prime number ";
        }
         
    }
    
    return 0;
}