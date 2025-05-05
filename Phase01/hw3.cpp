#include<iostream>
using namespace std;
// 

// AP

// int ap(int a){
//     return((3* a)+7);
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans=ap(n);
//     cout<<ans;
// }

int count(int x){
    int i=0;
    int c=0;
    while(x!=0){
        if(x&1){
            c++;
        }
        x=x>>1;


    }
    return c;
}

// number of set bits in a and b
// int main(){
//     int a,b;
// cin>>a>>b;
// int ca=count(a);
// int cb=count(b);
// cout<<"THE set bits in "<<a<<" and "<<b<<"are :"<<ca+cb;

// }



//NTH fibonacci number
int main(){
    int n;
    cin>>n;
    int a=0;
    int b=1;
    if(n<=0){
        cout<<"The Fibonacii series does not exist "<<endl;


    }
    else if(n==1){
        cout<<a;
    }
    else if(n==2){
        cout<<b;
    }
    else{
        for(int i=3;i<=n;i++){
           int  next=a+b;
           a=b;
           b=next;
                   }

       cout<<b;
    }
}