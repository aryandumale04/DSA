#include<iostream>
using namespace std;

int main()
{
    int no;
    cout<<"Enter the number : ";
    cin>>no;
    bool isPrime=1;
    //need to handle 2 specially
    for(int i=2;i<no;i++){
        if(no%i==0){
            cout<<no<<" is not a prime number "<<endl;
            isPrime=0;
            break;
        }
    

    }
    if(isPrime==1){
        cout<<no<<" is a Prime Number";
    }
}