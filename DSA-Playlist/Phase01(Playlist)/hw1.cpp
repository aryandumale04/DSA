#include<iostream>
using namespace std;
// int oneco(int n){
//     return(~n);
// }
// int twoco(int n){
//     return(n + 1);
// }
int main(){
    // int n=3;
    // cout<<(25*(++n));

    // int a=1;
    // int b=a++;
    // int c=++a;
    // cout<<b<<" "<<c;


    //Negative number
    // int n=-9;
    // int one=oneco(n);
    //  cout<<one;
    // int two=twoco(one);
    // cout<<two;



    //Prime using for loop
    int n;
    cin>>n;
    bool isPrime=true;

    if(n<=1)
    {
        isPrime=false;
    }
    else if(n==2)
    {
        isPrime=false;
    }
    else
    {
        for(int i=2;i<n;i++)
        {
        if(n%i==0){
            isPrime=false;
            break;
        }
        }
    }



    if(isPrime)
    {
        cout<<n<<"is a Prime number";
    }
    else{
        cout<<n<<"is not a Prime number";
    }    

    }
    


    
